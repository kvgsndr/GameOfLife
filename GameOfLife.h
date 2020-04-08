//---------------------------------------------------------------------------

#ifndef GameOfLifeH
#define GameOfLifeH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <Menus.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TTrackBar *TimeWarp;
        TButton *Button2;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *Label3;
        TLabel *Label4;
        TLabel *Label5;
        TLabel *Label6;
        TShape *CellBack;
        TImage *CellBox;
        TButton *Button4;
        TButton *Button5;
        TImage *PozCenter;
        TButton *Button6;
        TTimer *Symbiosis;
        TLabel *Label7;
        TCheckBox *Button1;
        TComboBox *Button3;
        void __fastcall BitBtn1Click(TObject *Sender);
        void __fastcall TimeWarpChange(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button6Click(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall SymbiosisTimer(TObject *Sender);
        void __fastcall FHD(TObject *Sender);
        void __fastcall Button3Change(TObject *Sender);
        void __fastcall FHDFolyamatos(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall FHDF(TObject *Sender, TObject *Source, int X,
          int Y, TDragState State, bool &Accept);
        void __fastcall FHDFFoly(TObject *Sender, TShiftState Shift, int X,
          int Y);
        void __fastcall FFEnd(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
        void __fastcall FFStart(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
        bool Drawing;
        TPoint Origin, MovePt;

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
