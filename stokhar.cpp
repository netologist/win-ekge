//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "stokhar.h"
#include "stokliste.h"
#include "sifre.h"
#include "hareketlist.h"
#include "AnaMenu.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmStokHareketi *frmStokHareketi;
//---------------------------------------------------------------------------
__fastcall TfrmStokHareketi::TfrmStokHareketi(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::SpeedButton1Click(TObject *Sender)
{
    frmStokListesi->AYAR_Edit->Text = "0";
    frmStokListesi->Show();
    frmStokHareketi->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tbtnYENIClick(TObject *Sender)
{
    KayitKontrol(); // kaydedilip edilmeyecei ile ilgili ayarlamalar
    Anahtar(); // sistemi aktif et.

    tblSTOKHARANA->Filtered = false;
    tblSTOKHARANA->Insert();
    tblSTOKHARANATARIH->Value = tblGIRISTARIH->Value.CurrentDate();
    tbtnKAYDET->Enabled = false;

    tblGIRIS->Active = false;
    DBGrid1->Enabled = false;
    DBGrid1->Color = clGray;
}
//---------------------------------------------------------------------------
bool __fastcall TfrmStokHareketi::TekrarKontrol(void)
{
    queryTEKRARKONTROL->Close();
    queryTEKRARKONTROL->ParamByName("FATURANO")->AsString = KAYITNO_Edit->Text;
    queryTEKRARKONTROL->Open();

    if (queryTEKRARKONTROLFATURANO->Value.Length() == 0)
        return false;

    return true;
}

void __fastcall TfrmStokHareketi::tbtnKAYDETClick(TObject *Sender)
{
    AnsiString ReferansID;

    if (KAYITNO_Edit->Text.Length() == 0)
        Application->MessageBoxA("Fatura numarasýný giriniz.",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else if (TARIH_NO->Text.Length() == 0)
        Application->MessageBoxA("Tarihi giriniz.",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else if (MADI_Edit->Text.Length() == 0)
        Application->MessageBoxA("Firma ismini giriniz.",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        tblSTOKHARANA->Edit();
        tblSTOKHARANADEPARTMAN->Value = frmAnaMenu->ComboBox1->Text;
        tblSTOKHARANAKAYIT_TURU->Value = frmStokHareketi->Edit1->Text;
        if (tblSTOKHARANADEPARTMAN->Value == "   SAÇ TASARIM MERKEZÝ")
            ReferansID = "STM";
        else
            ReferansID = "EM";
        ReferansID = ReferansID + frmStokHareketi->Edit1->Text;
        ReferansID = ReferansID + KAYITNO_Edit->Text;
        tblSTOKHARANA->Edit();

        if (KAYITNO_Edit->Enabled == true) {
            tblSTOKHARANAFATURANO->Value = KAYITNO_Edit->Text;
            DBGrid1->Enabled = true;
            DBGrid1->Color = clWhite;
            KAYITNO_Edit->Enabled = false;
            KAYITNO_Edit->Color = clGray;
            KAYITNO_Edit->Font->Color = clWhite;
            tblGIRIS->Open();
            tblGIRIS->Insert();
        }
        tblSTOKHARANA->Post();
        tbtnKAYDET->Enabled = false;

/*        tblGIRIS->Edit();
        tblGIRIS->Post();*/
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::tbtnSILClick(TObject *Sender)
{
    int nDeger;

    if (tblSTOKHARANA->RecordCount <= 0)
        Application->MessageBoxA("Silecek bir kayýt kalmadý",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
            MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES) {
            tblSTOKHARANA->Delete();
            Kilit();
        }
    }
}

//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::KAYITNO_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::TARIH_NOChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::MADI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::ACIKLAMA_MemoChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::URUNNO_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::URUNADI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::MALADEDI_EditChange(TObject *Sender)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::KAYITNO_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::TARIH_NOKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::MADI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------


void __fastcall TfrmStokHareketi::URUNNO_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::URUNADI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::MALADEDI_EditKeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------


void __fastcall TfrmStokHareketi::Kilit(void)
{
    tblGIRIS->Close();
    tblSTOKHARANA->Close();

    KAYITNO_Edit->Color = clGray;
    TARIH_NO->Color = clGray;
    MADI_Edit->Color = clGray;
    ACIKLAMA_Memo->Color = clGray;
    DBGrid1->Color = clGray;

    KAYITNO_Edit->Enabled = false;
    TARIH_NO->Enabled = false;
    MADI_Edit->Enabled = false;
    ACIKLAMA_Memo->Enabled = false;
    tbtnKAYDET->Enabled = false;
    tbtnSIL->Enabled = false;
    DBGrid1->Enabled = false;
    Sil1->Enabled = false;
}

void __fastcall TfrmStokHareketi::Anahtar(void)
{
    tblSTOKHARANA->Open();

    KAYITNO_Edit->Color = clWhite;
    TARIH_NO->Color = clWhite;
    MADI_Edit->Color = clWhite;
    ACIKLAMA_Memo->Color = clWhite;
    KAYITNO_Edit->Font->Color = clBlack;

    if (frmSifre->queryPAROLAIZIN->Value == true) {
        Sil1->Enabled = true;
        KAYITNO_Edit->Enabled = true;
        TARIH_NO->Enabled = true;
        MADI_Edit->Enabled = true;
        ACIKLAMA_Memo->Enabled = true;
        tbtnSIL->Enabled = true;
    }
}

void __fastcall TfrmStokHareketi::FormClose(TObject *Sender,
      TCloseAction &Action)
{
    KayitKontrol(); // kaydedilip edilmeyecei ile ilgili ayarlamalar
    Kilit();
}
//---------------------------------------------------------------------------
void __fastcall TfrmStokHareketi::KayitKontrol(void)
{
    int nDeger;
    TObject *Sender;

    if (tbtnKAYDET->Enabled == true) {
        nDeger = Application->MessageBox("Deðiþiklikler kaydedilsin mi?", "Uyarý mesajý",
            MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES)
            tbtnKAYDETClick(Sender);
        else
            tblGIRIS->Cancel();
    }
}

void __fastcall TfrmStokHareketi::FormShow(TObject *Sender)
{
    Kilit();
    if (frmAnaMenu->ComboBox1->Text == "   SAÇ TASARIM MERKEZÝ") {
        frmStokHareketi->Caption = frmStokHareketi->Caption + " (Saç Tasarým)";
    }
    else {
        frmStokHareketi->Caption = frmStokHareketi->Caption + " (Estetik Merkezi)";
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tbtnACClick(TObject *Sender)
{
    frmHareketListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::A1Click(TObject *Sender)
{
    frmStokListesi->AYAR_Edit->Text = "0";
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::Yeni1Click(TObject *Sender)
{
    tblGIRIS->Insert();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::Kaydet1Click(TObject *Sender)
{
    tblGIRIS->Edit();
    tblGIRIS->Post();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::Sil1Click(TObject *Sender)
{
    if (tblGIRIS->RecordCount >= 0)
        tblGIRIS->Delete();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblGIRISBIRIM_FIYATIChange(
      TField *Sender)
{
    tbtnKAYDET->Enabled = true;
    tblGIRIS->Edit();
    tblGIRISMAL_BEDELI->Value =
        tblGIRISMAL_ADEDI->Value * tblGIRISBIRIM_FIYATI->Value;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblGIRISMAL_ADEDIChange(TField *Sender)
{
    tbtnKAYDET->Enabled = true;
    tblGIRIS->Edit();
    tblGIRISMAL_BEDELI->Value =
        tblGIRISMAL_ADEDI->Value * tblGIRISBIRIM_FIYATI->Value;
}
//---------------------------------------------------------------------------




void __fastcall TfrmStokHareketi::tblGIRISURUN_NOChange(TField *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblGIRISURUN_ADIChange(TField *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblGIRISMAL_BEDELIChange(TField *Sender)
{
    tbtnKAYDET->Enabled = true;    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::DBGrid1KeyPress(TObject *Sender,
      char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        ++DBGrid1->SelectedIndex;
        if (DBGrid1->SelectedIndex == DBGrid1->FieldCount-1) {
            tblGIRIS->Insert();
            DBGrid1->SelectedIndex = 0;
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::tblGIRISAfterInsert(TDataSet *DataSet)
{
    tblGIRIS->Edit();
    tblGIRISHAREKET_TURU->Value = frmStokHareketi->Edit1->Text;
    tblGIRISKAYIT_NO->Value = KAYITNO_Edit->Text;
    tblGIRISDEPARTMAN->Value = frmAnaMenu->ComboBox1->Text;
    tblGIRISTARIH->Value = TARIH_NO->Text;
    tblGIRISMUSTERI_ADI->Value = MADI_Edit->Text;
    frmStokListesi->Show();
}
//---------------------------------------------------------------------------



void __fastcall TfrmStokHareketi::dsrcGIRISDataChange(TObject *Sender,
      TField *Field)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStokHareketi::dsrcSTOKHARANADataChange(TObject *Sender,
      TField *Field)
{
    tbtnKAYDET->Enabled = true;
}
//---------------------------------------------------------------------------

