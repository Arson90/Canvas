//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TButton *Button1;
        TButton *Button2;
        TLabel *Label1;
        TLabel *Label2;
        TButton *Button3;
        TLabel *Label3;
        TButton *Button4;
        TLabel *Label4;
        TButton *Button5;
        TLabel *Label5;
        TMainMenu *MainMenu1;
        TMenuItem *Color1;
        TMenuItem *White1;
        TMenuItem *Blue1;
        TMenuItem *Red1;
        TMenuItem *Help1;
        TLabel *Label6;
        TPopupMenu *PopupMenu1;
        TMenuItem *Blue2;
        TMenuItem *Green1;
        TPopupMenu *PopupMenu2;
        TMenuItem *White2;
        TMenuItem *Gray1;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
        void __fastcall White1Click(TObject *Sender);
        void __fastcall Blue1Click(TObject *Sender);
        void __fastcall Red1Click(TObject *Sender);
        void __fastcall Blue2Click(TObject *Sender);
        void __fastcall Green1Click(TObject *Sender);
        void __fastcall White2Click(TObject *Sender);
        void __fastcall Gray1Click(TObject *Sender);
        void __fastcall FormKeyPress(TObject *Sender, char &Key);
        void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
