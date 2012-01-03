//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RanGiris.h"
#include "ranislem.h"
#include "RanList.h"
#include "musterillist.h"
#include "sifre.h"
#include "personel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmRandevuGiris *frmRandevuGiris;
//---------------------------------------------------------------------------
__fastcall TfrmRandevuGiris::TfrmRandevuGiris(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::ToolButton1Click(TObject *Sender)
{
    Anahtar();
    tblRANDEVU->Filtered = false;
    queryMUSTERI->Close();
    tblRANDEVU->Insert();

    if (frmSifre->queryPAROLAIZIN->Value == true) {
        tblRANDEVU->Edit();
        tblRANDEVUTARIH->Value = tblRANDEVUTARIH->Value.CurrentDate();
        tblRANDEVUSAAT->Value = tblRANDEVUSAAT->Value.CurrentTime();
        tblRANDEVURANDEVU_DURUMU->Value = "BEKLENÝYOR";
        RadioGroup1->ItemIndex = 0;
        tblRANDEVU->Post();
    }
    tbtKAYDET->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::RadioGroup1Click(TObject *Sender)
{
    switch (RadioGroup1->ItemIndex) {
        case 0:
            tblRANDEVU->Edit();
            tblRANDEVURANDEVU_DURUMU->Value = "BEKLENÝYOR";
            tbtKAYDET->Enabled = true;
            break;
        case 1:
            tblRANDEVU->Edit();
            tblRANDEVURANDEVU_DURUMU->Value = "GELDÝ";
            tbtKAYDET->Enabled = true;
            break;
        case 2:
            tblRANDEVU->Edit();
            tblRANDEVURANDEVU_DURUMU->Value = "ÝPTAL";
            tbtKAYDET->Enabled = true;
            break;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::tbtKAYDETClick(TObject *Sender)
{
    tblRANDEVU->Post();
    tbtKAYDET->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TfrmRandevuGiris::DBEdit10Change(TObject *Sender)
{
    tbtKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::DBEdit11Change(TObject *Sender)
{
    tbtKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::DBLookupComboBox1Click(TObject *Sender)
{
    tbtKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::DBLookupComboBox2Click(TObject *Sender)
{
    tbtKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::DBMemo1Change(TObject *Sender)
{
    tbtKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::DBEdit1Change(TObject *Sender)
{
    tbtKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::SpeedButton1Click(TObject *Sender)
{
    frmMusteriListesi->Edit2->Text = "3";
    frmMusteriListesi->Show();
}
//---------------------------------------------------------------------------


void __fastcall TfrmRandevuGiris::ToolButton6Click(TObject *Sender)
{
    frmRadevuIslem->Left = frmRandevuGiris->Left + frmRandevuGiris->Width;
    frmRadevuIslem->Top = frmRandevuGiris->Top;

    frmRadevuIslem->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Kilit();
    frmRandevuGirisListesi->Close();
    frmRadevuIslem->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::Anahtar(void)
{
    tblRANDEVU->Open();
    queryMUSTERI->Open();

    if (frmSifre->queryPAROLAIZIN->Value == true) {
        ToolButton3->Enabled = true;
        tbtKAYDET->Enabled = true;

        DBLookupComboBox1->Enabled = true;
        DBLookupComboBox2->Enabled = true;
        DBMemo1->Enabled = true;
        DBEdit10->Enabled = true;
        DBEdit11->Enabled = true;
        RadioGroup1->Enabled = true;
        SpeedButton1->Enabled = true;
    }

    DBLookupComboBox1->Color = clWhite;
    DBLookupComboBox2->Color = clWhite;
    DBMemo1->Color = clWhite;
    DBEdit1->Color = clWhite;
    DBEdit2->Color = clWhite;
    DBEdit3->Color = clWhite;
    DBEdit4->Color = clWhite;
    DBEdit5->Color = clWhite;
    DBEdit6->Color = clWhite;
    DBEdit7->Color = clWhite;
    DBEdit8->Color = clWhite;
    DBEdit9->Color = clWhite;
    DBEdit10->Color = clWhite;
    DBEdit11->Color = clWhite;
}

void __fastcall TfrmRandevuGiris::Kilit(void)
{
    tblRANDEVU->Close();
    queryMUSTERI->Close();

    DBLookupComboBox1->Enabled = false;
    DBLookupComboBox2->Enabled = false;
    DBMemo1->Enabled = false;
    DBEdit10->Enabled = false;
    DBEdit11->Enabled = false;
    RadioGroup1->Enabled = false;
    ToolButton3->Enabled = false;
    tbtKAYDET->Enabled = false;
    SpeedButton1->Enabled = false;

    DBLookupComboBox1->Color = clGray;
    DBLookupComboBox2->Color = clGray;
    DBMemo1->Color = clGray;
    DBEdit1->Color = clGray;
    DBEdit2->Color = clGray;
    DBEdit3->Color = clGray;
    DBEdit4->Color = clGray;
    DBEdit5->Color = clGray;
    DBEdit6->Color = clGray;
    DBEdit7->Color = clGray;
    DBEdit8->Color = clGray;
    DBEdit9->Color = clGray;
    DBEdit10->Color = clGray;
    DBEdit11->Color = clGray;
}
void __fastcall TfrmRandevuGiris::FormShow(TObject *Sender)
{
    Kilit();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::ToolButton5Click(TObject *Sender)
{
    frmRandevuGirisListesi->Show();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuGiris::ToolButton3Click(TObject *Sender)
{
    int nDeger;

    if (tblRANDEVU->RecordCount <= 0)
        Application->MessageBoxA("Silecek bir kayýt kalmadý",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
            MB_YESNO + MB_ICONQUESTION);
        if (nDeger == IDYES) {
            tblRANDEVU->Delete();
            Kilit();
        }
    }
}
//---------------------------------------------------------------------------

