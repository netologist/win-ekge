//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "tarife.h"
#include "sifre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmTarife *frmTarife;
//---------------------------------------------------------------------------
__fastcall TfrmTarife::TfrmTarife(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmTarife::FormShow(TObject *Sender)
{
    DBGrid1->Enabled = frmSifre->queryPAROLAIZIN->Value;    
}
//---------------------------------------------------------------------------

