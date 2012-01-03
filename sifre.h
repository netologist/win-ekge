//---------------------------------------------------------------------------

#ifndef sifreH
#define sifreH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Db.hpp>
#include <DBTables.hpp>
//---------------------------------------------------------------------------
class TfrmSifre : public TForm
{
__published:	// IDE-managed Components
    TGroupBox *GroupBox1;
    TLabel *Label1;
    TLabel *Label2;
    TEdit *Edit1;
    TEdit *Edit2;
    TBitBtn *BitBtn1;
    TBitBtn *BitBtn2;
    TImage *Image1;
    TQuery *queryPAROLA;
    TStringField *queryPAROLAKULLANICI_ADI;
    TStringField *queryPAROLAPAROLA1;
    TStringField *queryPAROLAPAROLA2;
    TBooleanField *queryPAROLAIZIN;
    void __fastcall BitBtn1Click(TObject *Sender);
    void __fastcall BitBtn2Click(TObject *Sender);
    void __fastcall Edit1KeyPress(TObject *Sender, char &Key);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmSifre(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmSifre *frmSifre;
//---------------------------------------------------------------------------
#endif
