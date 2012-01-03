//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "musteri.h"
#include "AnaMenu.h"
#include "dogumgun.h"
#include "sifre.h"
#include "etiket.h"
#include "personel.h"
#include "musterillist.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMusteri *frmMusteri;
//---------------------------------------------------------------------------
__fastcall TfrmMusteri::TfrmMusteri(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KuaforGirileri1Click(TObject *Sender)
{
    frmPersonel->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DBImage1Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;

    OpenPictureDialog1->Filter = "Resim Dosyalarý | *.bmp; *.wmp; *.ico";
    DBImage1->Stretch = true;

    if (OpenPictureDialog1->Execute()) {
        tblMUSTERI->Edit();
        tbtnKAYDET->Enabled = true;  
        DBImage1->Picture->LoadFromFile(OpenPictureDialog1->Files->Strings[0]);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::tblMUSTERIAfterInsert(TDataSet *DataSet)
{
    tblMUSTERITARIH->Value = tblMUSTERITARIH->Value.CurrentDate();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::tbtnYENIClick(TObject *Sender)
{
    int nDeger;

    if (tbtnKAYDET->Enabled == true)
        nDeger = Application->MessageBox("Deðiþiklikleri kaydetmek istiyor musunuz?", "Mesaj Sorusu",
            MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        tbtnKAYDETClick(Sender);
    }
    else {
        Anahtar();
        tblMUSTERI->Cancel();

        tblMUSTERI->Filtered = false;
        tblMUSTERI->Insert();
        chkDOGAL->Checked = false;
        chkBOYALI->Checked = false;
        chkPERMALI->Checked = false;
        chkROFLE->Checked = false;

        if (frmAnaMenu->ComboBox1->Text == "   SAÇ TASARIM MERKEZÝ") {
            StatusBar1->Panels->Items[1]->Text = "SAÇ TASARIM";
            GroupBox5->Visible = false;
            GroupBox4->Visible = true;
        }
        else {
            StatusBar1->Panels->Items[1]->Text = "ESTETÝK";
            GroupBox5->Visible = true;
            GroupBox4->Visible = false;
        }
    }
}
//---------------------------------------------------------------------------

AnsiString __fastcall TfrmMusteri::TarihiAyarla(TDateTime Zaman)
{
    char chTarih[10], chGecici[10];

    memset(chTarih, 0, 10);
    memset(chGecici, 0, 10);

    strcpy(chGecici, DateToStr(Zaman).c_str());
    strncpy(&chTarih[0], &chGecici[3], 2);
    strncpy(&chTarih[2], chGecici, 2);

    if (DateToStr(Zaman) == "30.12.1899")
        return AnsiString(" ");
    else
        return AnsiString(chTarih);
}

void __fastcall TfrmMusteri::tbtnKAYDETClick(TObject *Sender)
{
    unsigned short Gun, Ay, Yil;

    if (KARTNO_Edit->Text.Length() == 0) {
        Application->MessageBoxA("Kart Numarasýný muhakkak girmelisiniz !...",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    }
    else {
        
        if (tblMUSTERIDOGUM_TARIHI->Value == StrToDate("30.12.1899")) {
            tblMUSTERI->Edit();
            tblMUSTERIDT->Value = " ";
        }
        else {
            tblMUSTERI->Edit();
            tblMUSTERIDT->Value = TarihiAyarla(tblMUSTERIDOGUM_TARIHI->Value);
        }
        tblMUSTERI->Post();
        tbtnKAYDET->Enabled = false;
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::tbtnSILClick(TObject *Sender)
{
    int nDeger;

    if (tblMUSTERI->RecordCount <= 0)
        Application->MessageBoxA("Silecek bir kayýt kalmadý",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
            MB_YESNO + MB_ICONQUESTION);
        if (nDeger == IDYES) {
            tblMUSTERI->Delete();
            Kilit();
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ADI_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EVADRESI1_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::SOYADI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EVADRESI2_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ISADRESI1_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ISADRESI2_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EMAIL_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EVTEL_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ISTEL_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::CEPTEL_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KUAFOR_comboKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------


void __fastcall TfrmMusteri::ANARENGI_comboKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::SACORANI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DTARIHI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KARTNO_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::TARIH_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ADI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::SOYADI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EVADRESI1_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EVADRESI2_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ISADRESI1_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ISADRESI2_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EMAIL_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EVTEL_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ISTEL_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::CEPTEL_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::TARIH_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KUAFOR_comboClick(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ANARENGI_comboChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::SACORANI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DTARIHI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::chkDOGALClick(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::chkBOYALIClick(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::chkPERMALIClick(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::chkROFLEClick(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DBRadioGroup1Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DBRadioGroup2Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DBRadioGroup1Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DBRadioGroup2Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::Kilit(void)
{
    if (tblMUSTERI->Active == true)
        tblMUSTERI->Close();
    if (queryFORMUL->Active == true)
        queryFORMUL->Close();
    if (queryPERSON->Active == true)
        queryPERSON->Close();
    if (queryKONTROL->Active == true)
        queryKONTROL->Close();
    if (queryRANDEVU->Active == true)
        queryRANDEVU->Close();
    if (queryADISYON->Active == true)
        queryADISYON->Close();

    DBGrid3->Enabled = false;
    ADI_Edit->Enabled = false;
    SOYADI_Edit->Enabled = false;
    EVADRESI1_Edit->Enabled = false;
    EVADRESI2_Edit->Enabled = false;
    ISADRESI1_Edit->Enabled = false;
    ISADRESI2_Edit->Enabled = false;
    EMAIL_Edit->Enabled = false;
    EVTEL_Edit->Enabled = false;
    ISTEL_Edit->Enabled = false;
    CEPTEL_Edit->Enabled = false;
    KUAFOR_combo->Enabled = false;
    ANARENGI_combo->Enabled = false;
    SACORANI_Edit->Enabled = false;
    DBImage1->Enabled = false;
    DTARIHI_Edit->Enabled = false;
    DBMemo1->Enabled = false;
    DBRadioGroup1->Enabled = false;
    DBRadioGroup2->Enabled = false;
    chkDOGAL->Enabled = false;
    chkBOYALI->Enabled = false;
    DBGrid1->Enabled = false;
    DBGrid2->Enabled = false;
    chkPERMALI->Enabled = false;
    tbtnKAYDET->Enabled = false;
    chkROFLE->Enabled = false;
    KARTNO_Edit->Enabled = false;
    TARIH_Edit->Enabled = false;
    KANGRUBU_Edit->Enabled = false;
    MESLEGI_Edit->Enabled = false;
    KURU_Edit->Enabled = false;
    KARMA_Edit->Enabled = false;
    AKNELI_Edit->Enabled = false;
    HASSAS_Edit->Enabled = false;
    YAGLI_Edit->Enabled = false;
    TURGOR_Edit->Enabled = false;
    KUPEROZ_Edit->Enabled = false;
    NEMORANI_Edit->Enabled = false;
    PIGMENTASTON_Edit->Enabled = false;
    EGZAMA_Edit->Enabled = false;
    YUZFORMU_Edit->Enabled = false;
    ELASTIKISYET_Edit->Enabled = false;
    KALINLIK_Edit->Enabled = false;
    KIRISIKLIK_Edit->Enabled = false;
    DBLookupComboBox1->Enabled = false;
    tbtnSIL->Enabled = false;

    ADI_Edit->Color = clGray;
    SOYADI_Edit->Color = clGray;
    EVADRESI1_Edit->Color = clGray;
    EVADRESI2_Edit->Color = clGray;
    ISADRESI1_Edit->Color = clGray;
    ISADRESI2_Edit->Color = clGray;
    EMAIL_Edit->Color = clGray;
    EVTEL_Edit->Color = clGray;
    ISTEL_Edit->Color = clGray;
    CEPTEL_Edit->Color = clGray;
    KUAFOR_combo->Color = clGray;
    ANARENGI_combo->Color = clGray;
    SACORANI_Edit->Color = clGray;
    DBImage1->Color = clGray;
    DBGrid3->Color = clGray;
    DTARIHI_Edit->Color = clGray;
    DBMemo1->Color = clGray;
    KARTNO_Edit->Color = clGray;
    TARIH_Edit->Color = clGray;
    KANGRUBU_Edit->Color = clGray;
    MESLEGI_Edit->Color = clGray;
    KURU_Edit->Color = clGray;
    DBGrid1->Color = clGray;
    DBGrid2->Color = clGray;
    KARMA_Edit->Color = clGray;
    AKNELI_Edit->Color = clGray;
    HASSAS_Edit->Color = clGray;
    YAGLI_Edit->Color = clGray;
    TURGOR_Edit->Color = clGray;
    KUPEROZ_Edit->Color = clGray;
    NEMORANI_Edit->Color = clGray;
    PIGMENTASTON_Edit->Color = clGray;
    EGZAMA_Edit->Color = clGray;
    YUZFORMU_Edit->Color = clGray;
    ELASTIKISYET_Edit->Color = clGray;
    KALINLIK_Edit->Color = clGray;
    KIRISIKLIK_Edit->Color = clGray;
    DBLookupComboBox1->Color = clGray;
}

void __fastcall TfrmMusteri::Anahtar(void)
{
    tblMUSTERI->Open();
    queryFORMUL->Open();
    queryADISYON->Open();
    queryPERSON->Open();
    queryRANDEVU->Open();

    if (frmSifre->queryPAROLAIZIN->Value == true) {
        DBGrid1->Enabled = true;
        DBGrid2->Enabled = true;
        DBGrid3->Enabled = true;
        ADI_Edit->Enabled = true;
        tbtnSIL->Enabled = true;
        SOYADI_Edit->Enabled = true;
        EVADRESI1_Edit->Enabled = true;
        EVADRESI2_Edit->Enabled = true;
        ISADRESI1_Edit->Enabled = true;
        ISADRESI2_Edit->Enabled = true;
        EMAIL_Edit->Enabled = true;
        EVTEL_Edit->Enabled = true;
        ISTEL_Edit->Enabled = true;
        CEPTEL_Edit->Enabled = true;
        KUAFOR_combo->Enabled = true;
        ANARENGI_combo->Enabled = true;
        SACORANI_Edit->Enabled = true;
        DBImage1->Enabled = true;
        DTARIHI_Edit->Enabled = true;
        DBMemo1->Enabled = true;
        DBRadioGroup1->Enabled = true;
        DBRadioGroup2->Enabled = true;
        chkDOGAL->Enabled = true;
        chkBOYALI->Enabled = true;
        chkPERMALI->Enabled = true;
        chkROFLE->Enabled = true;
        KARTNO_Edit->Enabled = true;
        TARIH_Edit->Enabled = true;
        KANGRUBU_Edit->Enabled = true;
        MESLEGI_Edit->Enabled = true;
        KURU_Edit->Enabled = true;
        KARMA_Edit->Enabled = true;
        AKNELI_Edit->Enabled = true;
        HASSAS_Edit->Enabled = true;
        YAGLI_Edit->Enabled = true;
        TURGOR_Edit->Enabled = true;
        KUPEROZ_Edit->Enabled = true;
        NEMORANI_Edit->Enabled = true;
        PIGMENTASTON_Edit->Enabled = true;
        EGZAMA_Edit->Enabled = true;
        YUZFORMU_Edit->Enabled = true;
        ELASTIKISYET_Edit->Enabled = true;
        KALINLIK_Edit->Enabled = true;
        KIRISIKLIK_Edit->Enabled = true;
        DBLookupComboBox1->Enabled = true;
    }

    ADI_Edit->Color = clWhite;
    SOYADI_Edit->Color = clWhite;
    EVADRESI1_Edit->Color = clWhite;
    DBGrid1->Color = clWhite;
    DBGrid2->Color = clWhite;
    DBGrid3->Color = clWhite;
    EVADRESI2_Edit->Color = clWhite;
    ISADRESI1_Edit->Color = clWhite;
    ISADRESI2_Edit->Color = clWhite;
    EMAIL_Edit->Color = clWhite;
    EVTEL_Edit->Color = clWhite;
    ISTEL_Edit->Color = clWhite;
    CEPTEL_Edit->Color = clWhite;
    KUAFOR_combo->Color = clWhite;
    ANARENGI_combo->Color = clWhite;
    SACORANI_Edit->Color = clWhite;
    DBImage1->Color = clWhite;
    DTARIHI_Edit->Color = clWhite;
    DBMemo1->Color = clWhite;
    KARTNO_Edit->Color = clWhite;
    TARIH_Edit->Color = clWhite;
    KANGRUBU_Edit->Color = clWhite;
    MESLEGI_Edit->Color = clWhite;
    KURU_Edit->Color = clWhite;
    KARMA_Edit->Color = clWhite;
    AKNELI_Edit->Color = clWhite;
    HASSAS_Edit->Color = clWhite;
    YAGLI_Edit->Color = clWhite;
    TURGOR_Edit->Color = clWhite;
    KUPEROZ_Edit->Color = clWhite;
    NEMORANI_Edit->Color = clWhite;
    PIGMENTASTON_Edit->Color = clWhite;
    EGZAMA_Edit->Color = clWhite;
    YUZFORMU_Edit->Color = clWhite;
    ELASTIKISYET_Edit->Color = clWhite;
    KALINLIK_Edit->Color = clWhite;
    KIRISIKLIK_Edit->Color = clWhite;
    DBLookupComboBox1->Color = clWhite;
}

void __fastcall TfrmMusteri::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    int nDeger;

    if (tbtnKAYDET->Enabled == true)
        nDeger = Application->MessageBox("Deðiþiklikleri kaydetmek istiyor musunuz?", "Mesaj Sorusu",
            MB_YESNO + MB_ICONQUESTION);

    if (nDeger == IDYES) {
        tbtnKAYDETClick(Sender);
        Kilit();
    }
    else {
        tblMUSTERI->Cancel();
        Kilit();
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmMusteri::tbtnACClick(TObject *Sender)
{
    frmMusteriListesi->Edit2->Text = "0";
    frmMusteriListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::FormShow(TObject *Sender)
{
    TDateTime Tarih;

    if (frmAnaMenu->ComboBox1->Text == "   SAÇ TASARIM MERKEZÝ") {
        frmMusteri->Caption = "Müþteri Kartý (Saç Tasarým)";
        StatusBar1->Panels->Items[1]->Text = "SAÇ TASARIM";
        GroupBox5->Visible = false;
        GroupBox4->Visible = true;
    }
    else {
        frmMusteri->Caption = "Müþteri Kartý (Estetik Merkezi)";
        StatusBar1->Panels->Items[1]->Text = "ESTETÝK";
        GroupBox5->Visible = true;
        GroupBox4->Visible = false;
    }
    queryPERSON->Close();
    queryPERSON->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    queryPERSON->Open();

    StatusBar1->Panels->Items[2]->Text = Tarih.CurrentDate();
    Kilit();

}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KANGRUBU_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::MESLEGI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KURU_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::AKNELI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::AKNELI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KARMA_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::HASSAS_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::YAGLI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::YAGLI_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::TURGOR_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KUPEROZ_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::NEMORANI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::PIGMENTASTON_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EGZAMA_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::YUZFORMU_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ELASTIKISYET_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KALINLIK_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KIRISIKLIK_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DBLookupComboBox1KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KURU_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KARMA_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::HASSAS_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::TURGOR_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KUPEROZ_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::NEMORANI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::PIGMENTASTON_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::EGZAMA_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::YUZFORMU_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::ELASTIKISYET_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KALINLIK_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KIRISIKLIK_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DBLookupComboBox1Click(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KANGRUBU_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::MESLEGI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::DBMemo1Change(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmMusteri::KARTNO_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------


void __fastcall TfrmMusteri::ToolButton2Click(TObject *Sender)
{
    frmDogumGunu->Show();
}
//---------------------------------------------------------------------------


void __fastcall TfrmMusteri::ToolButton3Click(TObject *Sender)
{
    frmEtiket->QuickRep1->Preview();    
}
//---------------------------------------------------------------------------

