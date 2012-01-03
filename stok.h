//---------------------------------------------------------------------------

#ifndef stokH
#define stokH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ImgList.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
#include <ToolWin.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmStok : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TToolBar *ToolBar2;
    TToolButton *tbtnYeni;
    TToolButton *tbtnKaydet;
    TToolButton *tbtnSil;
    TToolButton *ToolButton7;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TDBEdit *STOKKODU_Edit;
    TDBEdit *STOKADI_Edit;
    TDBEdit *FIYATI_Edit;
    TDBEdit *MIKTAR_Edit;
    TPageControl *PageControl1;
    TTabSheet *TabSheet1;
    TTabSheet *TabSheet2;
    TDBGrid *DBGrid1;
    TDBGrid *DBGrid2;
    TGroupBox *GroupBox2;
    TDBGrid *DBGrid3;
    TEdit *ARAMA_Edit;
    TLabel *Label5;
    TToolButton *tbtnAC;
    TToolButton *tbtnKAPA;
    TImageList *ImageList1;
    TTable *tblSTOKANA;
    TDataSource *dsrcSTOKANA;
    TDataSource *dsrcSTOKLISTE;
    TQuery *querySTOKLISTE;
    TDataSource *drscGIRIS;
    TDataSource *dsrcCIKIS;
    TLabel *Label6;
    TQuery *queryCIKIS;
    TQuery *queryGIRIS;
    TDateField *queryCIKISTARIH;
    TStringField *queryCIKISURUN_NO;
    TFloatField *queryCIKISMAL_ADEDI;
    TStringField *queryCIKISMUSTERI_ADI;
    TStringField *queryCIKISHAREKET_TURU;
    TDateField *queryGIRISTARIH;
    TStringField *queryGIRISURUN_NO;
    TFloatField *queryGIRISMAL_ADEDI;
    TStringField *queryGIRISMUSTERI_ADI;
    TStringField *queryGIRISHAREKET_TURU;
    TAutoIncField *tblSTOKANAOTOMATIK_SAYI;
    TStringField *tblSTOKANAURUNKODU;
    TStringField *tblSTOKANAURUNADI;
    TCurrencyField *tblSTOKANAFIYATI;
    TFloatField *tblSTOKANAMIKTARI;
    TStringField *tblSTOKANADEPARTMAN;
    TDBEdit *SONDURUM_Edit;
    TFloatField *tblSTOKANASONMIKTAR;
    TToolButton *ToolButton1;
    TToolButton *ToolButton2;
    TStringField *querySTOKLISTEURUNKODU;
    TStringField *querySTOKLISTEURUNADI;
    void __fastcall ToolButton9Click(TObject *Sender);
    void __fastcall tbtnACClick(TObject *Sender);
    void __fastcall tbtnYeniClick(TObject *Sender);
    void __fastcall tbtnKaydetClick(TObject *Sender);
    void __fastcall tbtnSilClick(TObject *Sender);
    void __fastcall ARAMA_EditChange(TObject *Sender);
    void __fastcall DBGrid3CellClick(TColumn *Column);
    void __fastcall STOKKODU_EditChange(TObject *Sender);
    void __fastcall STOKADI_EditChange(TObject *Sender);
    void __fastcall FIYATI_EditChange(TObject *Sender);
    void __fastcall MIKTAR_EditChange(TObject *Sender);
    void __fastcall KayitKontrol(void);
    void __fastcall TumStokDurumu(void);
    void __fastcall Sorgula(void);
    void __fastcall SonDurum(void);
    void __fastcall Anahtar(void);
    void __fastcall Kilit(void);    
    void __fastcall STOKKODU_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall STOKADI_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall FIYATI_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall MIKTAR_EditKeyPress(TObject *Sender, char &Key);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall ToolButton2Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStok(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStok *frmStok;
//---------------------------------------------------------------------------
#endif
