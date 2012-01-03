//---------------------------------------------------------------------------

#ifndef formulH
#define formulH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
#include <DBCtrls.hpp>
#include <Mask.hpp>
//---------------------------------------------------------------------------
class TfrmFormulGiris : public TForm
{
__published:	// IDE-managed Components
    TDBGrid *DBGrid1;
    TDataSource *dsrcFORMULANA;
    TTable *tblFORMULANA;
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TToolButton *ToolButton4;
    TToolButton *ToolButton5;
    TToolButton *ToolButton6;
    TImageList *ImageList1;
    TToolButton *ToolButton7;
    TSpeedButton *SpeedButton1;
    TGroupBox *GroupBox2;
    TLabel *Label6;
    TLabel *Label7;
    TLabel *Label8;
    TTable *tblFORMULDETAY;
    TDataSource *dsrcFORMULDETAY;
    TDBEdit *DBEdit1;
    TDBEdit *DBEdit2;
    TDBEdit *DBEdit3;
    TDBEdit *DBEdit4;
    TDBEdit *DBEdit5;
    TDBEdit *DBEdit6;
    TDBEdit *DBEdit7;
    TDBEdit *DBEdit8;
    TDBEdit *DBEdit9;
    TDataSource *dsrcMUSTERI;
    TTable *tblMUSTERI;
    TAutoIncField *tblFORMULANAOTOMATIK_SAYI;
    TStringField *tblFORMULANAMNO;
    TDateField *tblFORMULANATARIH;
    TStringField *tblFORMULANABEKLEMESURESI;
    TAutoIncField *tblFORMULDETAYOTOMATIK_SAYI;
    TStringField *tblFORMULDETAYFORMULANA;
    TStringField *tblFORMULDETAYURUNKODU;
    TStringField *tblFORMULDETAYACIKLAMA;
    TFloatField *tblFORMULDETAYMIKTAR;
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
    TStringField *d;
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
    TQuery *queryTUR;
    TStringField *queryTURURUNKODU;
    TStringField *queryTURURUNADI;
    TCurrencyField *queryTURFIYATI;
    TFloatField *queryTURMIKTARI;
    TStringField *queryTURDEPARTMAN;
    TIntegerField *queryTUROTOMATIK_SAYI;
    TFloatField *queryTURSONMIKTAR;
    TQuery *queryFORMULSIL;
    TLabel *Label9;
    TStringField *tblFORMULANAKAYITNO;
    TStringField *tblFORMULANAISLEMTURU;
    TDBLookupComboBox *DBLookupComboBox1;
    void __fastcall ToolButton1Click(TObject *Sender);
    void __fastcall Anahtar(void);
    void __fastcall Kilit(void);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall tbtnKAYDETClick(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall tblFORMULDETAYBeforePost(TDataSet *DataSet);
    void __fastcall ToolButton5Click(TObject *Sender);
    void __fastcall DBEdit8Change(TObject *Sender);
    void __fastcall DBEdit7Change(TObject *Sender);
    void __fastcall DBEdit9Change(TObject *Sender);
    void __fastcall tblFORMULDETAYAfterEdit(TDataSet *DataSet);
    void __fastcall tbtnSILClick(TObject *Sender);
    void __fastcall dsrcFORMULDETAYDataChange(TObject *Sender,
          TField *Field);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall DBLookupComboBox1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmFormulGiris(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFormulGiris *frmFormulGiris;
//---------------------------------------------------------------------------
#endif
