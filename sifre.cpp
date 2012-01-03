//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sifre.h"
#include "AnaMenu.h"
#include "Acilis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmSifre *frmSifre;
//---------------------------------------------------------------------------
__fastcall TfrmSifre::TfrmSifre(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmSifre::BitBtn1Click(TObject *Sender)
{
    Edit1->Text = AnsiUpperCase(Edit1->Text);
    Edit2->Text = AnsiUpperCase(Edit2->Text);

    queryPAROLA->Close();
    queryPAROLA->ParamByName("KADI")->AsString = Edit1->Text;
    queryPAROLA->ParamByName("PAROLA")->AsString = Edit2->Text;
    queryPAROLA->Open();

    if (queryPAROLAKULLANICI_ADI->Value.Length() == 0)
        Application->MessageBoxA("Kullanýcý Adý veya Parola yanlýþ!...",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        frmAnaMenu->Show();
        frmAnaMenu->ParolaAyarlar1->Enabled = queryPAROLAIZIN->Value;

    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmSifre::BitBtn2Click(TObject *Sender)
{
    frmAcilis->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmSifre::Edit1KeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------


