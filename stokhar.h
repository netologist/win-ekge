//---------------------------------------------------------------------------

#ifndef stokharH
#define stokharH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBTables.hpp>
#include <Mask.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmStokHareketi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TToolBar *ToolBar1;
    TToolButton *tbtnYENI;
    TToolButton *tbtnKAYDET;
    TToolButton *tbtnSIL;
    TToolButton *ToolButton4;
    TToolButton *tbtnAC;
    TLabel *Label1;
    TLabel *Label4;
    TImageList *ImageList1;
    TDataSource *dsrcGIRIS;
    TTable *tblGIRIS;
    TDBEdit *MADI_Edit;
    TDBMemo *ACIKLAMA_Memo;
    TLabel *Label2;
    TDBEdit *KAYITNO_Edit;
    TLabel *Label3;
    TDBEdit *TARIH_NO;
    TGroupBox *GroupBox2;
    TEdit *Edit1;
    TAutoIncField *tblGIRISOTOMATIK_SAYI;
    TStringField *tblGIRISHAREKET_TURU;
    TDateField *tblGIRISTARIH;
    TStringField *tblGIRISMUSTERI_NO;
    TStringField *tblGIRISKAYIT_NO;
    TCurrencyField *tblGIRISBIRIM_FIYATI;
    TFloatField *tblGIRISMAL_ADEDI;
    TCurrencyField *tblGIRISMAL_BEDELI;
    TMemoField *tblGIRISACIKLAMA;
    TStringField *tblGIRISURUN_NO;
    TStringField *tblGIRISURUN_ADI;
    TStringField *tblGIRISMUSTERI_ADI;
    TStringField *tblGIRISDEPARTMAN;
    TStringField *tblGIRISISLEM_TURU;
        TDBGrid *DBGrid1;
        TDataSource *dsrcSTOKHARANA;
        TTable *tblSTOKHARANA;
        TPopupMenu *PopupMenu1;
        TMenuItem *Yeni1;
        TMenuItem *Kaydet1;
        TMenuItem *Sil1;
        TMenuItem *N1;
        TMenuItem *A1;
        TMenuItem *N2;
    TQuery *queryTEKRARKONTROL;
    TStringField *queryTEKRARKONTROLFATURANO;
    TDateField *queryTEKRARKONTROLTARIH;
    TMemoField *queryTEKRARKONTROLACIKLAMA;
    TStringField *queryTEKRARKONTROLDEPARTMAN;
    TStringField *queryTEKRARKONTROLKAYIT_TURU;
    TStringField *queryTEKRARKONTROLMUSTERIADI2;
    TStringField *tblSTOKHARANAFATURANO;
    TStringField *tblSTOKHARANAMUSTERIADI;
    TDateField *tblSTOKHARANATARIH;
    TMemoField *tblSTOKHARANAACIKLAMA;
    TStringField *tblSTOKHARANADEPARTMAN;
    TStringField *tblSTOKHARANAKAYIT_TURU;
    TQuery *queryHAREKETSIL;
    void __fastcall SpeedButton1Click(TObject *Sender);
    void __fastcall tbtnYENIClick(TObject *Sender);
    void __fastcall tbtnKAYDETClick(TObject *Sender);
    void __fastcall tbtnSILClick(TObject *Sender);
    void __fastcall KAYITNO_EditChange(TObject *Sender);
    void __fastcall TARIH_NOChange(TObject *Sender);
    void __fastcall Anahtar(void);
    void __fastcall Kilit(void);
    void __fastcall KayitKontrol(void);
    void __fastcall MADI_EditChange(TObject *Sender);
    void __fastcall ACIKLAMA_MemoChange(TObject *Sender);
    void __fastcall URUNNO_EditChange(TObject *Sender);
    void __fastcall URUNADI_EditChange(TObject *Sender);
    void __fastcall MALADEDI_EditChange(TObject *Sender);
    void __fastcall KAYITNO_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall TARIH_NOKeyPress(TObject *Sender, char &Key);
    void __fastcall MADI_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall URUNNO_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall URUNADI_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall MALADEDI_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall tbtnACClick(TObject *Sender);
    void __fastcall A1Click(TObject *Sender);
    void __fastcall Yeni1Click(TObject *Sender);
    void __fastcall Kaydet1Click(TObject *Sender);
    void __fastcall Sil1Click(TObject *Sender);
    void __fastcall tblGIRISBIRIM_FIYATIChange(TField *Sender);
    void __fastcall tblGIRISMAL_ADEDIChange(TField *Sender);
    void __fastcall tblGIRISURUN_NOChange(TField *Sender);
    void __fastcall tblGIRISURUN_ADIChange(TField *Sender);
    void __fastcall tblGIRISMAL_BEDELIChange(TField *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall tblGIRISAfterInsert(TDataSet *DataSet);
    void __fastcall dsrcGIRISDataChange(TObject *Sender, TField *Field);
    void __fastcall dsrcSTOKHARANADataChange(TObject *Sender,
          TField *Field);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokHareketi(TComponent* Owner);
    bool __fastcall TekrarKontrol(void);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokHareketi *frmStokHareketi;
//---------------------------------------------------------------------------
#endif
