//---------------------------------------------------------------------------

#ifndef formulistH
#define formulistH
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
class TfrmFormulListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TDataSource *dsrcLIST;
    TQuery *queryLIST;
    TIntegerField *queryLISTOTOMATIK_SAYI;
    TStringField *queryLISTMNO;
    TDateField *queryLISTTARIH;
    TStringField *queryLISTKAYITNO;
    TStringField *queryLISTBEKLEMESURESI;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmFormulListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmFormulListesi *frmFormulListesi;
//---------------------------------------------------------------------------
#endif
