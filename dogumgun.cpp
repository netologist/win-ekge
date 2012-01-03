//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dogumgun.h"
#include "dgraporu.h"
#include "musteri.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmDogumGunu *frmDogumGunu;
//---------------------------------------------------------------------------
__fastcall TfrmDogumGunu::TfrmDogumGunu(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmDogumGunu::SpeedButton1Click(TObject *Sender)
{
    AnsiString Baslangic, Bitis;

    Animate1->Active = true;

    Baslangic = frmMusteri->TarihiAyarla(DateToStr(DateTimePicker1->Date));
    Bitis = frmMusteri->TarihiAyarla(DateToStr(DateTimePicker2->Date));

    queryDOGUMGUNU->Close();
    queryDOGUMGUNU->ParamByName("BASLANGICDT")->AsString = Baslangic;
    queryDOGUMGUNU->ParamByName("BITISDT")->AsString = Bitis;
    queryDOGUMGUNU->Open();

    Animate1->Active = false;
    SpeedButton2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmDogumGunu::FormShow(TObject *Sender)
{
    DateTimePicker1->Date = DateTimePicker1->Date.CurrentDate();
    DateTimePicker2->Date = DateTimePicker1->Date + 6;
    queryDOGUMGUNU->Open();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmDogumGunu::SpeedButton2Click(TObject *Sender)
{
    frmDogumGunuRaporu->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TfrmDogumGunu::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    queryDOGUMGUNU->Close();
}
//---------------------------------------------------------------------------

