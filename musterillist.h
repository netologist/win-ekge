//---------------------------------------------------------------------------

#ifndef musterillistH
#define musterillistH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Buttons.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmMusteriListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TEdit *MNO_Edit;
    TDataSource *dsrcMUSTLIST;
    TEdit *Edit2;
    TEdit *MADI_Edit;
    TEdit *MSOYADI_Edit;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TRadioButton *RadioButton1;
    TRadioButton *RadioButton2;
    TRadioButton *RadioButton3;
    TRadioButton *RadioButton4;
    TDateTimePicker *DT_Edit;
    TAnimate *Animate;
    TTable *queryMUSTLIST;
    TStringField *queryMUSTLISTKARTNO;
    TDateField *queryMUSTLISTTARIH;
    TStringField *queryMUSTLISTM_ADI;
    TStringField *queryMUSTLISTM_SOYADI;
    TMemoField *queryMUSTLISTACIKLAMA;
    TStringField *queryMUSTLISTEV_ADRESI1;
    TStringField *queryMUSTLISTEV_ADRESI2;
    TStringField *queryMUSTLISTIS_ADRESI1;
    TStringField *queryMUSTLISTIS_ADRESI2;
    TStringField *queryMUSTLISTEV_TEL;
    TStringField *queryMUSTLISTIS_TEL;
    TStringField *queryMUSTLISTCEP_TEL;
    TStringField *queryMUSTLISTE_MAIL;
    TGraphicField *queryMUSTLISTRESIM;
    TDateField *queryMUSTLISTDOGUM_TARIHI;
    TStringField *queryMUSTLISTKUAFOR_ADI;
    TStringField *queryMUSTLISTANA_RENGI;
    TFloatField *queryMUSTLISTSAC_ORANI;
    TBooleanField *queryMUSTLISTDOGAL;
    TBooleanField *queryMUSTLISTBOYALI;
    TBooleanField *queryMUSTLISTPERMALI;
    TBooleanField *queryMUSTLISTROFLE;
    TStringField *queryMUSTLISTDT;
    TStringField *queryMUSTLISTDURUM;
    TStringField *queryMUSTLISTSAC_TIPI;
    TStringField *queryMUSTLISTKANGRUBU;
    TStringField *queryMUSTLISTMESLEGI;
    TStringField *queryMUSTLISTKURU;
    TStringField *queryMUSTLISTKARMA;
    TStringField *queryMUSTLISTAKNELI;
    TStringField *queryMUSTLISTHASSAS;
    TStringField *queryMUSTLISTYAGLI;
    TStringField *queryMUSTLISTTURGOR;
    TStringField *queryMUSTLISTKUPEROZ;
    TStringField *queryMUSTLISTNEMORANI;
    TStringField *queryMUSTLISTPIGMENTASYON;
    TStringField *queryMUSTLISTEGZAMA;
    TStringField *queryMUSTLISTYUZFORMU;
    TStringField *queryMUSTLISTELASTIKIYET;
    TStringField *queryMUSTLISTKALINLIK;
    TStringField *queryMUSTLISTKIRISIKLIK;
    TStringField *queryMUSTLISTTERAPIST;
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall RadioButton1Click(TObject *Sender);
    void __fastcall RadioButton2Click(TObject *Sender);
    void __fastcall RadioButton3Click(TObject *Sender);
    void __fastcall RadioButton4Click(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmMusteriListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMusteriListesi *frmMusteriListesi;
extern int SelectButton;
//---------------------------------------------------------------------------
#endif
