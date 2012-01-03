//---------------------------------------------------------------------------

#ifndef parolaayarH
#define parolaayarH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <Db.hpp>
#include <DBCtrls.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
#include <Mask.hpp>
#include <ComCtrls.hpp>
#include <ImgList.hpp>
#include <ToolWin.hpp>
//---------------------------------------------------------------------------
class TfrmParolaAyar : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label2;
    TDBEdit *DBEdit1;
    TDBEdit *DBEdit2;
    TLabel *Label3;
    TDBEdit *DBEdit3;
    TGroupBox *GroupBox1;
    TGroupBox *GroupBox2;
    TRadioButton *RadioButton2;
    TRadioButton *RadioButton1;
    TDBGrid *DBGrid1;
    TDataSource *dsrcPAROLA;
    TTable *tblPAROLA;
    TImageList *ImageList1;
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TToolButton *tbtnKAYDET;
    TToolButton *ToolButton3;
    TStringField *tblPAROLAKULLANICI_ADI;
    TStringField *tblPAROLAPAROLA1;
    TStringField *tblPAROLAPAROLA2;
    TBooleanField *tblPAROLAIZIN;
    void __fastcall ToolButton1Click(TObject *Sender);
    void __fastcall tbtnKAYDETClick(TObject *Sender);
    void __fastcall ToolButton3Click(TObject *Sender);
    void __fastcall FormShow(TObject *Sender);
    void __fastcall DBGrid1CellClick(TColumn *Column);
    void __fastcall DBGrid1KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit1Change(TObject *Sender);
    void __fastcall DBEdit2Change(TObject *Sender);
    void __fastcall DBEdit3Change(TObject *Sender);
    void __fastcall DBEdit1KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit2KeyPress(TObject *Sender, char &Key);
    void __fastcall DBEdit3KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmParolaAyar(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmParolaAyar *frmParolaAyar;
//---------------------------------------------------------------------------
#endif
