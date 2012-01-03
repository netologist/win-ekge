//---------------------------------------------------------------------------

#ifndef adisyonlistH
#define adisyonlistH
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
class TfrmAdisyonListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TQuery *Query1;
    TDataSource *DataSource1;
    TStringField *Query1DEPARTMAN;
    TIntegerField *Query1ADISYONNO;
    TDateField *Query1TARIH;
    TCurrencyField *Query1TOPLAM;
    TStringField *Query1MNO;
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAdisyonListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAdisyonListesi *frmAdisyonListesi;
//---------------------------------------------------------------------------
#endif
