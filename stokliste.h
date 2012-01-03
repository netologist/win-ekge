//---------------------------------------------------------------------------

#ifndef stoklisteH
#define stoklisteH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmStokListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox2;
    TLabel *Label5;
    TDBGrid *DBGrid3;
    TEdit *ARAMA_Edit;
    TQuery *querySTOKLISTE;
    TDataSource *dsrcSTOKLISTE;
    TStringField *querySTOKLISTEURUNKODU;
    TStringField *querySTOKLISTEURUNADI;
    TEdit *AYAR_Edit;
    TCurrencyField *querySTOKLISTEFIYATI;
    void __fastcall ARAMA_EditChange(TObject *Sender);
    void __fastcall DBGrid3CellClick(TColumn *Column);
    void __fastcall StokHareketiSecimi(void);
    void __fastcall AdisyonSecimi(void);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid3KeyPress(TObject *Sender, char &Key);
    void __fastcall FormKeyPress(TObject *Sender, char &Key);
    void __fastcall ARAMA_EditKeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokListesi *frmStokListesi;
//---------------------------------------------------------------------------
#endif
