//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FreehandOptions.h"
#include "GameOfLife.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::SizeBarChange(TObject *Sender)
{
Label2->Caption=IntToStr(SizeBar->Position);
}
//---------------------------------------------------------------------------

