//---------------------------------------------------------------------------

#ifndef FormPozH
#define FormPozH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm5 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button2;
        TScrollBar *ScrollBar1;
        TScrollBar *ScrollBar2;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button1;
        TEdit *Edit1;
        TEdit *Edit2;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall ScrollBar1Change(TObject *Sender);
        void __fastcall ScrollBar2Change(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Edit2Change(TObject *Sender);
        void __fastcall Edit1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm5(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm5 *Form5;
//---------------------------------------------------------------------------
#endif
