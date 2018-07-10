//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
       int r,g,b;
        float x,y,z;

        for(z=5; z<10; z++){
                for(x=5.*z; x<ClientWidth-5.*z; x++){
                        for(y=5.*z; y<ClientHeight-5.*z; y++){
                                r=51*z;
                                g=0.; //255*sin(x/623.*z)-255*sin(y/623.*z);
                                b=0;
                                Canvas->Pixels[x][y]=(TColor)RGB(r,g,b);
                        }
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Refresh();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
        int r,g,b;
        float x,y;
        TColor kolor;
        for(x=0; x<ClientWidth; x++){
                for(y=0; y<ClientHeight; y++){
                        r = 255. * sin((x+y)/27.);
                        g = 255. * sin(x/23.) - 255. *sin(y/17.);
                        b=(r+g);
                        kolor = (TColor)RGB(r,g,b);
                        Canvas -> Pixels[x][y] = kolor;
                }
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
        int r,g,b;
        float x,y,z;
        int one, two;
        TColor kolor;

        for(int zx = 1; zx < 4; zx++){

                one = 100;
                two = 0;

            for(z = 1; z < 4; z++){
                for(x = two; x<one+two /2; x++){
                        for(y=one*(zx -1); y<one*zx; y++){

                           if(x < (one + two)-(one/2)){
                                r = 20*z*zx;
                                g = r/z + zx*zx;
                                b = g+r;
                                kolor = (TColor)RGB(r,g,b);
                                Canvas -> Pixels[x][y] = kolor;
                           }else{
                                r = 40*z*zx;
                                g = r*z + zx*zx;
                                b = g/2.+r;
                                kolor = (TColor)RGB(r,g,b);
                                Canvas -> Pixels[x][y] = kolor;
                           }
                        }

                }

                two += one;
             }

        }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
       int r,g,b;
        float x,y,z;
        int one, two;
        TColor kolor;

        for(int zx = 1; zx < 5; zx++){

                one = 100;
                two = 0;

            for(z = 1; z < 5; z++){
                for(x = two; x<one+two; x++){
                        for(y=one*(zx -1); y<one*zx; y++){

                           if(x < (one + two)-(one/2)){
                                r = 10*z*zx;
                                g = r/z + zx*zx;
                                b = g+r;
                                kolor = (TColor)RGB(r,g,b);
                                Canvas -> Pixels[x][y] = kolor;
                           }else{
                                r = 20*z*zx;
                                g = r*z + zx*zx;
                                b = g/2.+r;
                                kolor = (TColor)RGB(r,g,b);
                                Canvas -> Pixels[x][y] = kolor;
                           }
                        }

                }

                two += one;
             }

        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::White1Click(TObject *Sender)
{
        Form1 -> Color = clWhite;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Blue1Click(TObject *Sender)
{
        Form1 -> Color = clBlue;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Red1Click(TObject *Sender)
{
        Form1 -> Color = clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Blue2Click(TObject *Sender)
{
           Label6 -> Color = clBlue;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Green1Click(TObject *Sender)
{
        Label6 -> Color = clGreen;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::White2Click(TObject *Sender)
{
        Form1 -> Color = clWhite;        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Gray1Click(TObject *Sender)
{
        Form1 -> Color = clGray;        
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormKeyPress(TObject *Sender, char &Key)
{
           if(Key == VK_ESCAPE)
                Close();     
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
      MessageBox(0,"Program changes form's color","Message",0);
}
//---------------------------------------------------------------------------

