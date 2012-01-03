//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "frmHakkinda.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAbout *frmAbout;
//---------------------------------------------------------------------------
__fastcall TfrmAbout::TfrmAbout(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAbout::Button1Click(TObject *Sender)
{
    frmAbout->Close();    
}
//---------------------------------------------------------------------------
