//---------------------------------------------------------------------------

#ifndef personelH
#define personelH
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
class TfrmPersonel : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TDBNavigator *DBNavigator1;
    TDataSource *dsrcPERSON;
    TTable *tblPERSON;
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmPersonel(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPersonel *frmPersonel;
//---------------------------------------------------------------------------
#endif
