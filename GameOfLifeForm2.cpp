//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GameOfLife.h"
#include "GameOfLifeForm2.h"
#include "FormPoz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::TrackBar1Change(TObject *Sender)
{int a;int b;
Form1->Height=(TrackBar1->Position+136);
Form1->Width=(TrackBar1->Position+31);
Form1->Label1->Caption=IntToStr(Form1->CellBox->Width);
b=TrackBar1->Position;
a=TrackBar1->Position%10;
b=b-a;
Form1->Label1->Caption=b;

Form1->PozCenter->Left=(TrackBar1->Position/2)+8;
Form1->PozCenter->Top=(TrackBar1->Position/2)+12;

Form5->ScrollBar2->Max=StrToInt(Form1->Label1->Caption)-38;
Form5->ScrollBar2->Position=Form1->PozCenter->Top;
Form5->ScrollBar1->Max=StrToInt(Form1->Label1->Caption)-42;
Form5->ScrollBar1->Position=Form1->PozCenter->Left;

}
//---------------------------------------------------------------------------


