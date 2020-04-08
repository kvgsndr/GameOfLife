//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("GameOfLife.cpp", Form1);
USEFORM("GameOfLifeForm2.cpp", Form2);
USEFORM("GameOfLifeMakeCellWindow.cpp", Form3);
USEFORM("GameOfLifeFormPoz.cpp", Form7);
USEFORM("FormPoz.cpp", Form5);
USEFORM("BGunit.cpp", Frame1); /* TFrame: File Type */
USEFORM("Unit6VG.cpp", Form6);
USEFORM("FreehandOptions.cpp", Form4);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TForm2), &Form2);
                 Application->CreateForm(__classid(TForm3), &Form3);
                 Application->CreateForm(__classid(TForm5), &Form5);
                 Application->CreateForm(__classid(TForm6), &Form6);
                 Application->CreateForm(__classid(TForm7), &Form7);
                 Application->CreateForm(__classid(TForm4), &Form4);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
