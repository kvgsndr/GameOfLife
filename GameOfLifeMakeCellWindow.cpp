//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GameOfLifeMakeCellWindow.h"
#include "GameOfLife.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
int a[7][7];
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm3::CellListClick(TObject *Sender)
{
ListBox1->Clear();
if(DBImage1->Color==clYellow){a[1][1]=1;ListBox1->Items->Add("1010");}
if(DBImage2->Color==clYellow){a[1][2]=1;ListBox1->Items->Add("1020");}
if(DBImage3->Color==clYellow){a[1][3]=1;ListBox1->Items->Add("1030"); }
if(DBImage4->Color==clYellow){a[1][4]=1;ListBox1->Items->Add("1040");  }
if(DBImage5->Color==clYellow){a[1][5]=1;ListBox1->Items->Add("1050");   }
if(DBImage6->Color==clYellow){a[1][6]=1;ListBox1->Items->Add("1060");    }
if(DBImage7->Color==clYellow){a[1][7]=1;ListBox1->Items->Add("1070");     }

if(DBImage8->Color==clYellow){a[2][1]=1;ListBox1->Items->Add("2010");}
if(DBImage9->Color==clYellow){a[2][2]=1;ListBox1->Items->Add("2020"); }
if(DBImage10->Color==clYellow){a[2][3]=1;ListBox1->Items->Add("2030"); }
if(DBImage11->Color==clYellow){a[2][4]=1;ListBox1->Items->Add("2040");  }
if(DBImage12->Color==clYellow){a[2][5]=1;ListBox1->Items->Add("2050");   }
if(DBImage13->Color==clYellow){a[2][6]=1;ListBox1->Items->Add("2060");    }
if(DBImage14->Color==clYellow){a[2][7]=1;ListBox1->Items->Add("2070");     }

if(DBImage15->Color==clYellow){a[3][1]=1;ListBox1->Items->Add("3010");}
if(DBImage16->Color==clYellow){a[3][2]=1;ListBox1->Items->Add("3020");}
if(DBImage17->Color==clYellow){a[3][3]=1;ListBox1->Items->Add("3030");}
if(DBImage18->Color==clYellow){a[3][4]=1;ListBox1->Items->Add("3040");}
if(DBImage19->Color==clYellow){a[3][5]=1;ListBox1->Items->Add("3050");}
if(DBImage20->Color==clYellow){a[3][6]=1;ListBox1->Items->Add("3060");}
if(DBImage21->Color==clYellow){a[3][7]=1;ListBox1->Items->Add("3070");}

if(DBImage22->Color==clYellow){a[4][1]=1;ListBox1->Items->Add("4010");}
if(DBImage23->Color==clYellow){a[4][2]=1;ListBox1->Items->Add("4020");}
if(DBImage24->Color==clYellow){a[4][3]=1;ListBox1->Items->Add("4030");}
if(DBImage25->Color==clYellow){a[4][4]=1;ListBox1->Items->Add("4040");}
if(DBImage26->Color==clYellow){a[4][5]=1;ListBox1->Items->Add("4050");}
if(DBImage27->Color==clYellow){a[4][6]=1;ListBox1->Items->Add("4060");}
if(DBImage28->Color==clYellow){a[4][7]=1;ListBox1->Items->Add("4070");}

if(DBImage29->Color==clYellow){a[5][1]=1;ListBox1->Items->Add("5010");}
if(DBImage30->Color==clYellow){a[5][2]=1;ListBox1->Items->Add("5020");}
if(DBImage31->Color==clYellow){a[5][3]=1;ListBox1->Items->Add("5030");}
if(DBImage32->Color==clYellow){a[5][4]=1;ListBox1->Items->Add("5040");}
if(DBImage33->Color==clYellow){a[5][5]=1;ListBox1->Items->Add("5050");}
if(DBImage34->Color==clYellow){a[5][6]=1;ListBox1->Items->Add("5060");}
if(DBImage35->Color==clYellow){a[5][7]=1;ListBox1->Items->Add("5070");}

if(DBImage36->Color==clYellow){a[6][1]=1;ListBox1->Items->Add("6010");}
if(DBImage37->Color==clYellow){a[6][2]=1;ListBox1->Items->Add("6020");}
if(DBImage38->Color==clYellow){a[6][3]=1;ListBox1->Items->Add("6030");}
if(DBImage39->Color==clYellow){a[6][4]=1;ListBox1->Items->Add("6040");}
if(DBImage40->Color==clYellow){a[6][5]=1;ListBox1->Items->Add("6050");}
if(DBImage41->Color==clYellow){a[6][6]=1;ListBox1->Items->Add("6060");}
if(DBImage42->Color==clYellow){a[6][7]=1;ListBox1->Items->Add("6070");}

if(DBImage50->Color==clYellow){a[7][1]=1;ListBox1->Items->Add("7010");}
if(DBImage44->Color==clYellow){a[7][2]=1;ListBox1->Items->Add("7020");}
if(DBImage45->Color==clYellow){a[7][3]=1;ListBox1->Items->Add("7030");}
if(DBImage46->Color==clYellow){a[7][4]=1;ListBox1->Items->Add("7040");}
if(DBImage47->Color==clYellow){a[7][5]=1;ListBox1->Items->Add("7050");}
if(DBImage48->Color==clYellow){a[7][6]=1;ListBox1->Items->Add("7060");}
if(DBImage49->Color==clYellow){a[7][7]=1;ListBox1->Items->Add("7070");}

ListBox1->Items->Add("0000");

Form1->Button4->Enabled=True;




}
//---------------------------------------------------------------------------





