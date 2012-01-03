//---------------------------------------------------------------------------

#ifndef AcilisH
#define AcilisH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TfrmAcilis : public TForm
{
__published:	// IDE-managed Components
    TImage *Image1;
    TTimer *Timer1;
    TLabel *Label1;
    TPopupMenu *PopupMenu1;
    TProgressBar *ProgressBar1;
    TBevel *Bevel1;
    TLabel *Label2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TfrmAcilis(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmAcilis *frmAcilis;
//---------------------------------------------------------------------------
#endif
