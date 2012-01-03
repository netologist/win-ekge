//---------------------------------------------------------------------------

#ifndef ranislemH
#define ranislemH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TfrmRadevuIslem : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TDBNavigator *DBNavigator1;
    TDataSource *DataSource1;
    TTable *Table1;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmRadevuIslem(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmRadevuIslem *frmRadevuIslem;
//---------------------------------------------------------------------------
#endif
