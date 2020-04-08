//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GameOfLife.h"
#include "GameOfLifeForm2.h"
#include "FormPoz.h"
#include "GameOfLifeMakeCellWindow.h"
#include "Unit6VG.h"
#include "FreehandOptions.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int livingcells[100][100];
int deathborncheck[100][100];
int szap[100][100];
int nCiklus;
int nCell;
 



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
//Image1->Canvas->MoveTo(5,5);
//Image1->Canvas->LineTo(6,10);
//Graphics::TBitmap *pBitmap = new Graphics::TBitmap();
//pBitmap->LoadFromFile("YBox.bmp");
//Image1->Canvas->Draw(10,10,pBitmap);


}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimeWarpChange(TObject *Sender)
{
Symbiosis->Interval=TimeWarp->Position;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
Form2->Show();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button4Click(TObject *Sender)
{int b;int n;int x;int y;int xa;int yb;int centrex;int centrey;
 Graphics::TBitmap *cBmp = new Graphics::TBitmap();
 cBmp->LoadFromFile("Cell.bmp");

Button2->Enabled=False;
PozCenter->Visible=true;


if(Form5->ShowModal()==mrOk)
{
for(n=0;n<50;n++)
        {
        Form3->ListBox1->ItemIndex=n;

        xa=StrToInt(Form3->ListBox1->Items->Strings[Form3->ListBox1->ItemIndex]);
        if(xa!=0)
                {
                yb=xa%100;
                xa=(xa-yb)/100;
                centrex=PozCenter->Top;
                centrex=centrex-(centrex%10);
                centrey=PozCenter->Left;
                centrey=centrey-(centrey%10);
                //b=((StrToInt(Label1->Caption)/2)-30);
                //b=b-(b%10);
                //x=(b+xa);
                //y=(b+yb);

                x=((centrex-40)+xa);
                y=((centrey-40)+yb);
                livingcells[x/10][y/10]=1;
                CellBox->Canvas->Draw(y, x, cBmp);

}}}
//Button4->Caption=IntToStr(x);
 PozCenter->Visible=False;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{int x,y,m,a;
m=StrToInt(Label1->Caption)/10;m=m-1;

CellBox->Canvas->FillRect(ClientRect);

Form2->Enabled=true;
Form3->Enabled=true;
Form4->Enabled=true;


TimeWarp->Enabled=False;
Button1->Enabled=False;
Button6->Enabled=False;
Button2->Enabled=True;
Button3->Enabled=True;
Label7->Enabled=false;
Label4->Caption="0";
Label6->Caption="0";
nCiklus=0;nCell=0;


for(x=0;x<101;x++)
        {for(y=0;y<101;y++)
        {livingcells[x][y]=0;deathborncheck[x][y]=0;}}




}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button3Click(TObject *Sender)
{
Form3->Show();

}
//---------------------------------------------------------------------------






void __fastcall TForm1::Button6Click(TObject *Sender)
{
Button1->Enabled=True;
TimeWarp->Enabled=True;
Button2->Enabled=False;
Button3->Enabled=False;
Button4->Enabled=False;
Button6->Enabled=False;
Label7->Enabled=true;


Form2->Enabled=False;
Form3->Enabled=False;
Form4->Enabled=False;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
//if(Symbiosis->Enabled==false)
//{Symbiosis->Enabled=true; Button1->Caption="Stop";Button5->Enabled=false;}
//if(Symbiosis->Enabled==true)
//{Symbiosis->Enabled=false; Button1->Caption="Start"; Button5->Enabled=true;}

if(Button1->Checked==True)
{
Button6->Enabled=false;
Button5->Enabled=false;
int a,x,y,n,m,c,xm,xp,ym,yp;
m=StrToInt(Label1->Caption)/10;
m=m-1;

Graphics::TBitmap *cBmp = new Graphics::TBitmap();
 cBmp->LoadFromFile("Cell.bmp");
Graphics::TBitmap *dcBmp = new Graphics::TBitmap();
 dcBmp->LoadFromFile("WhiteCell.bmp");


//CellBox->Canvas->Draw(0*10,0*10,cBmp);
//CellBox->Canvas->Draw(0*10,m*10,cBmp);
//CellBox->Canvas->Draw(m*10,0*10,cBmp);
//CellBox->Canvas->Draw(m*10,m*10,cBmp);
}

if(Button1->Checked==false)
{//Button6->Enabled=true;
Button5->Enabled=true;}












}
//---------------------------------------------------------------------------


void __fastcall TForm1::SymbiosisTimer(TObject *Sender)
{
if(Button1->Checked==true){
int a,x,y,m,c,xm,xp,ym,yp;
m=StrToInt(Label1->Caption)/10;
m=m-1;

Graphics::TBitmap *cBmp = new Graphics::TBitmap();
 cBmp->LoadFromFile("Cell.bmp");
Graphics::TBitmap *dcBmp = new Graphics::TBitmap();
 dcBmp->LoadFromFile("WhiteCell.bmp");


//CellBox->Canvas->Draw(1*10,1*10,cBmp);
//CellBox->Canvas->Draw(1*10,m*10,cBmp);
//CellBox->Canvas->Draw(m*10,1*10,cBmp);
//CellBox->Canvas->Draw(m*10,m*10,cBmp);






for(x=1;x<m;x++)
        {for(y=1;y<m;y++)
                {
                xm=x-1;xp=x+1;ym=y-1;yp=y+1;
                c=0;
                if(livingcells[xm][ym]==1){c=c+1;}
                if(livingcells[xm][y]==1){c=c+1;}
                if(livingcells[xm][yp]==1){c=c+1;}
                if(livingcells[x][yp]==1){c=c+1;}
                if(livingcells[xp][yp]==1){c=c+1;}
                if(livingcells[xp][y]==1){c=c+1;}
                if(livingcells[xp][ym]==1){c=c+1;}
                if(livingcells[x][ym]==1){c=c+1;}

                CellBox->Canvas->Draw(y*10, x*10,cBmp); //Tesztkiiras

                       deathborncheck[x][y]=c;
                }//y Forja
}//x Forja

for(x=0;x<=m;x++)//jobb bal oldal;
{ y=0;xm=x-1;xp=x+1;ym=y-1;yp=y+1;c=0;
 if(livingcells[xm][y]==1){c=c+1;}
 if(livingcells[xm][yp]==1){c=c+1;}
 if(livingcells[x][yp]==1){c=c+1;}
 if(livingcells[xp][yp]==1){c=c+1;}
 if(livingcells[xp][y]==1){c=c+1;}
       //deathborncheck[x][y]=c;
      deathborncheck[x][y]=0;

 y=m;ym=y-1;yp=y+1;c=0;
 if(livingcells[xm][y]==1){c=c+1;}
 if(livingcells[xm][ym]==1){c=c+1;}
 if(livingcells[x][ym]==1){c=c+1;}
 if(livingcells[xp][ym]==1){c=c+1;}
 if(livingcells[xp][y]==1){c=c+1;}
       //deathborncheck[x][y]=c;
      deathborncheck[x][y]=0;
}//jbfor

for(y=0;y<=m;y++)//FelsoAlso
{  x=0;xm=x-1;xp=x+1;ym=y-1;yp=y+1;c=0;
   if(livingcells[x][yp]==1){c=c+1;}
   if(livingcells[xp][yp]==1){c=c+1;}
   if(livingcells[xp][y]==1){c=c+1;}
   if(livingcells[xp][ym]==1){c=c+1;}
   if(livingcells[x][ym]==1){c=c+1;}
      //deathborncheck[x][y]=c;
      deathborncheck[x][y]=0;

   x=m;xm=y-1;xp=y+1;c=0;
   if(livingcells[x][yp]==1){c=c+1;}
   if(livingcells[xm][yp]==1){c=c+1;}
   if(livingcells[xm][y]==1){c=c+1;}
   if(livingcells[xm][ym]==1){c=c+1;}
   if(livingcells[x][ym]==1){c=c+1;}
       //deathborncheck[x][y]=c;
      deathborncheck[x][y]=0;
}//faFor

x=0;y=0;c=0;//BF
xm=x-1;xp=x+1;ym=y-1;yp=y+1;
 if(livingcells[x][yp]==1){c=c+1;}
 if(livingcells[xp][yp]==1){c=c+1;}
 if(livingcells[xp][y]==1){c=c+1;}
       //deathborncheck[x][y]=c;
      deathborncheck[x][y]=0;

x=m;y=m;c=0;//JA
xm=x-1;xp=x+1;ym=y-1;yp=y+1;
 if(livingcells[x][ym]==1){c=c+1;}
 if(livingcells[xm][ym]==1){c=c+1;}
 if(livingcells[xm][y]==1){c=c+1;}
       //deathborncheck[x][y]=c;
      deathborncheck[x][y]=0;

x=m;y=0;c=0;//BA
xm=x-1;xp=x+1;ym=y-1;yp=y+1;
 if(livingcells[x][yp]==1){c=c+1;}
 if(livingcells[xm][yp]==1){c=c+1;}
 if(livingcells[xm][y]==1){c=c+1;}
       //deathborncheck[x][y]=c;
      deathborncheck[x][y]=0;

x=0;y=m;c=0;//BF
xm=x-1;xp=x+1;ym=y-1;yp=y+1;
 if(livingcells[x][ym]==1){c=c+1;}
 if(livingcells[xp][ym]==1){c=c+1;}
 if(livingcells[xp][y]==1){c=c+1;}
      //deathborncheck[x][y]=c;
      deathborncheck[x][y]=0;

for(x=0;x<=m;x++)
        {for(y=0;y<=m;y++)
                {if(deathborncheck[x][y]==3)
                {nCell=nCell+1;szap[x][y]=1;livingcells[x][y]=1;}
                else{//elso else
                if(deathborncheck[x][y]==2)
                        {if(livingcells[x][y]==1)
                        {szap[x][y]=1;nCell=nCell+1;}}//Deathborncheckvege
                        else{livingcells[x][y]=0;szap[x][y]=0;CellBox->Canvas->Draw(y*10, x*10, dcBmp);}//masodik else
                }//elsoElse




                }//yfor
        }//xfpr
for(x=0;x<=m;x++)
        {for(y=0;y<=m;y++)
        {if(szap[x][y]==1){CellBox->Canvas->Draw(y*10, x*10, cBmp);}}}

for(x=0;x<=m;x++)
        {for(y=0;y<=m;y++)
        {if(szap[x][y]==0){CellBox->Canvas->Draw(y*10, x*10, dcBmp);}}}


nCiklus=nCiklus+1;
Label4->Caption=IntToStr(nCiklus);
Label6->Caption=IntToStr(nCell);
nCell=0;
//for(x=0;x<101;x++)
//{for(y=0;y<101;y++)deathborncheck[x][y]=0;}



}//Ifhez tartozik
}
//---------------------------------------------------------------------------






void __fastcall TForm1::FHD(TObject *Sender)
{
 Graphics::TBitmap *cBmp = new Graphics::TBitmap();
  cBmp->LoadFromFile("Cell.bmp");
 Graphics::TBitmap *dcBmp = new Graphics::TBitmap();
 dcBmp->LoadFromFile("WhiteCell.bmp");
 Drawing = true;

int x,y,xm,xp,ym,yp;
if(Form4->RadioButton1->Checked==true)
{y=(Mouse->CursorPos.x-8)-(Form1->Left);//Label8->Caption=IntToStr(y);
x=(Mouse->CursorPos.y-24)-(Form1->Top);//Label9->Caption=IntToStr(x);
x=x-(x%10);
y=y-(y%10);
ym=y-10;yp=y+10;xm=x-10;xp=x+10;

if(Form4->CheckBox1->Checked==true)
{CellBox->Canvas->Draw(y, x, dcBmp);livingcells[x/10][y/10]=0;
if(Form4->SizeBar->Position>=2){
                                CellBox->Canvas->Draw(ym, x, dcBmp);livingcells[x/10][ym/10]=0;
                                CellBox->Canvas->Draw(ym, xm, dcBmp);livingcells[xm/10][ym/10]=0;
                                CellBox->Canvas->Draw(y, xm, dcBmp);livingcells[xm/10][y/10]=0;
                                }

if(Form4->SizeBar->Position>=3){
                                CellBox->Canvas->Draw(yp, xm, dcBmp);livingcells[xm/10][yp/10]=0;
                                CellBox->Canvas->Draw(yp, x, dcBmp);livingcells[x/10][yp/10]=0;
                                CellBox->Canvas->Draw(yp, xp, dcBmp);livingcells[xp/10][yp/10]=0;
                                CellBox->Canvas->Draw(y, xp, dcBmp);livingcells[xp/10][y/10]=0;
                                CellBox->Canvas->Draw(ym, xp, dcBmp);livingcells[xp/10][ym/10]=0;
                                }


}//if vege
else{CellBox->Canvas->Draw(y, x, cBmp);livingcells[x/10][y/10]=1;
if(Form4->SizeBar->Position>=2){
                                CellBox->Canvas->Draw(ym, x, cBmp);livingcells[x/10][ym/10]=1;
                                CellBox->Canvas->Draw(ym, xm, cBmp);livingcells[xm/10][ym/10]=1;
                                CellBox->Canvas->Draw(y, xm, cBmp);livingcells[xm/10][y/10]=1;
                                }

if(Form4->SizeBar->Position>=3){
                                CellBox->Canvas->Draw(yp, xm, cBmp);livingcells[xm/10][yp/10]=1;
                                CellBox->Canvas->Draw(yp, x, cBmp);livingcells[x/10][yp/10]=1;
                                CellBox->Canvas->Draw(yp, xp, cBmp);livingcells[xp/10][yp/10]=1;
                                CellBox->Canvas->Draw(y, xp, cBmp);livingcells[xp/10][y/10]=1;
                                CellBox->Canvas->Draw(ym, xp, cBmp);livingcells[xp/10][ym/10]=1;
                                }



}//masodik if vege

Button2->Enabled=false;
Button6->Enabled=true;



}//,kiiras es felteteleinek vege
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button3Change(TObject *Sender)
{
if(Button3->ItemIndex==0){Form3->Show();}
if(Button3->ItemIndex==1){Form4->Show();}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FHDFolyamatos(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
// Graphics::TBitmap *cBmp = new Graphics::TBitmap();
//  cBmp->LoadFromFile("D:\\GameOfLife\\Cell.bmp");

//int x,y,a,cellc;
//a=StrToInt(Form4->Label2->Caption);
//if(Form4->RadioButton2->Checked==true)
//{for(cellc=0;cellc<a;cellc++)
//        {y=(Mouse->CursorPos.x-8)-(Form1->Left);//Label8->Caption=IntToStr(y);
//        x=(Mouse->CursorPos.y-24)-(Form1->Top);//Label9->Caption=IntToStr(x);
//        x=x-(x%10);
//        y=y-(y%10);
//        CellBox->Canvas->Draw(y, x, cBmp);
//        Button2->Enabled=false;
//        Button6->Enabled=true;
//        livingcells[x/10][y/10]=1;
//        }
//}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FHDF(TObject *Sender, TObject *Source, int X,
      int Y, TDragState State, bool &Accept)
{
// Graphics::TBitmap *cBmp = new Graphics::TBitmap();
//  cBmp->LoadFromFile("D:\\GameOfLife\\Cell.bmp");
//
//int x,y,a,cellc;
//a=StrToInt(Form4->Label2->Caption);
//if(Form4->RadioButton2->Checked==true)
//{for(cellc=0;cellc<a;cellc++)
//        {y=(Mouse->CursorPos.x-8)-(Form1->Left);//Label8->Caption=IntToStr(y);
//        x=(Mouse->CursorPos.y-24)-(Form1->Top);//Label9->Caption=IntToStr(x);
//        x=x-(x%10);
//        y=y-(y%10);
//        CellBox->Canvas->Draw(y, x, cBmp);
//        Button2->Enabled=false;
//        Button6->Enabled=true;
//        livingcells[x/10][y/10]=1;
//        }
//}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::FHDFFoly(TObject *Sender, TShiftState Shift, int X,
      int Y)
{
 Graphics::TBitmap *cBmp = new Graphics::TBitmap();
  cBmp->LoadFromFile("Cell.bmp");
   Graphics::TBitmap *dcBmp = new Graphics::TBitmap();
 dcBmp->LoadFromFile("WhiteCell.bmp");


//a=StrToInt(Form4->Label2->Caption);
int x,y,xm,xp,ym,yp;
if(Form4->RadioButton2->Checked==true)
{y=(Mouse->CursorPos.x-8)-(Form1->Left);//Label8->Caption=IntToStr(y);
x=(Mouse->CursorPos.y-24)-(Form1->Top);//Label9->Caption=IntToStr(x);
x=x-(x%10);
y=y-(y%10);
ym=y-10;yp=y+10;xm=x-10;xp=x+10;

if(Drawing){
if(Form4->CheckBox1->Checked==true)
{

CellBox->Canvas->Draw(y, x, dcBmp);livingcells[x/10][y/10]=0;
if(Form4->SizeBar->Position>=2){
                                CellBox->Canvas->Draw(ym, x, dcBmp);livingcells[x/10][ym/10]=0;
                                CellBox->Canvas->Draw(ym, xm, dcBmp);livingcells[xm/10][ym/10]=0;
                                CellBox->Canvas->Draw(y, xm, dcBmp);livingcells[xm/10][y/10]=0;
                                }

if(Form4->SizeBar->Position>=3){
                                CellBox->Canvas->Draw(yp, xm, dcBmp);livingcells[xm/10][yp/10]=0;
                                CellBox->Canvas->Draw(yp, x, dcBmp);livingcells[x/10][yp/10]=0;
                                CellBox->Canvas->Draw(yp, xp, dcBmp);livingcells[xp/10][yp/10]=0;
                                CellBox->Canvas->Draw(y, xp, dcBmp);livingcells[xp/10][y/10]=0;
                                CellBox->Canvas->Draw(ym, xp, dcBmp);livingcells[xp/10][ym/10]=0;
                                }


}//if vege
else{CellBox->Canvas->Draw(y, x, cBmp);livingcells[x/10][y/10]=1;
if(Form4->SizeBar->Position>=2){
                                CellBox->Canvas->Draw(ym, x, cBmp);livingcells[x/10][ym/10]=1;
                                CellBox->Canvas->Draw(ym, xm, cBmp);livingcells[xm/10][ym/10]=1;
                                CellBox->Canvas->Draw(y, xm, cBmp);livingcells[xm/10][y/10]=1;
                                }

if(Form4->SizeBar->Position>=3){
                                CellBox->Canvas->Draw(yp, xm, cBmp);livingcells[xm/10][yp/10]=1;
                                CellBox->Canvas->Draw(yp, x, cBmp);livingcells[x/10][yp/10]=1;
                                CellBox->Canvas->Draw(yp, xp, cBmp);livingcells[xp/10][yp/10]=1;
                                CellBox->Canvas->Draw(y, xp, cBmp);livingcells[xp/10][y/10]=1;
                                CellBox->Canvas->Draw(ym, xp, cBmp);livingcells[xp/10][ym/10]=1;
                                }



}//masodik if vege

Button2->Enabled=false;
Button6->Enabled=true;


}//Drawing feltetel
}//,kiiras es felteteleinek vege

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FFEnd(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Drawing = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FFStart(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
 Drawing = true;
}
//---------------------------------------------------------------------------

