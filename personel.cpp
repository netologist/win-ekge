//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "sifre.h"
#include "personel.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmPersonel *frmPersonel;
//---------------------------------------------------------------------------
__fastcall TfrmPersonel::TfrmPersonel(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmPersonel::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    DBGrid1->Enabled = frmSifre->queryPAROLAIZIN->Value;
}
//---------------------------------------------------------------------------

