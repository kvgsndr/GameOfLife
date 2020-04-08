//---------------------------------------------------------------------------

#ifndef FreehandOptionsH
#define FreehandOptionsH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TRadioButton *RadioButton1;
        TRadioButton *RadioButton2;
        TCheckBox *CheckBox1;
        TLabel *Label1;
        TLabel *Label2;
        TTrackBar *SizeBar;
        void __fastcall SizeBarChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
