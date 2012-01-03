//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "parolaayar.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmParolaAyar *frmParolaAyar;
//---------------------------------------------------------------------------
__fastcall TfrmParolaAyar::TfrmParolaAyar(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmParolaAyar::ToolButton1Click(TObject *Sender)
{
    tblPAROLA->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::tbtnKAYDETClick(TObject *Sender)
{
    tblPAROLA->Edit();
    tblPAROLAKULLANICI_ADI->Value = AnsiUpperCase(tblPAROLAKULLANICI_ADI->Value);
    tblPAROLAPAROLA1->Value = AnsiUpperCase(tblPAROLAPAROLA1->Value);
    tblPAROLAPAROLA2->Value = AnsiUpperCase(tblPAROLAPAROLA2->Value);

    if (DBEdit2->Text != DBEdit3->Text)
        Application->MessageBoxA("Parolalar birbiriyle uyum saðlamýyor!..\nLütfen düzeltin",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        if (RadioButton2->Checked == false &&
            RadioButton1->Checked == false)
            Application->MessageBoxA("Lütfen izin türünü seçin !..",
                "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
        else if (RadioButton2->Checked == true) {
            tblPAROLA-> Edit();
            tblPAROLAIZIN->Value = true;
        }
        else {
           tblPAROLA-> Edit();
           tblPAROLAIZIN->Value = false;
        }
        tblPAROLA->Post();
        tbtnKAYDET->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::ToolButton3Click(TObject *Sender)
{
    if (tblPAROLA->RecordCount > 1)
        tblPAROLA->Delete();

    if (tblPAROLA->RecordCount == 1) {
        Application->MessageBoxA("En son kullanýcý bilgisi silinemez",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
        RadioButton2->Checked = true;
        RadioButton1->Checked = false;
        tblPAROLA->Edit();
        tblPAROLAIZIN->Value = true;
        tblPAROLA->Post();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::FormShow(TObject *Sender)
{
    if (tblPAROLAIZIN->Value == true) {
        RadioButton1->Checked = false;
        RadioButton2->Checked = true;
    }
    else {
        RadioButton1->Checked = true;
        RadioButton2->Checked = false;
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmParolaAyar::DBGrid1CellClick(TColumn *Column)
{
    if (tblPAROLAIZIN->Value == true) {
        RadioButton1->Checked = false;
        RadioButton2->Checked = true;
    }
    else {
        RadioButton1->Checked = true;
        RadioButton2->Checked = false;
    }    
}
//---------------------------------------------------------------------------


void __fastcall TfrmParolaAyar::DBGrid1KeyPress(TObject *Sender, char &Key)
{
    if (tblPAROLAIZIN->Value == true) {
        RadioButton1->Checked = false;
        RadioButton2->Checked = true;
    }
    else {
        RadioButton1->Checked = true;
        RadioButton2->Checked = false;
    }        
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::DBEdit1Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::DBEdit2Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::DBEdit3Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::DBEdit1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::DBEdit2KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmParolaAyar::DBEdit3KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

