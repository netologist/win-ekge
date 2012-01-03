//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "stokliste.h"
#include "AnaMenu.h"
#include "adisyon.h"
#include "stokhar.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmStokListesi *frmStokListesi;
//---------------------------------------------------------------------------
__fastcall TfrmStokListesi::TfrmStokListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::ARAMA_EditChange(TObject *Sender)
{
    querySTOKLISTE->Close();
    querySTOKLISTE->ParamByName("URUNKODU")->AsString = ARAMA_Edit->Text + "%";
    querySTOKLISTE->ParamByName("URUNADI")->AsString = ARAMA_Edit->Text + "%";
    querySTOKLISTE->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    querySTOKLISTE->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::StokHareketiSecimi(void)
{
    frmStokHareketi->tblGIRIS->Edit();
    frmStokHareketi->tblGIRISURUN_NO->Value = querySTOKLISTEURUNKODU->Value;
    frmStokHareketi->tblGIRISURUN_ADI->Value = querySTOKLISTEURUNADI->Value;
    frmStokHareketi->Enabled = true;
}

void __fastcall TfrmStokListesi::AdisyonSecimi(void)
{
    frmAdisyon->tblADISHAR->Edit();
    frmAdisyon->tblADISHARSTOKKODU->Value = querySTOKLISTEURUNKODU->Value;
    frmAdisyon->tblADISHARSTOKADI->Value = querySTOKLISTEURUNADI->Value;
    frmAdisyon->tblADISHARFIYAT->Value = querySTOKLISTEFIYATI->Value;
    frmAdisyon->tblADISHARADISYON_TURU->Value = "ÜRÜN";
    frmAdisyon->tblADISHAR->Post();
}

//---------------------------------------------------------------------------
void __fastcall TfrmStokListesi::DBGrid3CellClick(TColumn *Column)
{
    if (AYAR_Edit->Text == "0")
        StokHareketiSecimi();
    else if (AYAR_Edit->Text == "1")
        AdisyonSecimi();

    frmStokListesi->Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokListesi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    frmStokHareketi->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::FormShow(TObject *Sender)
{
    querySTOKLISTE->Close();
    querySTOKLISTE->ParamByName("URUNKODU")->AsString = ARAMA_Edit->Text+"%";
    querySTOKLISTE->ParamByName("URUNADI")->AsString = ARAMA_Edit->Text+"%";
    querySTOKLISTE->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::DBGrid3KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        if (AYAR_Edit->Text == "0")
            StokHareketiSecimi();
        else if (AYAR_Edit->Text == "1")
            AdisyonSecimi();

        frmStokListesi->Close();
        Key = 0;
    }
    else if (Key == Char(VK_ESCAPE))
        frmStokListesi->Close();

}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::FormKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_ESCAPE))
        frmStokListesi->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokListesi::ARAMA_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_ESCAPE))
        frmStokListesi->Close();
}
//---------------------------------------------------------------------------

