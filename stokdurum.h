//---------------------------------------------------------------------------

#ifndef stokdurumH
#define stokdurumH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TfrmStokRapor : public TForm
{
__published:	// IDE-managed Components
    TQuickRep *QuickRep1;
    TTable *Table1;
    TDataSource *DataSource1;
    TQRBand *DetailBand1;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText4;
    TQRBand *ColumnHeaderBand1;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel1;
    TStringField *Table1URUNKODU;
    TStringField *Table1URUNADI;
    TCurrencyField *Table1FIYATI;
    TFloatField *Table1MIKTARI;
    TStringField *Table1DEPARTMAN;
    TAutoIncField *Table1OTOMATIK_SAYI;
    TFloatField *Table1SONMIKTAR;
private:	// User declarations
public:		// User declarations
    __fastcall TfrmStokRapor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmStokRapor *frmStokRapor;
//---------------------------------------------------------------------------
#endif
