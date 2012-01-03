//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RanKontrol.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CCALENDR"
#pragma resource "*.dfm"
TfrmRandevuCizelgesi *frmRandevuCizelgesi;
//---------------------------------------------------------------------------
__fastcall TfrmRandevuCizelgesi::TfrmRandevuCizelgesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmRandevuCizelgesi::FormShow(TObject *Sender)
{
    MonthCalendar1->Date = MonthCalendar1->Date.CurrentDate();

    tblRANDEVU->Filtered = true;
    tblRANDEVU->Filter = "[TARIH] = '"+MonthCalendar1->Date.DateString()+"'";
}
//---------------------------------------------------------------------------
void __fastcall TfrmRandevuCizelgesi::DBGrid1CellClick(TColumn *Column)
{
    queryMUSTERI->Close();
    queryMUSTERI->ParamByName("MNO")->AsString = tblRANDEVUMNO->Value;
    queryMUSTERI->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuCizelgesi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    queryMUSTERI->Close();
    queryMUSTERI->ParamByName("MNO")->AsString = tblRANDEVUMNO->Value;
    queryMUSTERI->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuCizelgesi::MonthCalendar1Click(TObject *Sender)
{
    tblRANDEVU->Filtered = true;
    tblRANDEVU->Filter = "[TARIH] = '"+MonthCalendar1->Date.DateString()+"'";
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuCizelgesi::Yazdr1Click(TObject *Sender)
{
    QRLabel6->Caption = MonthCalendar1->Date.DateString();
    QuickRep1->Print();
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuCizelgesi::nzleme1Click(TObject *Sender)
{
    QRLabel6->Caption = MonthCalendar1->Date.DateString();
    QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TfrmRandevuCizelgesi::YazcAyar1Click(TObject *Sender)
{
    QuickRep1->PrinterSetup();
}
//---------------------------------------------------------------------------

