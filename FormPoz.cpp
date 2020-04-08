//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "FormPoz.h"
#include "GameOfLifeMakeCellWindow.h"
#include "GameOfLife.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm5::FormCreate(TObject *Sender)
{
ScrollBar2->Max=StrToInt(Form1->Label1->Caption)-38;
ScrollBar2->Position=Form1->PozCenter->Top;
ScrollBar1->Max=StrToInt(Form1->Label1->Caption)-42;
ScrollBar1->Position=Form1->PozCenter->Left;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ScrollBar1Change(TObject *Sender)
{
Form1->PozCenter->Left=ScrollBar1->Position;
Edit2->Text=IntToStr(ScrollBar1->Position);
}
//---------------------------------------------------------------------------

void __fastcall TForm5::ScrollBar2Change(TObject *Sender)
{
Form1->PozCenter->Top=ScrollBar2->Position;
Edit1->Text=IntToStr(ScrollBar2->Position);













}
//---------------------------------------------------------------------------



void __fastcall TForm5::Button2Click(TObject *Sender)
{
Form1->Button6->Enabled=True;
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Edit2Change(TObject *Sender)
{
if(StrToInt(Edit2->Text)>=ScrollBar1->Max){Edit2->Text=IntToStr(ScrollBar1->Max);}
ScrollBar1->Position=StrToInt(Edit2->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Edit1Change(TObject *Sender)
{
if(StrToInt(Edit1->Text)>=ScrollBar2->Max){Edit1->Text=IntToStr(ScrollBar2->Max);}
ScrollBar2->Position=StrToInt(Edit1->Text);
}
//---------------------------------------------------------------------------

