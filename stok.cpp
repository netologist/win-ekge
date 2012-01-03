//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "stok.h"
#include "AnaMenu.h"
#include "sifre.h"
#include "stokdurum.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmStok *frmStok;
//---------------------------------------------------------------------------
__fastcall TfrmStok::TfrmStok(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmStok::ToolButton9Click(TObject *Sender)
{
    tbtnAC->Visible = true;
    tbtnKAPA->Visible = false;
    GroupBox2->Visible = false;
    frmStok->Width = 337;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::Sorgula(void)
{
    querySTOKLISTE->Close();
    querySTOKLISTE->ParamByName("URUNKODU")->AsString = "%";
    querySTOKLISTE->ParamByName("URUNADI")->AsString = "%";
    querySTOKLISTE->Open();
}

void __fastcall TfrmStok::tbtnACClick(TObject *Sender)
{
    tbtnAC->Visible = false;
    tbtnKAPA->Visible = true;
    frmStok->Width = 603;
    GroupBox2->Visible = true;
    ARAMA_Edit->Clear();
    Sorgula();
}
//---------------------------------------------------------------------------


void __fastcall TfrmStok::tbtnYeniClick(TObject *Sender)
{
    KayitKontrol();
    Anahtar();
    STOKKODU_Edit->Enabled = true;
    STOKKODU_Edit->Color = clWhite;
    tblSTOKANA->Filtered = false;
    tblSTOKANA->Insert();
    SonDurum();
    tbtnKaydet->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::tbtnKaydetClick(TObject *Sender)
{
    if (STOKKODU_Edit->Text.Length() == 0)
        Application->MessageBoxA("Stok kod numarasý girmelisiniz!",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else if (STOKADI_Edit->Text.Length() == 0)
        Application->MessageBoxA("Ürünün adýný girmelisiniz!",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        tblSTOKANA->Edit();
        tblSTOKANADEPARTMAN->Value = frmAnaMenu->ComboBox1->Text;
        tblSTOKANA->Post();
        tbtnKaydet->Enabled = false;
        Sorgula();
        STOKKODU_Edit->Enabled = false;
        STOKKODU_Edit->Color = cl3DLight;
    }
}

void __fastcall TfrmStok::KayitKontrol(void)
{
    int nDeger;
    TObject *Sender;

    if (tbtnKaydet->Enabled == true) {
        nDeger = Application->MessageBox("Deðiþiklikler kaydedilsin mi?",
            "Uyarý mesajý", MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES)
            tbtnKaydetClick(Sender);
        else
            tblSTOKANA->Cancel();
    }
}
//---------------------------------------------------------------------------
void __fastcall TfrmStok::tbtnSilClick(TObject *Sender)
{
    int nDeger;

    if (tblSTOKANA->RecordCount <= 0)
        Application->MessageBoxA("Silecek bir kayýt kalmadý",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else if (queryCIKIS->RecordCount > 0 || queryGIRIS->RecordCount > 0)
        Application->MessageBoxA("Önce hareketleri silmelisiniz",
            "Uyarý Mesajý", MB_OK + MB_ICONEXCLAMATION);
    else {
        nDeger = Application->MessageBox("Kaydý silmek son kararýnýz mý?", "Silme onayý",
            MB_YESNO + MB_ICONQUESTION);

        if (nDeger == IDYES) {
            tblSTOKANA->Delete();
            ToolButton9Click(Sender);
            Kilit();
        }
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::ARAMA_EditChange(TObject *Sender)
{
    querySTOKLISTE->Close();
    querySTOKLISTE->ParamByName("URUNKODU")->AsString = ARAMA_Edit->Text + "%";
    querySTOKLISTE->ParamByName("URUNADI")->AsString = ARAMA_Edit->Text + "%";
    querySTOKLISTE->ParamByName("DEPARTMAN")->AsString = frmAnaMenu->ComboBox1->Text;
    querySTOKLISTE->Open();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::SonDurum(void)
{
    float Giris_Toplami = 0, Cikis_Toplami = 0, Son_Durum = 0;

//------------ stok son durum miktarý ayarý -----------
    queryGIRIS->Close();
    queryGIRIS->ParamByName("URUNKODU")->AsString = STOKKODU_Edit->Text;
    queryGIRIS->Open();

    queryGIRIS->First();
    while(!queryGIRIS->Eof) {
        Giris_Toplami += (float)queryGIRISMAL_ADEDI->Value;
        queryGIRIS->Next();
    }
//-----------------------------------------------------
    queryCIKIS->Close();
    queryCIKIS->ParamByName("URUNKODU")->AsString = STOKKODU_Edit->Text;
    queryCIKIS->Open();

    queryCIKIS->First();
    while(!queryCIKIS->Eof) {
        Cikis_Toplami += (float)queryCIKISMAL_ADEDI->Value;
        queryCIKIS->Next();
    }

    if (MIKTAR_Edit->Text.Length() != 0)
        Son_Durum = (StrToFloat(MIKTAR_Edit->Text) + Giris_Toplami) - Cikis_Toplami;
    else
        Son_Durum = (tblSTOKANAMIKTARI->Value + Giris_Toplami) - Cikis_Toplami;

    SONDURUM_Edit->Text = FloatToStr(Son_Durum);
}
void __fastcall TfrmStok::DBGrid3CellClick(TColumn *Column)
{
    AnsiString AKTARMA;
    AKTARMA = DBGrid3->Columns->Grid->SelectedField->AsString;

    Anahtar();
    tblSTOKANA->Filtered = true;
    tblSTOKANA->Filter = "[URUNKODU] ='"+AKTARMA+"'";
    tblSTOKANA->Edit();
    STOKKODU_Edit->Enabled = false;
    STOKKODU_Edit->Color = cl3DLight;
    tbtnKaydet->Enabled = false;
    SonDurum();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::STOKKODU_EditChange(TObject *Sender)
{
    tbtnKaydet->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::STOKADI_EditChange(TObject *Sender)
{
    tbtnKaydet->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::FIYATI_EditChange(TObject *Sender)
{
    tbtnKaydet->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::MIKTAR_EditChange(TObject *Sender)
{
    tbtnKaydet->Enabled = true;
    SonDurum();
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::STOKKODU_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::STOKADI_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::FIYATI_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }    
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::MIKTAR_EditKeyPress(TObject *Sender, char &Key)
{
    if (Key == Char(VK_RETURN)) {
        Key = 0;
        PostMessage(Handle, WM_NEXTDLGCTL, 0, 0);
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::FormClose(TObject *Sender, TCloseAction &Action)
{
    KayitKontrol();
    Kilit();
    ToolButton9Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::Kilit(void)
{
//----------------------------------
    queryCIKIS->Close();
    queryGIRIS->Close();
    tblSTOKANA->Close();
//----------------------------------

    STOKKODU_Edit->Enabled = false;
    STOKADI_Edit->Enabled = false;
    FIYATI_Edit->Enabled = false;
    MIKTAR_Edit->Enabled = false;
    SONDURUM_Edit->Enabled = false;
    tbtnKaydet->Enabled = false;
    tbtnSil->Enabled = false;
    DBGrid1->Enabled = false;
    DBGrid2->Enabled = false;
    /*
    if (printf("Color->SocketMain == Professional"))
        "yessir->guide = printers->liveupdate"
        Writers->Combo = ShareMine;
        
    */
    STOKKODU_Edit->Color = clGray;
    STOKADI_Edit->Color = clGray;
    FIYATI_Edit->Color = clGray;
    MIKTAR_Edit->Color = clGray;
    SONDURUM_Edit->Color = clGray;
    DBGrid1->Color = clGray;
    DBGrid2->Color = clGray;
}

void __fastcall TfrmStok::Anahtar(void)
{
//----------------------------------
    queryCIKIS->Open();
    queryGIRIS->Open();
    tblSTOKANA->Open();
//----------------------------------

    if (frmSifre->queryPAROLAIZIN->Value == true) {
        STOKADI_Edit->Enabled = true;
        FIYATI_Edit->Enabled = true;
        tbtnSil->Enabled = true;
        MIKTAR_Edit->Enabled = true;
        DBGrid1->Enabled = true;
        DBGrid2->Enabled = true;
    }

    STOKKODU_Edit->Color = clWhite;
    STOKADI_Edit->Color = clWhite;
    FIYATI_Edit->Color = clWhite;
    MIKTAR_Edit->Color = clWhite;
    SONDURUM_Edit->Color = clWhite;
    DBGrid1->Color = clWhite;
    DBGrid2->Color = clWhite;
}

void __fastcall TfrmStok::FormShow(TObject *Sender)
{
    Kilit();
    frmStok->Width = 337;
    SonDurum();
    if (frmAnaMenu->ComboBox1->Text == "   SAÇ TASARIM MERKEZÝ") {
        frmStok->Caption = "Stok Kartý (Saç Tasarým)";
    }
    else {
        frmStok->Caption = "Stok Kartý (Estetik Merkezi)";
    }
}
//---------------------------------------------------------------------------

void __fastcall TfrmStok::TumStokDurumu(void)
{
    float Giris_Toplami = 0, Cikis_Toplami = 0, Son_Durum = 0;

    //------------ stok son durum miktarý ayarý -----------
    tblSTOKANA->Open();
/*    tblSTOKANA->Filter = "[DEPARTMAN]='"+frmAnaMenu->ComboBox1->Text+"'";
    tblSTOKANA->Filtered = true;*/
    tblSTOKANA->First();

    while (!tblSTOKANA->Eof) {
        queryGIRIS->Close();
        queryGIRIS->ParamByName("URUNKODU")->AsString = tblSTOKANAURUNKODU->Value;
        queryGIRIS->Open();

        queryGIRIS->First();
        while(!queryGIRIS->Eof) {
            Giris_Toplami += (float)queryGIRISMAL_ADEDI->Value;
            queryGIRIS->Next();
        }
        //-----------------------------------------------------
        queryCIKIS->Close();
        queryCIKIS->ParamByName("URUNKODU")->AsString = tblSTOKANAURUNKODU->Value;
        queryCIKIS->Open();

        queryCIKIS->First();
        while(!queryCIKIS->Eof) {
            Cikis_Toplami += (float)queryCIKISMAL_ADEDI->Value;
            queryCIKIS->Next();
        }
        Son_Durum = (tblSTOKANAMIKTARI->Value + Giris_Toplami) - Cikis_Toplami;

        tblSTOKANA->Edit();
        tblSTOKANASONMIKTAR->Value = Son_Durum;
        tblSTOKANA->Post();
        Giris_Toplami = 0;
        Cikis_Toplami = 0;
        Son_Durum = 0;
        tblSTOKANA->Next();
    }
    tblSTOKANA->Close();
}

void __fastcall TfrmStok::ToolButton2Click(TObject *Sender)
{
    TumStokDurumu();
    frmStokRapor->Table1->Filtered = true;
    frmStokRapor->Table1->Filter = "[DEPARTMAN] = '"+
        frmAnaMenu->ComboBox1->Text+"'";
    frmStokRapor->QuickRep1->Preview();
    tbtnKaydet->Enabled = false;    
}
//---------------------------------------------------------------------------

