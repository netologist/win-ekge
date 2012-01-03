//---------------------------------------------------------------------------

#ifndef RanKontrolH
#define RanKontrolH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "CCALENDR.h"
#include <ComCtrls.hpp>
#include <DBGrids.hpp>
#include <Grids.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBTables.hpp>
#include <Mask.hpp>
#include <Menus.hpp>
#include <ExtCtrls.hpp>
#include <Qrctrls.hpp>
#include <QuickRpt.hpp>
//---------------------------------------------------------------------------
class TfrmRandevuCizelgesi : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label7;
    TLabel *Label8;
    TLabel *Label9;
    TGroupBox *GroupBox3;
    TDBGrid *DBGrid1;
    TMonthCalendar *MonthCalendar1;
    TDBEdit *DBEdit1;
    TDBEdit *DBEdit2;
    TDBEdit *DBEdit3;
    TDBEdit *DBEdit4;
    TDBEdit *DBEdit5;
    TDBEdit *DBEdit6;
    TDataSource *dsrcMUSTERI;
    TQuery *queryMUSTERI;
    TDataSource *dsrcRANDEVU;
    TTable *tblRANDEVU;
    TPopupMenu *PopupMenu1;
    TMenuItem *Yazdr1;
    TMenuItem *nzleme1;
    TMenuItem *YazcAyar1;
    TQuickRep *QuickRep1;
    TQRBand *DetailBand1;
    TQRBand *ColumnHeaderBand1;
    TQRLabel *QRLabel2;
    TQRLabel *QRLabel1;
    TQRLabel *QRLabel3;
    TQRLabel *QRLabel4;
    TQRLabel *QRLabel5;
    TQRDBText *QRDBText1;
    TQRDBText *QRDBText2;
    TQRDBText *QRDBText3;
    TQRDBText *QRDBText4;
    TQRLabel *QRLabel6;
    TQRLabel *QRLabel7;
    TQRLabel *QRLabel8;
    TQRLabel *QRLabel9;
    TQRDBText *QRDBText5;
    TQRDBText *QRDBText6;
    TQRDBText *QRDBText7;
    TAutoIncField *tblRANDEVURANDEVU_NO;
    TStringField *tblRANDEVUISLEM;
    TStringField *tblRANDEVUMNO;
    TStringField *tblRANDEVUPERSONEL;
    TDateField *tblRANDEVUTARIH;
    TTimeField *tblRANDEVUSAAT;
    TStringField *tblRANDEVURANDEVU_DURUMU;
    TMemoField *tblRANDEVUOZEL_NOT;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall MonthCalendar1Click(TObject *Sender);
    void __fastcall Yazdr1Click(TObject *Sender);
    void __fastcall nzleme1Click(TObject *Sender);
    void __fastcall YazcAyar1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmRandevuCizelgesi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmRandevuCizelgesi *frmRandevuCizelgesi;
//---------------------------------------------------------------------------
#endif
