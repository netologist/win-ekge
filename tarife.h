//---------------------------------------------------------------------------

#ifndef tarifeH
#define tarifeH
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
class TfrmTarife : public TForm
{
__published:	// IDE-managed Components
    TDBNavigator *DBNavigator1;
    TDBGrid *DBGrid1;
    TDataSource *dsrcTARIFE;
    TTable *tblTARIFE;
    TGroupBox *Group;
    TStringField *tblTARIFEACIKLAMA;
    TCurrencyField *tblTARIFEFIYAT;
    TStringField *tblTARIFEDEPARTMAN;
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmTarife(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmTarife *frmTarife;
//---------------------------------------------------------------------------
#endif
