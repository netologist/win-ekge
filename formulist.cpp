//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "formulist.h"
#include "formul.h"
#include "sifre.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmFormulListesi *frmFormulListesi;
//---------------------------------------------------------------------------
__fastcall TfrmFormulListesi::TfrmFormulListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulListesi::FormShow(TObject *Sender)
{

    queryLIST->Close();
    queryLIST->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmFormulListesi::DBGrid1CellClick(TColumn *Column)
{
    frmFormulGiris->tblFORMULANA->Open();
    frmFormulGiris->tblFORMULDETAY->Close();
    frmFormulGiris->tblMUSTERI->Close();

    frmFormulGiris->tblMUSTERI->Open();
    frmFormulGiris->tblFORMULDETAY->Open();
    frmFormulGiris->DBGrid1->Enabled = true;

    frmFormulGiris->tblFORMULANA->Filtered = true;
    frmFormulGiris->tblFORMULANA->Filter = "[OTOMATIK_SAYI]="
        +IntToStr(queryLISTOTOMATIK_SAYI->Value);

    frmFormulGiris->tblMUSTERI->Filtered = true;
    frmFormulGiris->tblMUSTERI->Filter = "[KARTNO]="
        +frmFormulGiris->tblFORMULANAMNO->Value;

    frmFormulGiris->tblFORMULDETAY->Filtered = true;
    frmFormulGiris->tblFORMULDETAY->Filter = "[FORMULANA]="
        +IntToStr(queryLISTOTOMATIK_SAYI->Value);

    frmFormulListesi->Close();
    frmFormulGiris->Anahtar();

    frmFormulGiris->DBGrid1->Color = clWhite;
    frmFormulGiris->DBGrid1->Enabled = frmSifre->queryPAROLAIZIN->Value;
}
//---------------------------------------------------------------------------

