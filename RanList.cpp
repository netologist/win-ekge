//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "RanList.h"
#include "RanGiris.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmRandevuGirisListesi *frmRandevuGirisListesi;
//---------------------------------------------------------------------------
__fastcall TfrmRandevuGirisListesi::TfrmRandevuGirisListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmRandevuGirisListesi::DBGrid1CellClick(TColumn *Column)
{
    AnsiString SQLLine;

    SQLLine = IntToStr(Query1RANDEVU_NO->Value);
    frmRandevuGiris->Anahtar();

    frmRandevuGiris->tblRANDEVU->Filtered = true;
    frmRandevuGiris->tblRANDEVU->Filter = "[RANDEVU_NO] ='"+SQLLine+"'";

    frmRandevuGiris->queryMUSTERI->Close();
    frmRandevuGiris->queryMUSTERI->ParamByName("MNO")->AsString =
        frmRandevuGiris->tblRANDEVUMNO->Value;
    frmRandevuGiris->queryMUSTERI->Open();

    if (frmRandevuGiris->tblRANDEVURANDEVU_DURUMU->Value == "BEKLENÝYOR")
        frmRandevuGiris->RadioGroup1->ItemIndex = 0;
    else if (frmRandevuGiris->tblRANDEVURANDEVU_DURUMU->Value == "GELDÝ")
        frmRandevuGiris->RadioGroup1->ItemIndex = 1;
    else if (frmRandevuGiris->tblRANDEVURANDEVU_DURUMU->Value == "ÝPTAL")
        frmRandevuGiris->RadioGroup1->ItemIndex = 2;

    frmRandevuGirisListesi->Close();

    frmRandevuGiris->tbtKAYDET->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TfrmRandevuGirisListesi::FormShow(TObject *Sender)
{
    Query1->Close();
    Query1->Open();
}
//---------------------------------------------------------------------------

