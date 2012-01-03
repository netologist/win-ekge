//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "hareketlist.h"
#include "stokhar.h"
#include "AnaMenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmHareketListesi *frmHareketListesi;
//---------------------------------------------------------------------------
__fastcall TfrmHareketListesi::TfrmHareketListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmHareketListesi::Firma_EditChange(TObject *Sender)
{
    queryHAREKET->Close();
    queryHAREKET->ParamByName("FATURA_NO")->AsString = Firma_Edit->Text+"%";
    queryHAREKET->ParamByName("HAREKET_TURU")->AsString = frmStokHareketi->Edit1->Text;
    queryHAREKET->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    queryHAREKET->Open();
}
//---------------------------------------------------------------------------
void __fastcall TfrmHareketListesi::DBGrid1CellClick(TColumn *Column)
{
    frmStokHareketi->Anahtar();

    frmStokHareketi->tblSTOKHARANA->Edit();
    frmStokHareketi->tblSTOKHARANA->Filtered = true;
    frmStokHareketi->tblSTOKHARANA->Filter =
        "[REFERANS]='"+queryHAREKETREFERANS->Value+"'";
    frmStokHareketi->tbtnKAYDET->Enabled = false;

    frmStokHareketi->KAYITNO_Edit->Enabled = false;
    frmStokHareketi->KAYITNO_Edit->Color = clGray;
    frmStokHareketi->KAYITNO_Edit->Font->Color = clWhite;

    frmStokHareketi->DBGrid1->Enabled = true;
    frmStokHareketi->DBGrid1->Color = clWhite;
    frmStokHareketi->tblGIRIS->Open();
    frmStokHareketi->tblGIRIS->Filtered = true;
    frmStokHareketi->tblGIRIS->Filter =
        "[REFERANS] = '"+queryHAREKETREFERANS->Value+"'";
    frmStokHareketi->tbtnKAYDET->Enabled = false;

    frmHareketListesi->Close();
}

//---------------------------------------------------------------------------
void __fastcall TfrmHareketListesi::FormShow(TObject *Sender)
{
    queryHAREKET->Close();
    queryHAREKET->ParamByName("FATURA_NO")->AsString = AnsiUpperCase(Firma_Edit->Text+"%");
    queryHAREKET->ParamByName("HAREKET_TURU")->AsString = frmStokHareketi->Edit1->Text;
    queryHAREKET->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    queryHAREKET->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmHareketListesi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        frmStokHareketi->Anahtar();

        frmStokHareketi->tblSTOKHARANA->Edit();
        frmStokHareketi->tblSTOKHARANA->Filtered = true;
        frmStokHareketi->tblSTOKHARANA->Filter =
            "[FATURANO]='"+queryHAREKETFATURANO->Value+"'";
        frmStokHareketi->tbtnKAYDET->Enabled = false;

        frmStokHareketi->KAYITNO_Edit->Enabled = false;
        frmStokHareketi->KAYITNO_Edit->Color = clGray;
        frmStokHareketi->KAYITNO_Edit->Font->Color = clWhite;

        frmStokHareketi->DBGrid1->Enabled = true;
        frmStokHareketi->DBGrid1->Color = clWhite;
        frmStokHareketi->tblGIRIS->Open();
        frmStokHareketi->tblGIRIS->Filtered = true;
        frmStokHareketi->tblGIRIS->Filter =
            "[KAYIT_NO] = '"+frmStokHareketi->KAYITNO_Edit->Text+"'";
        frmStokHareketi->tbtnKAYDET->Enabled = false;

        frmHareketListesi->Close();
    }
}
//---------------------------------------------------------------------------

