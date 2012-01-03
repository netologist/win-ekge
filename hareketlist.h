//---------------------------------------------------------------------------

#ifndef hareketlistH
#define hareketlistH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmHareketListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TGroupBox *GroupBox2;
    TLabel *Label2;
    TEdit *Firma_Edit;
    TDataSource *dsrcHAREKET;
    TQuery *queryHAREKET;
    TStringField *queryHAREKETFATURANO;
    TStringField *queryHAREKETMUSTERIADI;
    TDateField *queryHAREKETTARIH;
    TMemoField *queryHAREKETACIKLAMA;
    TStringField *queryHAREKETDEPARTMAN;
    TStringField *queryHAREKETKAYIT_TURU;
    TStringField *queryHAREKETREFERANS;
    void __fastcall Firma_EditChange(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmHareketListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmHareketListesi *frmHareketListesi;
//---------------------------------------------------------------------------
#endif
