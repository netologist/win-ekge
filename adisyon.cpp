//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "adisyon.h"
#include "AnaMenu.h"
#include "adisyonlist.h"
#include "stokliste.h"
#include "sifre.h"
#include "musterillist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAdisyon *frmAdisyon;
//---------------------------------------------------------------------------
__fastcall TfrmAdisyon::TfrmAdisyon(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::SpeedButton1Click(TObject *Sender)
{
    frmMusteriListesi->Edit2->Text = "1";
    frmMusteriListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::tbtnYENIClick(TObject *Sender)
{
    Anahtar();
    if (frmSifre->queryPAROLAIZIN->Value == true) {
        tblADISANA->Filtered = false;
        tblADISANA->Insert();
        tblADISANA->Edit();
        tblADISANADEPARTMAN->Value = frmAnaMenu->ComboBox1->Text;
        tblADISANA->Post();
        tblADISANA->Edit();
    }
    DBGrid1->Color = clGray;
    ADISYONTOPLAM_Edit->Color = clGray;
    ADISYONTOPLAM_Edit->Enabled = false;
    DBGrid1->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::FormShow(TObject *Sender)
{
    Kilit();
    if (frmAnaMenu->ComboBox1->Text == "   SAÇ TASARIM MERKEZÝ") {
        frmAdisyon->Caption = "Adisyon Fiþi (Saç Tasarým)";
    }
    else {
        frmAdisyon->Caption = "Adisyon Fiþi (Estetik Merkezi)";
    }
    queryPERSONEL->Close();
    queryPERSONEL->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    queryPERSONEL->Open();

    queryPERSONEL->First();
    while (queryPERSONEL->Eof != true) {
        DBGrid1->Columns->Items[0]->PickList->Add(queryPERSONELPERSONEL_ADI->Value);
        queryPERSONEL->Next();
    }

    queryTUR->Close();
    queryTUR->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    queryTUR->Open();

    queryTUR->First();
    while (queryTUR->Eof != true) {
        DBGrid1->Columns->Items[1]->PickList->Add(queryTURACIKLAMA->Value);
        queryTUR->Next();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    Kilit();

    if (queryTUR->Active == true)
        queryTUR->Close();

    if (queryPERSONEL->Active == true)
        queryPERSONEL->Close();

    if (tblSTOKHAR->Active == true)
        tblSTOKHAR->Close();

    if (tblADISHAR->Active == true)
        tblADISHAR->Close();

    if (tblADISANA->Active == true)
        tblADISANA->Close();

    if (tblMUSTERI->Active == true)
        tblMUSTERI->Close();

    if (queryTOPLAM->Active == true)
        queryTOPLAM->Close();

    if (queryADISYONFIYAT->Active == true)
        queryADISYONFIYAT->Close();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::tblADISHARAfterInsert(TDataSet *DataSet)
{
    tblADISHARMNO->Value = tblADISANAMNO->Value;
    tblADISHARADISYONNO->Value = tblADISANAADISYONNO->Value;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::tblADISANAAfterInsert(TDataSet *DataSet)
{
    tblADISANATARIH->Value = tblADISANATARIH->Value.CurrentDate();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::Ekle1Click(TObject *Sender)
{
    tblADISHAR->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::Sil1Click(TObject *Sender)
{
    tblADISHAR->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::StokListesi1Click(TObject *Sender)
{
    frmStokListesi->AYAR_Edit->Text = "1";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::DBGrid1ColExit(TObject *Sender)
{
    queryTOPLAM->Close();
    queryTOPLAM->ParamByName("ADISYON_NO")->AsInteger = tblADISANAADISYONNO->Value;
    queryTOPLAM->Open();

    tblADISANA->Edit();
    tblADISANATOPLAM->Value = queryTOPLAMSUMOFTOPLAM->Value;
    tblADISANA->Post();

    queryADISYONFIYAT->Close();
    queryADISYONFIYAT->ParamByName("ACIKLAMA")->AsString =
        tblADISHARADISYON_TURU->Value;
    queryADISYONFIYAT->Open();

    tblADISHAR->Edit();
    tblADISHARFIYAT->Value = queryADISYONFIYATFIYAT->Value;
    tblADISHARTOPLAM->Value = tblADISHARADET->Value * tblADISHARFIYAT->Value;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::DBGrid1KeyPress(TObject *Sender, char &Key)
{
    switch (Key) {
        case VK_RETURN :
            Key = 0;
            if (DBGrid1->SelectedIndex != DBGrid1->FieldCount - 1)
                ++DBGrid1->SelectedIndex;
            else {
                tblADISHAR->Post();
                DBGrid1->SelectedIndex = 0;
            }
            break;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::tblADISHARAfterPost(TDataSet *DataSet)
{
    queryTOPLAM->Close();
    queryTOPLAM->ParamByName("ADISYON_NO")->AsInteger = tblADISANAADISYONNO->Value;
    queryTOPLAM->Open();

    tblADISANA->Edit();
    tblADISANATOPLAM->Value = queryTOPLAMSUMOFTOPLAM->Value;

    if (tblADISHARSTOKHAR_NO->Value == 0) {
        if (tblADISHARSTOKKODU->Value.Length() > 0)
            StokHareketiEkle();
    }
    else {
        if (tblADISHARSTOKKODU->Value.Length() == 0)
            StokHareketiDegistir();
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::SorguIslemi(void)
{
    tblADISHAR->Filtered = true;
    tblADISHAR->Filter = "[ADISYONNO]  = "+IntToStr(tblADISANAADISYONNO->Value);
}

void __fastcall TfrmAdisyon::Kilit(void)
{
    frmAdisyon->Ekle1->Enabled = false;
    frmAdisyon->Sil1->Enabled = false;
    frmAdisyon->StokListesi1->Enabled = false;

    ADISYONNO_Edit->Color = clGray;
    ADISYONTARIH_Edit->Color = clGray;
    MNO_Edit->Color = clGray;
    MADI_Edit->Color = clGray;
    MSOYADI_Edit->Color = clGray;
    ADRES1_Edit->Color = clGray;
    ADRES2_Edit->Color = clGray;
    EVTEL_Edit->Color = clGray;
    ISTEL_Edit->Color = clGray;
    CEPTEL_Edit->Color = clGray;
    DOGUM_Edit->Color = clGray;
    ADISYONTOPLAM_Edit->Color = clGray;
    DBImage1->Color = clGray;
    DBGrid1->Color = clGray;

    // Tüm database nesneleri kapatýlýyor.....
    if (queryTUR->Active == true)
        queryTUR->Close();
    if (queryPERSONEL->Active == true)
        queryPERSONEL->Close();
    if (tblSTOKHAR->Active == true)
        tblSTOKHAR->Close();
    if (tblADISHAR->Active == true)
        tblADISHAR->Close();
    if (tblADISANA->Active == true)
        tblADISANA->Close();
    if (tblMUSTERI->Active == true)
        tblMUSTERI->Close();
    if (queryTOPLAM->Active == true)
        queryTOPLAM->Close();
    if (queryADISYONFIYAT->Active == true)
        queryADISYONFIYAT->Close();
    // ---------------------------------------

    SpeedButton1->Enabled = false;
    ADISYONTARIH_Edit->Enabled = false;
    tbtnKAYDET->Enabled = false;
    tbtnSIL->Enabled = false;
    DBImage1->Enabled = false;
}

void __fastcall TfrmAdisyon::Anahtar(void)
{
    ADISYONNO_Edit->Color = clWhite;
    ADISYONTARIH_Edit->Color = clWhite;
    MNO_Edit->Color = clWhite;
    MADI_Edit->Color = clWhite;
    MSOYADI_Edit->Color = clWhite;
    ADRES1_Edit->Color = clWhite;
    ADRES2_Edit->Color = clWhite;
    EVTEL_Edit->Color = clWhite;
    ISTEL_Edit->Color = clWhite;
    CEPTEL_Edit->Color = clWhite;
    DOGUM_Edit->Color = clWhite;
    ADISYONTOPLAM_Edit->Color = clWhite;
    DBImage1->Color = clWhite;
    DBGrid1->Color = clWhite;
    DBImage1->Enabled = true;

    frmAdisyon->Ekle1->Enabled = false;
    frmAdisyon->Sil1->Enabled = false;
    frmAdisyon->StokListesi1->Enabled = false;

    tblMUSTERI->Close();
    tblADISHAR->Close();
    tblADISANA->Open();
    queryADISYONFIYAT->Open();
    queryTOPLAM->Open();
    queryTUR->Open();
    queryPERSONEL->Open();

    if (frmSifre->queryPAROLAIZIN->Value == true) {
        SpeedButton1->Enabled = true;
        tbtnSIL->Enabled = true;
        ADISYONTARIH_Edit->Enabled = true;
        frmAdisyon->Ekle1->Enabled = true;
        frmAdisyon->Sil1->Enabled = true;
        frmAdisyon->StokListesi1->Enabled = true;
    }

    tbtnKAYDET->Enabled = frmSifre->queryPAROLAIZIN->Value;
}

void __fastcall TfrmAdisyon::StokHareketiEkle(void)
{
    tblSTOKHAR->Insert();
    tblSTOKHAR->Edit();
    tblSTOKHARHAREKET_TURU->Value = "ÇIKIÞ";
    tblSTOKHARTARIH->Value = tblADISANATARIH->Value;
    tblSTOKHARURUN_NO->Value = tblADISHARSTOKKODU->Value;
    tblSTOKHARURUN_ADI->Value = tblADISHARSTOKADI->Value;
    tblSTOKHARACIKLAMA->Value = "ADISYON FÝÞÝ HAREKETÝ";
    tblSTOKHARMUSTERI_ADI->Value = tblMUSTERIM_ADI->Value+" "+tblMUSTERIM_SOYADI->Value;
    tblSTOKHARMAL_ADEDI->Value = tblADISHARADET->Value;
    tblSTOKHARBIRIM_FIYATI->Value = tblADISHARFIYAT->Value;
    tblSTOKHARMAL_BEDELI->Value =
        tblSTOKHARMAL_ADEDI->Value * tblSTOKHARBIRIM_FIYATI->Value;
    tblSTOKHARDEPARTMAN->Value = frmAnaMenu->ComboBox1->Text;
    tblSTOKHARKAYIT_NO->Value = tblADISANAADISYONNO->Value;
    tblSTOKHARISLEM_TURU->Value = "ADÝSYON";
    tblSTOKHAR->Post();

    tblADISHAR->Edit();
    tblADISHARSTOKHAR_NO->Value = tblSTOKHAROTOMATIK_SAYI->Value;
}

void __fastcall TfrmAdisyon::StokHareketiDegistir(void)
{
    tblSTOKHAR->Filtered = true;
    tblSTOKHAR->Filter = "[OTOMATIK_SAYI] = "+FloatToStr(tblADISHARSTOKHAR_NO->Value);
    tblSTOKHAR->Edit();
    tblSTOKHARHAREKET_TURU->Value = "ÇIKIÞ";
    tblSTOKHARTARIH->Value = tblADISANATARIH->Value;
    tblSTOKHARURUN_NO->Value = tblADISHARSTOKKODU->Value;
    tblSTOKHARURUN_ADI->Value = tblADISHARSTOKADI->Value;
    tblSTOKHARACIKLAMA->Value = "ADISYON FÝÞÝ HAREKETÝ";
    tblSTOKHARMUSTERI_ADI->Value = tblMUSTERIM_ADI->Value+" "+tblMUSTERIM_SOYADI->Value;
    tblSTOKHARMAL_ADEDI->Value = tblADISHARADET->Value;
    tblSTOKHARBIRIM_FIYATI->Value = tblADISHARFIYAT->Value;
    tblSTOKHARMAL_BEDELI->Value =
        tblSTOKHARMAL_ADEDI->Value * tblSTOKHARBIRIM_FIYATI->Value;
    tblSTOKHARDEPARTMAN->Value = frmAnaMenu->ComboBox1->Text;
    tblSTOKHARKAYIT_NO->Value = tblADISANAADISYONNO->Value;
    tblSTOKHARISLEM_TURU->Value = "ADÝSYON";
    tblSTOKHAR->Post();
    tblSTOKHAR->Filtered = false;
}

void __fastcall TfrmAdisyon::tbtnKAYDETClick(TObject *Sender)
{
    tblADISANA->Edit();
    tblADISANA->Post();
    tbtnKAYDET->Enabled = false;

    DBGrid1->Color = clWhite;
    ADISYONTOPLAM_Edit->Color = clWhite;
    ADISYONTOPLAM_Edit->Enabled = true;
    DBGrid1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::MNO_EditChange(TObject *Sender)
{
   tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::ADISYONNO_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::ADISYONTARIH_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::ADISYONTOPLAM_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::tbtnSILClick(TObject *Sender)
{
    int nDeger;

    if (tblADISANA->RecordCount <= 0)
        Application->MessageBoxA("Silecek bir kayýt kalmadý",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
         nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
            MB_YESNO + MB_ICONQUESTION);
        if (nDeger == IDYES) {
            DetaySil();
            tblADISANA->Delete();
            Kilit();
        }
    }
}

void __fastcall TfrmAdisyon::StokSil(double FisNo)
{
    tblSTOKHAR->Filtered = true;
    tblSTOKHAR->Filter = "[OTOMATIK_SAYI] = "+FloatToStr(FisNo);
    tblSTOKHAR->Edit();
    tblSTOKHAR->Delete();
    tblSTOKHAR->Filtered = false;
}

void __fastcall TfrmAdisyon::DetaySil(void)
{
    tblADISHAR->Active = true;
    tblADISHAR->Filtered = true;
    tblADISHAR->Filter = "[ADISYONNO] = "+IntToStr(tblADISANAADISYONNO->Value);
    tblADISHAR->First();
    while (!tblADISHAR->Eof) {
        if (tblADISHARSTOKHAR_NO->Value != 0)
            StokSil(tblADISHARSTOKHAR_NO->Value);
        tblADISHAR->Edit();
        tblADISHAR->Delete();
        tblADISHAR->Next();
    }
    tblADISHAR->Filtered = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmAdisyon::tbtnACClick(TObject *Sender)
{
    frmAdisyonListesi->Show();    
}
//---------------------------------------------------------------------------


