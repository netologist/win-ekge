//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USEFORM("musteri.cpp", frmMusteri);
USEFORM("musterillist.cpp", frmMusteriListesi);
USEFORM("AnaMenu.cpp", frmAnaMenu);
USEFORM("stok.cpp", frmStok);
USEFORM("stokhar.cpp", frmStokHareketi);
USEFORM("stokliste.cpp", frmStokListesi);
USEFORM("tarife.cpp", frmTarife);
USEFORM("personel.cpp", frmPersonel);
USEFORM("hareketlist.cpp", frmHareketListesi);
USEFORM("adisyon.cpp", frmAdisyon);
USEFORM("adisyonlist.cpp", frmAdisyonListesi);
USEFORM("formul.cpp", frmFormulGiris);
USEFORM("stokdurum.cpp", frmStokRapor);
USEFORM("parolaayar.cpp", frmParolaAyar);
USEFORM("formulist.cpp", frmFormulListesi);
USEFORM("sifre.cpp", frmSifre);
USEFORM("RanList.cpp", frmRandevuGirisListesi);
USEFORM("RanGiris.cpp", frmRandevuGiris);
USEFORM("ranislem.cpp", frmRadevuIslem);
USEFORM("RanKontrol.cpp", frmRandevuCizelgesi);
USEFORM("dogumgun.cpp", frmDogumGunu);

#include "sifre.h"
#include "Acilis.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmAcilis *frmAcilis;
//---------------------------------------------------------------------------
__fastcall TfrmAcilis::TfrmAcilis(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
int flag = 0;

void __fastcall TfrmAcilis::Timer1Timer(TObject *Sender)
{
    if (flag == 0) {
        Application->CreateForm(__classid(TfrmSifre), &frmSifre);
        Application->CreateForm(__classid(TfrmAnaMenu), &frmAnaMenu);
        Application->CreateForm(__classid(TfrmMusteri), &frmMusteri);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmMusteriListesi), &frmMusteriListesi);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmStok), &frmStok);
        Application->CreateForm(__classid(TfrmStokHareketi), &frmStokHareketi);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmStokListesi), &frmStokListesi);
        Application->CreateForm(__classid(TfrmTarife), &frmTarife);
        Application->CreateForm(__classid(TfrmPersonel), &frmPersonel);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmHareketListesi), &frmHareketListesi);
        Application->CreateForm(__classid(TfrmAdisyon), &frmAdisyon);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmAdisyonListesi), &frmAdisyonListesi);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmFormulGiris), &frmFormulGiris);
        Application->CreateForm(__classid(TfrmStokRapor), &frmStokRapor);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmParolaAyar), &frmParolaAyar);
        Application->CreateForm(__classid(TfrmFormulListesi), &frmFormulListesi);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmRandevuGirisListesi), &frmRandevuGirisListesi);
        Application->CreateForm(__classid(TfrmRandevuGiris), &frmRandevuGiris);
        ProgressBar1->StepIt();
        Application->CreateForm(__classid(TfrmRadevuIslem), &frmRadevuIslem);
        Application->CreateForm(__classid(TfrmRandevuCizelgesi), &frmRandevuCizelgesi);
        Application->CreateForm(__classid(TfrmDogumGunu), &frmDogumGunu);
        ProgressBar1->StepIt();
        frmAcilis->Hide();
        frmSifre->Show();
        flag = 1;
    }
}
//---------------------------------------------------------------------------
