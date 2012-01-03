//---------------------------------------------------------------------------

#ifndef dogumgunH
#define dogumgunH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmDogumGunu : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDateTimePicker *DateTimePicker1;
    TDateTimePicker *DateTimePicker2;
    TLabel *Label1;
    TLabel *Label2;
    TGroupBox *GroupBox2;
    TSpeedButton *SpeedButton1;
    TDBGrid *DBGrid1;
    TAnimate *Animate1;
    TDataSource *dsrcDOGUMGUNU;
    TQuery *queryDOGUMGUNU;
    TStringField *queryDOGUMGUNUKARTNO;
    TDateField *queryDOGUMGUNUTARIH;
    TStringField *queryDOGUMGUNUM_ADI;
    TStringField *queryDOGUMGUNUM_SOYADI;
    TMemoField *queryDOGUMGUNUACIKLAMA;
    TStringField *queryDOGUMGUNUEV_ADRESI1;
    TStringField *queryDOGUMGUNUEV_ADRESI2;
    TStringField *queryDOGUMGUNUIS_ADRESI1;
    TStringField *queryDOGUMGUNUIS_ADRESI2;
    TStringField *queryDOGUMGUNUEV_TEL;
    TStringField *queryDOGUMGUNUIS_TEL;
    TStringField *queryDOGUMGUNUCEP_TEL;
    TStringField *queryDOGUMGUNUE_MAIL;
    TGraphicField *queryDOGUMGUNURESIM;
    TDateField *queryDOGUMGUNUDOGUM_TARIHI;
    TStringField *queryDOGUMGUNUKUAFOR_ADI;
    TStringField *queryDOGUMGUNUANA_RENGI;
    TFloatField *queryDOGUMGUNUSAC_ORANI;
    TBooleanField *queryDOGUMGUNUDOGAL;
    TBooleanField *queryDOGUMGUNUBOYALI;
    TBooleanField *queryDOGUMGUNUPERMALI;
    TBooleanField *queryDOGUMGUNUROFLE;
    TStringField *queryDOGUMGUNUDT;
    TStringField *queryDOGUMGUNUDURUM;
    TStringField *queryDOGUMGUNUSAC_TIPI;
    TStringField *queryDOGUMGUNUKANGRUBU;
    TStringField *queryDOGUMGUNUMESLEGI;
    TStringField *queryDOGUMGUNUKURU;
    TStringField *queryDOGUMGUNUKARMA;
    TStringField *queryDOGUMGUNUAKNELI;
    TStringField *queryDOGUMGUNUHASSAS;
    TStringField *queryDOGUMGUNUYAGLI;
    TStringField *queryDOGUMGUNUTURGOR;
    TStringField *queryDOGUMGUNUKUPEROZ;
    TStringField *queryDOGUMGUNUNEMORANI;
    TStringField *queryDOGUMGUNUPIGMENTASYON;
    TStringField *queryDOGUMGUNUEGZAMA;
    TStringField *queryDOGUMGUNUYUZFORMU;
    TStringField *queryDOGUMGUNUELASTIKIYET;
    TStringField *queryDOGUMGUNUKALINLIK;
    TStringField *queryDOGUMGUNUKIRISIKLIK;
    TStringField *queryDOGUMGUNUTERAPIST;
    TSpeedButton *SpeedButton2;
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall SpeedButton2Click(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmDogumGunu(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmDogumGunu *frmDogumGunu;
//---------------------------------------------------------------------------
#endif
