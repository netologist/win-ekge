//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "adisyonlist.h"
#include "AnaMenu.h"
#include "adisyon.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAdisyonListesi *frmAdisyonListesi;
//---------------------------------------------------------------------------
__fastcall TfrmAdisyonListesi::TfrmAdisyonListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmAdisyonListesi::DBGrid1CellClick(TColumn *Column)
{
    frmAdisyon->tblADISANA->Filtered = true;
    frmAdisyon->tblADISANA->Filter = "[ADISYONNO] = '"
        +FloatToStr(Query1ADISYONNO->Value)+"'";

    frmAdisyon->tblMUSTERI->Filtered = true;
    frmAdisyon->tblMUSTERI->Filter = "[KARTNO] = '"
        +frmAdisyon->tblADISANAMNO->Value+"'";

    frmAdisyon->tblADISHAR->Open();
    frmAdisyon->tblADISHAR->Filter = "[ADISYONNO] = '"
        +IntToStr(frmAdisyon->tblADISANAADISYONNO->Value)+"'";
    frmAdisyon->tblADISHAR->Edit();
    frmAdisyonListesi->Close();

    frmAdisyon->DBGrid1->Color = clWhite;
    frmAdisyon->ADISYONTOPLAM_Edit->Color = clWhite;
    frmAdisyon->ADISYONTOPLAM_Edit->Enabled = true;
    frmAdisyon->DBGrid1->Enabled = true;

    frmAdisyon->Anahtar();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyonListesi::FormShow(TObject *Sender)
{
    Query1->Close();
    Query1->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    Query1->Open();
}
//---------------------------------------------------------------------------