void __fastcall TForm3::Click(TObject *Sender)
{
DBImage1->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Disable(TObject *Sender)
{
//DBImage1->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage2Click(TObject *Sender)
{
DBImage2->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImageDisable(TObject *Sender)
{
 //DBImage2->Color=clWhite;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage3Click(TObject *Sender)
{
  DBImage3->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage4Click(TObject *Sender)
{
DBImage4->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage5Click(TObject *Sender)
{
DBImage5->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage6Click(TObject *Sender)
{
DBImage6->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage7Click(TObject *Sender)
{
DBImage7->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage8Click(TObject *Sender)
{
DBImage8->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage9Click(TObject *Sender)
{
DBImage9->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage10Click(TObject *Sender)
{
DBImage10->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage11Click(TObject *Sender)
{
DBImage11->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage12Click(TObject *Sender)
{
DBImage12->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage13Click(TObject *Sender)
{
DBImage13->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage14Click(TObject *Sender)
{
DBImage14->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage15Click(TObject *Sender)
{
DBImage15->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage16Click(TObject *Sender)
{
DBImage16->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage17Click(TObject *Sender)
{
DBImage17->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage18Click(TObject *Sender)
{
DBImage18->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage19Click(TObject *Sender)
{
DBImage19->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage20Click(TObject *Sender)
{
DBImage20->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage21Click(TObject *Sender)
{
DBImage21->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage22Click(TObject *Sender)
{
DBImage22->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage23Click(TObject *Sender)
{
DBImage23->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage24Click(TObject *Sender)
{
DBImage24->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage25Click(TObject *Sender)
{
DBImage25->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage26Click(TObject *Sender)
{
DBImage26->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage27Click(TObject *Sender)
{
DBImage27->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage28Click(TObject *Sender)
{
DBImage28->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage29Click(TObject *Sender)
{
DBImage29->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage30Click(TObject *Sender)
{
DBImage30->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage31Click(TObject *Sender)
{
DBImage31->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage32Click(TObject *Sender)
{
DBImage32->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage33Click(TObject *Sender)
{
DBImage33->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage34Click(TObject *Sender)
{
DBImage34->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage35Click(TObject *Sender)
{
DBImage35->Color=clYellow;
}
//---------------------------------------------------------------------------


void __fastcall TForm3::DBImage36Click(TObject *Sender)
{
DBImage36->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage37Click(TObject *Sender)
{
DBImage37->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage38Click(TObject *Sender)
{
DBImage38->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage39Click(TObject *Sender)
{
DBImage39->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage40Click(TObject *Sender)
{
DBImage40->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage41Click(TObject *Sender)
{
DBImage41->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage42Click(TObject *Sender)
{
DBImage42->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage43cClick(TObject *Sender)
{
//DBImage43->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage44Click(TObject *Sender)
{
DBImage44->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage45Click(TObject *Sender)
{
DBImage45->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage46Click(TObject *Sender)
{
DBImage46->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage47Click(TObject *Sender)
{
DBImage47->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage48Click(TObject *Sender)
{
DBImage48->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage49Click(TObject *Sender)
{
DBImage49->Color=clYellow;
}
//---------------------------------------------------------------------------



void __fastcall TForm3::Button1Click(TObject *Sender)
{
ListBox1->Clear();
DBImage1->Color=clWindow;
DBImage2->Color=clWindow;
DBImage3->Color=clWindow;
DBImage4->Color=clWindow;
DBImage5->Color=clWindow;
DBImage6->Color=clWindow;
DBImage7->Color=clWindow;
DBImage8->Color=clWindow;
DBImage9->Color=clWindow;
DBImage10->Color=clWindow;
DBImage11->Color=clWindow;
DBImage12->Color=clWindow;
DBImage13->Color=clWindow;
DBImage14->Color=clWindow;
DBImage15->Color=clWindow;
DBImage16->Color=clWindow;
DBImage17->Color=clWindow;
DBImage18->Color=clWindow;
DBImage19->Color=clWindow;
DBImage20->Color=clWindow;
DBImage21->Color=clWindow;
DBImage22->Color=clWindow;
DBImage23->Color=clWindow;
DBImage24->Color=clWindow;
DBImage25->Color=clWindow;
DBImage26->Color=clWindow;
DBImage27->Color=clWindow;
DBImage28->Color=clWindow;
DBImage29->Color=clWindow;
DBImage30->Color=clWindow;
DBImage31->Color=clWindow;
DBImage32->Color=clWindow;
DBImage33->Color=clWindow;
DBImage34->Color=clWindow;
DBImage35->Color=clWindow;
DBImage36->Color=clWindow;
DBImage37->Color=clWindow;
DBImage38->Color=clWindow;
DBImage39->Color=clWindow;
DBImage40->Color=clWindow;
DBImage41->Color=clWindow;
DBImage42->Color=clWindow;
DBImage50->Color=clWindow;
DBImage44->Color=clWindow;
DBImage45->Color=clWindow;
DBImage46->Color=clWindow;
DBImage47->Color=clWindow;
DBImage48->Color=clWindow;
DBImage49->Color=clWindow;
Form1->Button4->Enabled=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage1Click(TObject *Sender)
{
DBImage1->Color=clYellow;        
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage43Click(TObject *Sender)
{
//DBImage43->Color=clYellow;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::DBImage50Click(TObject *Sender)
{
DBImage50->Color=clYellow;
}
//---------------------------------------------------------------------------

