//---------------------------------------------------------------------------

#ifndef adisyonH
#define adisyonH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include <ToolWin.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TfrmAdisyon : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TDBEdit *MNO_Edit;
    TDBEdit *MADI_Edit;
    TDBEdit *MSOYADI_Edit;
    TDBEdit *ADRES1_Edit;
    TDBEdit *ADRES2_Edit;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TDBEdit *EVTEL_Edit;
    TDBEdit *ISTEL_Edit;
    TDBEdit *CEPTEL_Edit;
    TDBEdit *DOGUM_Edit;
    TLabel *Label8;
    TSpeedButton *SpeedButton1;
    TGroupBox *GroupBox2;
    TDBGrid *DBGrid1;
    TToolBar *ToolBar1;
    TToolButton *tbtnYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TToolButton *ToolButton4;
    TToolButton *tbtnAC;
    TToolButton *ToolButton6;
    TToolButton *ToolButton7;
    TImageList *ImageList1;
    TToolButton *ToolButton8;
    TLabel *Label10;
    TLabel *Label9;
    TDBEdit *ADISYONTARIH_Edit;
    TDBEdit *ADISYONNO_Edit;
    TLabel *Label11;
    TDBEdit *ADISYONTOPLAM_Edit;
    TDataSource *dsrcMUSTERI;
    TTable *tblMUSTERI;
    TTable *tblADISANA;
    TDataSource *dsrcADISANA;
    TDataSource *dsrcADISHAR;
    TTable *tblADISHAR;
    TStringField *tblADISANADEPARTMAN;
    TAutoIncField *tblADISANAADISYONNO;
    TDateField *tblADISANATARIH;
    TCurrencyField *tblADISANATOPLAM;
    TQuery *queryPERSONEL;
    TStringField *queryPERSONELPERSONEL_ADI;
    TQuery *queryTUR;
    TStringField *queryTURACIKLAMA;
    TFloatField *tblADISHARADISYONNO;
    TDateField *tblADISHARTARIH;
    TStringField *tblADISHARSTOKKODU;
    TStringField *tblADISHARSTOKADI;
    TStringField *tblADISHARADISYON_TURU;
    TFloatField *tblADISHARADET;
    TCurrencyField *tblADISHARFIYAT;
    TCurrencyField *tblADISHARTOPLAM;
    TStringField *tblADISHARPERSONEL;
    TPopupMenu *popupDETAY;
    TMenuItem *Ekle1;
    TMenuItem *Sil1;
    TMenuItem *N1;
    TMenuItem *StokListesi1;
    TQuery *queryADISYONFIYAT;
    TQuery *queryTOPLAM;
    TCurrencyField *queryTOPLAMSUMOFTOPLAM;
    TStringField *queryADISYONFIYATACIKLAMA;
    TCurrencyField *queryADISYONFIYATFIYAT;
    TStringField *queryADISYONFIYATDEPARTMAN;
    TTable *tblSTOKHAR;
    TAutoIncField *tblSTOKHAROTOMATIK_SAYI;
    TStringField *tblSTOKHARHAREKET_TURU;
    TDateField *tblSTOKHARTARIH;
    TStringField *tblSTOKHARMUSTERI_NO;
    TStringField *tblSTOKHARKAYIT_NO;
    TCurrencyField *tblSTOKHARBIRIM_FIYATI;
    TFloatField *tblSTOKHARMAL_ADEDI;
    TCurrencyField *tblSTOKHARMAL_BEDELI;
    TMemoField *tblSTOKHARACIKLAMA;
    TStringField *tblSTOKHARURUN_NO;
    TStringField *tblSTOKHARURUN_ADI;
    TStringField *tblSTOKHARMUSTERI_ADI;
    TStringField *tblSTOKHARDEPARTMAN;
    TStringField *tblSTOKHARISLEM_TURU;
    TFloatField *tblADISHARSTOKHAR_NO;
    TStringField *tblADISANAMNO;
    TStringField *tblADISHARMNO;
    TStringField *tblMUSTERIKARTNO;
    TDateField *tblMUSTERITARIH;
    TStringField *tblMUSTERIM_ADI;
    TStringField *tblMUSTERIM_SOYADI;
    TMemoField *tblMUSTERIACIKLAMA;
    TStringField *tblMUSTERIEV_ADRESI1;
    TStringField *tblMUSTERIEV_ADRESI2;
    TStringField *tblMUSTERIIS_ADRESI1;
    TStringField *tblMUSTERIIS_ADRESI2;
    TStringField *tblMUSTERIEV_TEL;
    TStringField *tblMUSTERIIS_TEL;
    TStringField *tblMUSTERICEP_TEL;
    TStringField *tblMUSTERIE_MAIL;
    TGraphicField *tblMUSTERIRESIM;
    TDateField *tblMUSTERIDOGUM_TARIHI;
    TStringField *tblMUSTERIKUAFOR_ADI;
    TStringField *tblMUSTERIANA_RENGI;
    TFloatField *tblMUSTERISAC_ORANI;
    TBooleanField *tblMUSTERIDOGAL;
    TBooleanField *tblMUSTERIBOYALI;
    TBooleanField *tblMUSTERIPERMALI;
    TBooleanField *tblMUSTERIROFLE;
    TStringField *tblMUSTERIDT;
    TStringField *tblMUSTERIDURUM;
    TStringField *tblMUSTERISAC_TIPI;
    TStringField *tblMUSTERIKANGRUBU;
    TStringField *tblMUSTERIMESLEGI;
    TStringField *tblMUSTERIKURU;
    TStringField *tblMUSTERIKARMA;
    TStringField *tblMUSTERIAKNELI;
    TStringField *tblMUSTERIHASSAS;
    TStringField *tblMUSTERIYAGLI;
    TStringField *tblMUSTERITURGOR;
    TStringField *tblMUSTERIKUPEROZ;
    TStringField *tblMUSTERINEMORANI;
    TStringField *tblMUSTERIPIGMENTASYON;
    TStringField *tblMUSTERIEGZAMA;
    TStringField *tblMUSTERIYUZFORMU;
    TStringField *tblMUSTERIELASTIKIYET;
    TStringField *tblMUSTERIKALINLIK;
    TStringField *tblMUSTERIKIRISIKLIK;
    TStringField *tblMUSTERITERAPIST;
    TDBImage *DBImage1;
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall Anahtar(void);
    void __fastcall Kilit(void);
    void __fastcall StokHareketiEkle(void);
    void __fastcall StokHareketiDegistir(void);
    void __fastcall tbtnYENIClick(TObject *Sender);
    void __fastcall DetaySil(void);
    void __fastcall StokSil(double FisNo);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall tblADISHARAfterInsert(TDataSet *DataSet);
    void __fastcall tblADISANAAfterInsert(TDataSet *DataSet);
    void __fastcall Ekle1Click(TObject *Sender);
    void __fastcall SorguIslemi(void);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall StokListesi1Click(TObject *Sender);
    void __fastcall DBGrid1ColExit(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall tblADISHARAfterPost(TDataSet *DataSet);
    void __fastcall tbtnKAYDETClick(TObject *Sender);
    void __fastcall MNO_EditChange(TObject *Sender);
    void __fastcall ADISYONNO_EditChange(TObject *Sender);
    void __fastcall ADISYONTARIH_EditChange(TObject *Sender);
    void __fastcall ADISYONTOPLAM_EditChange(TObject *Sender);
    void __fastcall tbtnSILClick(TObject *Sender);
    void __fastcall tbtnACClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAdisyon(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAdisyon *frmAdisyon;
//---------------------------------------------------------------------------
#endif
