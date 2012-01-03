//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("kuafor.res");
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
USEFORM("Acilis.cpp", frmAcilis);
USEFORM("dogumgun.cpp", frmDogumGunu);
USEFORM("dgraporu.cpp", frmDogumGunuRaporu);
USEFORM("frmHakkinda.cpp", frmAbout);
USEFORM("etiket.cpp", frmEtiket);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
         Application->Initialize();
         Application->Title = "Güzel & Estetik";
         Application->CreateForm(__classid(TfrmAcilis), &frmAcilis);
         Application->CreateForm(__classid(TfrmDogumGunuRaporu), &frmDogumGunuRaporu);
         Application->CreateForm(__classid(TfrmAbout), &frmAbout);
         Application->CreateForm(__classid(TfrmEtiket), &frmEtiket);
         Application->Run();
    }
    catch (Exception &exception)
    {
         Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
