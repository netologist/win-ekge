//---------------------------------------------------------------------------

#ifndef AnaMenuH
#define AnaMenuH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TfrmAnaMenu : public TForm
{
__published:	// IDE-managed Components
    TStatusBar *StatusBar1;
    TMainMenu *MainMenu1;
    TMenuItem *Dosya1;
    TMenuItem *MteriKart1;
    TMenuItem *StokKart1;
    TMenuItem *N1;
    TMenuItem *MteriHareketi1;
    TMenuItem *StokHareketi1;
    TMenuItem *Dzen1;
    TMenuItem *RandevuGiri1;
    TMenuItem *RandevuKontrol1;
    TMenuItem *Ayarlar1;
    TMenuItem *KuafrGirii1;
    TMenuItem *HizmetFiyat1;
    TMenuItem *Yardm1;
    TMenuItem *Hakknda1;
    TPopupMenu *popupSTOK;
    TMenuItem *StokGirii1;
    TMenuItem *StokHareketi2;
    TMenuItem *StokGirileri1;
    TMenuItem *Stokklar1;
    TMenuItem *ParolaAyarlar1;
    TMenuItem *StokGirileri2;
    TMenuItem *Stokklar2;
    TPanel *Panel1;
    TImage *Image1;
    TSpeedButton *SpeedButton1;
    TSpeedButton *SpeedButton2;
    TSpeedButton *SpeedButton3;
    TSpeedButton *SpeedButton4;
    TSpeedButton *SpeedButton5;
    TSpeedButton *SpeedButton6;
    TComboBox *ComboBox1;
    TMenuItem *AdisyonFiGirii1;
    TPopupMenu *popupRANDEVU;
    TMenuItem *RandevuGirii1;
    TMenuItem *Randevuizelgesi1;
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall SpeedButton5Click(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall StokGirii1Click(TObject *Sender);
    void __fastcall StokGirileri1Click(TObject *Sender);
    void __fastcall Stokklar1Click(TObject *Sender);
    void __fastcall HizmetFiyat1Click(TObject *Sender);
    void __fastcall KuafrGirii1Click(TObject *Sender);
    void __fastcall SpeedButton4Click(TObject *Sender);
    void __fastcall MteriHareketi1Click(TObject *Sender);
    void __fastcall ParolaAyarlar1Click(TObject *Sender);
    void __fastcall StokGirileri2Click(TObject *Sender);
    void __fastcall Stokklar2Click(TObject *Sender);
    void __fastcall StokKart1Click(TObject *Sender);
    void __fastcall MteriKart1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall SpeedButton3Click(TObject *Sender);
    void __fastcall RandevuGirii1Click(TObject *Sender);
    void __fastcall Randevuizelgesi1Click(TObject *Sender);
    void __fastcall RandevuGiri1Click(TObject *Sender);
    void __fastcall RandevuKontrol1Click(TObject *Sender);
    void __fastcall Hakknda1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAnaMenu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAnaMenu *frmAnaMenu;
//---------------------------------------------------------------------------
#endif
