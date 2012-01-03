//---------------------------------------------------------------------------

#ifndef etiketH
#define etiketH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <QuickRpt.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <Qrctrls.hpp>
//---------------------------------------------------------------------------
class TfrmEtiket : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRLabel *QRLabel1;
    TTable *tblMUSTERI;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel3;
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
private:	// User declarations
public:		// User declarations
    __fastcall TfrmEtiket(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmEtiket *frmEtiket;
//---------------------------------------------------------------------------
#endif
