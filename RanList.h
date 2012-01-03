//---------------------------------------------------------------------------

#ifndef RanListH
#define RanListH
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
class TfrmRandevuGirisListesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TDBGrid *DBGrid1;
    TDataSource *DataSource1;
    TQuery *Query1;
    TIntegerField *Query1RANDEVU_NO;
    TStringField *Query1ISLEM;
    TStringField *Query1MNO;
    TStringField *Query1PERSONEL;
    TDateField *Query1TARIH;
    TTimeField *Query1SAAT;
    TStringField *Query1RANDEVU_DURUMU;
    TMemoField *Query1OZEL_NOT;
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmRandevuGirisListesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmRandevuGirisListesi *frmRandevuGirisListesi;
//---------------------------------------------------------------------------
#endif
