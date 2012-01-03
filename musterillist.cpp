//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "musterillist.h"
#include "formul.h"
#include "musteri.h"
#include "adisyon.h"
#include "RanGiris.h"
#include "AnaMenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMusteriListesi *frmMusteriListesi;
int SelectButton;
//---------------------------------------------------------------------------
__fastcall TfrmMusteriListesi::TfrmMusteriListesi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteriListesi::DBGrid1CellClick(TColumn *Column)
{
    AnsiString Ara;

    Ara = DBGrid1->Columns->Grid->SelectedField->AsString;

    if (Edit2->Text == "0") {
        frmMusteri->Anahtar();
        frmMusteri->tblMUSTERI->Filtered = true;
        frmMusteri->tblMUSTERI->Filter = "[KARTNO] = "+ Ara;
        frmMusteri->tblMUSTERI->Edit();
        frmMusteri->tbtnKAYDET->Enabled = false;

        if (frmAnaMenu->ComboBox1->Text == "   SAÇ TASARIM MERKEZÝ")
            frmMusteri->StatusBar1->Panels->Items[1]->Text = "SAÇ TASARIM";
        else
            frmMusteri->StatusBar1->Panels->Items[1]->Text = "ESTETÝK";
    }
    else if (Edit2->Text == "1") {
        frmAdisyon->tblMUSTERI->Open();
        frmAdisyon->tblMUSTERI->Filtered = true;
        frmAdisyon->tblMUSTERI->Filter = "[KARTNO] = "+ Ara;
        frmAdisyon->tblADISANA->Edit();
        frmAdisyon->tblADISANAMNO->Value = frmAdisyon->tblMUSTERIKARTNO->Value;
        frmAdisyon->tblADISHAR->Open();
        frmAdisyon->tblADISHAR->Filter = "[ADISYONNO] = '"+IntToStr(frmAdisyon->tblADISANAADISYONNO->Value) + "'";
        frmAdisyon->tblADISHAR->Edit();
        frmAdisyon->Ekle1->Enabled = true;
        frmAdisyon->Sil1->Enabled = true;
        frmAdisyon->StokListesi1->Enabled = true;
    }
    else if (Edit2->Text == "2") {
        frmFormulGiris->tblMUSTERI->Open();
        frmFormulGiris->tblMUSTERI->Filtered = true;
        frmFormulGiris->tblMUSTERI->Filter = "[KARTNO] ="+Ara;
        frmFormulGiris->tblFORMULANA->Edit();
        frmFormulGiris->tblFORMULANAMNO->Value = frmFormulGiris->tblMUSTERIKARTNO->Value;
        frmFormulGiris->tblFORMULANA->Post();
        frmFormulGiris->tblFORMULANA->Edit();
        frmFormulGiris->DBGrid1->Enabled = true;
        frmFormulGiris->tblFORMULDETAY->Open();
        frmFormulGiris->tblFORMULDETAY->Filtered = true;
        frmFormulGiris->tblFORMULDETAY->Filter = "[FORMULANA] ="+IntToStr(frmFormulGiris->tblFORMULANAOTOMATIK_SAYI->Value);
    }
    else if (Edit2->Text == "3") {
        frmRandevuGiris->queryMUSTERI->Close();
        frmRandevuGiris->queryMUSTERI->ParamByName("MNO")->AsString = Ara;
        frmRandevuGiris->queryMUSTERI->Open();
        frmRandevuGiris->tblRANDEVU->Edit();
        frmRandevuGiris->tblRANDEVUMNO->Value = Ara;
        frmRandevuGiris->tbtKAYDET->Enabled = true;
    }

    if (queryMUSTLISTKARTNO->Value.Length() != 0)
        frmMusteriListesi->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteriListesi::BitBtn1Click(TObject *Sender)
{
    unsigned short Yil, Ay, Gun;
    AnsiString Tarih;

    Animate->Active = true;

    switch (SelectButton) {
        case 0:
            queryMUSTLIST->Filtered = true;
            queryMUSTLIST->Filter = "[KARTNO] = '"+MNO_Edit->Text+"*'";
            break;
        case 1:
            queryMUSTLIST->Filtered = true;
            queryMUSTLIST->Filter = "[M_ADI] = '"+MADI_Edit->Text+"*'";
            break;
        case 2:
            queryMUSTLIST->Filtered = true;
            queryMUSTLIST->Filter = "[M_SOYADI] = '"+MSOYADI_Edit->Text+"*'";
            break;
        case 3:
            Tarih = frmMusteri->TarihiAyarla(DT_Edit->Date);
            queryMUSTLIST->Filtered = true;
            queryMUSTLIST->Filter = "[DT] = '"+Tarih+"'";
            break;
    }
    Animate->Active = false;
}

void __fastcall TfrmMusteriListesi::RadioButton1Click(TObject *Sender)
{
    MNO_Edit->Enabled = true;
    MADI_Edit->Enabled = false;
    MSOYADI_Edit->Enabled = false;
    DT_Edit->Enabled = false;

    MNO_Edit->Color = clWhite;
    MADI_Edit->Color = clGray;
    MSOYADI_Edit->Color = clGray;
    DT_Edit->Color = clGray;

    MNO_Edit->Clear();
    MADI_Edit->Clear();
    MSOYADI_Edit->Clear();

    SelectButton = 0;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteriListesi::RadioButton2Click(TObject *Sender)
{
    MNO_Edit->Enabled = false;
    MADI_Edit->Enabled = true;
    MSOYADI_Edit->Enabled = false;
    DT_Edit->Enabled = false;

    MNO_Edit->Color = clGray;
    MADI_Edit->Color = clWhite;
    MSOYADI_Edit->Color = clGray;
    DT_Edit->Color = clGray;

    MNO_Edit->Clear();
    MADI_Edit->Clear();
    MSOYADI_Edit->Clear();

    SelectButton = 1;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteriListesi::RadioButton3Click(TObject *Sender)
{
    MNO_Edit->Enabled = false;
    MADI_Edit->Enabled = false;
    MSOYADI_Edit->Enabled = true;
    DT_Edit->Enabled = false;

    MNO_Edit->Color = clGray;
    MADI_Edit->Color = clGray;
    MSOYADI_Edit->Color = clWhite;
    DT_Edit->Color = clGray;

    MNO_Edit->Clear();
    MADI_Edit->Clear();
    MSOYADI_Edit->Clear();

    SelectButton = 2;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteriListesi::RadioButton4Click(TObject *Sender)
{
    MNO_Edit->Enabled = false;
    MADI_Edit->Enabled = false;
    MSOYADI_Edit->Enabled = false;
    DT_Edit->Enabled = true;

    MNO_Edit->Color = clGray;
    MADI_Edit->Color = clGray;
    MSOYADI_Edit->Color = clGray;
    DT_Edit->Color = clWhite;

    MNO_Edit->Clear();
    MADI_Edit->Clear();
    MSOYADI_Edit->Clear();

    SelectButton = 3;
}
//---------------------------------------------------------------------------



void __fastcall TfrmMusteriListesi::BitBtn2Click(TObject *Sender)
{
    frmMusteriListesi->Close();    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteriListesi::FormShow(TObject *Sender)
{
    DT_Edit->DateTime = DT_Edit->DateTime.CurrentDate();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteriListesi::FormCreate(TObject *Sender)
{
    MNO_Edit->Enabled = true;
    MADI_Edit->Enabled = false;
    MSOYADI_Edit->Enabled = false;
    DT_Edit->Enabled = false;

    MNO_Edit->Color = clWhite;
    MADI_Edit->Color = clGray;
    MSOYADI_Edit->Color = clGray;
    DT_Edit->Color = clGray;

    MNO_Edit->Clear();
    MADI_Edit->Clear();
    MSOYADI_Edit->Clear();

    SelectButton = 0;
}
//---------------------------------------------------------------------------


