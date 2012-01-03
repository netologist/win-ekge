//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "formul.h"
#include "sifre.h"
#include "AnaMenu.h"
#include "tarife.h"
#include "formulist.h"
#include "musterillist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFormulGiris *frmFormulGiris;
//---------------------------------------------------------------------------
__fastcall TfrmFormulGiris::TfrmFormulGiris(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmFormulGiris::ToolButton1Click(TObject *Sender)
{
    if (tbtnKAYDET->Enabled == true)
        tbtnKAYDETClick(Sender);
    else {
        tblFORMULANA->Open();
        tblFORMULDETAY->Close();
        tblMUSTERI->Close();

        Anahtar();
        tblFORMULANA->Filtered = false;
        if (frmSifre->queryPAROLAIZIN->Value == true) {
            tblFORMULANA->Insert();
            tblFORMULANA->Edit();
            tblFORMULANATARIH->Value = tblFORMULANATARIH->Value.CurrentDate();
            tblFORMULANA->Post();
            tblFORMULANA->Edit();
            tbtnSIL->Enabled = true;
        }
        DBGrid1->Color = clGray;
        DBGrid1->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::Anahtar(void)
{
    if (frmSifre->queryPAROLAIZIN->Value == true) {
        DBEdit7->Enabled = true;
        DBEdit9->Enabled = true;
        DBLookupComboBox1->Enabled = true;
        SpeedButton1->Enabled = true;
        DBGrid1->Enabled = false;
    }
    tbtnKAYDET->Enabled = frmSifre->queryPAROLAIZIN->Value;
    tbtnSIL->Enabled = frmSifre->queryPAROLAIZIN->Value;

    DBLookupComboBox1->Color = clWhite;
    DBEdit1->Color = clWhite;
    DBEdit2->Color = clWhite;
    DBEdit3->Color = clWhite;
    DBEdit4->Color = clWhite;
    DBEdit5->Color = clWhite;
    DBEdit6->Color = clWhite;
    DBEdit7->Color = clWhite;
    DBEdit8->Color = clWhite;
    DBEdit9->Color = clWhite;
    DBGrid1->Color = clWhite;
}

void __fastcall TfrmFormulGiris::Kilit(void)
{
    DBLookupComboBox1->Enabled = false;
    DBEdit1->Enabled = false;
    DBEdit2->Enabled = false;
    DBEdit3->Enabled = false;
    DBEdit4->Enabled = false;
    DBEdit5->Enabled = false;
    DBEdit6->Enabled = false;
    DBEdit7->Enabled = false;
    DBEdit8->Enabled = false;
    DBEdit9->Enabled = false;
    SpeedButton1->Enabled = false;
    DBGrid1->Enabled = false;

    tbtnKAYDET->Enabled = false;
    tbtnSIL->Enabled = false;

    DBEdit1->Color = clGray;
    DBEdit2->Color = clGray;
    DBEdit3->Color = clGray;
    DBLookupComboBox1->Color = clGray;
    DBEdit4->Color = clGray;
    DBEdit5->Color = clGray;
    DBEdit6->Color = clGray;
    DBEdit7->Color = clGray;
    DBEdit8->Color = clGray;
    DBEdit9->Color = clGray;
    DBGrid1->Color = clGray;

    tblFORMULANA->Close();
    tblFORMULDETAY->Close();
    tblMUSTERI->Close();
    tbtnSIL->Enabled = false;
    tbtnKAYDET->Enabled = false;
}

void __fastcall TfrmFormulGiris::FormShow(TObject *Sender)
{
    Kilit();

    queryTUR->Close();
    queryTUR->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    queryTUR->Open();

    queryTUR->First();
    while (queryTUR->Eof != true) {
        DBGrid1->Columns->Items[0]->PickList->Add(queryTURURUNADI->Value);
        queryTUR->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::tbtnKAYDETClick(TObject *Sender)
{
    if (tblFORMULANAMNO->Value.Length() == 0)
        Application->MessageBoxA("Müþteri seçmezseniz kayýt yapamazsýnýz !",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        tblFORMULANA->Edit();
        tblFORMULANA->Post();
        tblFORMULDETAY->Edit();
        tblFORMULDETAY->Post();

        tbtnKAYDET->Enabled = false;
        DBGrid1->Color = clWhite;
        DBGrid1->Enabled = true;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::SpeedButton1Click(TObject *Sender)
{
    frmMusteriListesi->Edit2->Text = "2";
    frmMusteriListesi->Show();
}
//---------------------------------------------------------------------------
void __fastcall TfrmFormulGiris::tblFORMULDETAYBeforePost(
      TDataSet *DataSet)
{
    tblFORMULDETAY->Edit();
    tblFORMULDETAYFORMULANA->Value = tblFORMULANAOTOMATIK_SAYI->Value;
}
//---------------------------------------------------------------------------


void __fastcall TfrmFormulGiris::ToolButton5Click(TObject *Sender)
{
    frmFormulListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::DBEdit8Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::DBEdit7Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::DBEdit9Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::tblFORMULDETAYAfterEdit(TDataSet *DataSet)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::tbtnSILClick(TObject *Sender)
{
    AnsiString AKTARMA;
    AKTARMA = "DELETE FROM FORMULDET WHERE FORMULANA = '"
            + IntToStr(tblFORMULANAOTOMATIK_SAYI->Value)+"'";
    int nDeger;

    if (tblFORMULANA->RecordCount <= 0)
        Application->MessageBoxA("Silecek bir kayýt kalmadý",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
            MB_YESNO + MB_ICONQUESTION);
        if (nDeger == IDYES) {
            tblFORMULDETAY->Close();
            queryFORMULSIL->SQL->Clear();
            queryFORMULSIL->SQL->Add(AKTARMA);
            queryFORMULSIL->ExecSQL();

            tblFORMULANA->Delete();
            Kilit();
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::dsrcFORMULDETAYDataChange(TObject *Sender,
      TField *Field)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    if (tbtnKAYDET->Enabled == true)
        tbtnKAYDETClick(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulGiris::DBLookupComboBox1Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

