//---------------------------------------------------------------------------

#ifndef RanGirisH
#define RanGirisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBTables.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TfrmRandevuGiris : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TToolButton *tbtKAYDET;
    TToolButton *ToolButton3;
    TToolButton *ToolButton4;
    TToolButton *ToolButton5;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TSpeedButton *SpeedButton1;
    TGroupBox *GroupBox2;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label10;
    TGroupBox *GroupBox3;
    TLabel *Label11;
    TLabel *Label12;
    TRadioGroup *RadioGroup1;
    TGroupBox *GroupBox4;
    TImageList *ImageList1;
    TDBLookupComboBox *DBLookupComboBox1;
    TTable *tblRANDEVU;
    TDataSource *dsrcRANDEVU;
    TDBLookupComboBox *DBLookupComboBox2;
    TDBMemo *DBMemo1;
    TDBEdit *DBEdit1;
    TDBEdit *DBEdit2;
    TDBEdit *DBEdit3;
    TDBEdit *DBEdit4;
    TDBEdit *DBEdit5;
    TDBEdit *DBEdit6;
    TDBEdit *DBEdit7;
    TDBEdit *DBEdit8;
    TDataSource *dsrcMUSTERI;
    TQuery *queryMUSTERI;
    TDBEdit *DBEdit9;
    TDBEdit *DBEdit10;
    TDBEdit *DBEdit11;
    TToolButton *ToolButton2;
    TToolButton *ToolButton6;
    TStringField *queryMUSTERIKARTNO;
    TDateField *queryMUSTERITARIH;
    TStringField *queryMUSTERIM_ADI;
    TStringField *queryMUSTERIM_SOYADI;
    TMemoField *queryMUSTERIACIKLAMA;
    TStringField *queryMUSTERIEV_ADRESI1;
    TStringField *queryMUSTERIEV_ADRESI2;
    TStringField *queryMUSTERIIS_ADRESI1;
    TStringField *queryMUSTERIIS_ADRESI2;
    TStringField *queryMUSTERIEV_TEL;
    TStringField *queryMUSTERIIS_TEL;
    TStringField *queryMUSTERICEP_TEL;
    TStringField *queryMUSTERIE_MAIL;
    TGraphicField *queryMUSTERIRESIM;
    TDateField *queryMUSTERIDOGUM_TARIHI;
    TStringField *queryMUSTERIKUAFOR_ADI;
    TStringField *queryMUSTERIANA_RENGI;
    TFloatField *queryMUSTERISAC_ORANI;
    TBooleanField *queryMUSTERIDOGAL;
    TBooleanField *queryMUSTERIBOYALI;
    TBooleanField *queryMUSTERIPERMALI;
    TBooleanField *queryMUSTERIROFLE;
    TStringField *queryMUSTERIDT;
    TStringField *queryMUSTERIDURUM;
    TStringField *queryMUSTERISAC_TIPI;
    TStringField *queryMUSTERIKANGRUBU;
    TStringField *queryMUSTERIMESLEGI;
    TStringField *queryMUSTERIKURU;
    TStringField *queryMUSTERIKARMA;
    TStringField *queryMUSTERIAKNELI;
    TStringField *queryMUSTERIHASSAS;
    TStringField *queryMUSTERIYAGLI;
    TStringField *queryMUSTERITURGOR;
    TStringField *queryMUSTERIKUPEROZ;
    TStringField *queryMUSTERINEMORANI;
    TStringField *queryMUSTERIPIGMENTASYON;
    TStringField *queryMUSTERIEGZAMA;
    TStringField *queryMUSTERIYUZFORMU;
    TStringField *queryMUSTERIELASTIKIYET;
    TStringField *queryMUSTERIKALINLIK;
    TStringField *queryMUSTERIKIRISIKLIK;
    TStringField *queryMUSTERITERAPIST;
    TAutoIncField *tblRANDEVURANDEVU_NO;
    TStringField *tblRANDEVUISLEM;
    TStringField *tblRANDEVUMNO;
    TStringField *tblRANDEVUPERSONEL;
    TDateField *tblRANDEVUTARIH;
    TTimeField *tblRANDEVUSAAT;
    TStringField *tblRANDEVURANDEVU_DURUMU;
    TMemoField *tblRANDEVUOZEL_NOT;
    void __fastcall ToolButton1Click(TObject *Sender);
    void __fastcall RadioGroup1Click(TObject *Sender);
    void __fastcall tbtKAYDETClick(TObject *Sender);
    void __fastcall Anahtar(void);
    void __fastcall Kilit(void);
    void __fastcall DBEdit10Change(TObject *Sender);
    void __fastcall DBEdit11Change(TObject *Sender);
    void __fastcall DBLookupComboBox1Click(TObject *Sender);
    void __fastcall DBLookupComboBox2Click(TObject *Sender);
    void __fastcall DBMemo1Change(TObject *Sender);
    void __fastcall DBEdit1Change(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall ToolButton6Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall ToolButton5Click(TObject *Sender);
    void __fastcall ToolButton3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmRandevuGiris(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmRandevuGiris *frmRandevuGiris;
//---------------------------------------------------------------------------
#endif
