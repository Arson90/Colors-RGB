//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
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
        Button1->Caption="Gold";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Form1->Color=clYellow;
        Button2->Visible=false;        
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
        Form1->Color=clMaroon;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
        Form1->Color=clRed;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
        Form1->Color=clPurple;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
        Form1->Color=clBlue;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
        Form1->Color=clGreen;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
        if(RadioGroup1->ItemIndex==0)
                Color=clRed;
        if(RadioGroup1->ItemIndex==1)
                Color=clGreen;
        if(RadioGroup1->ItemIndex==2)
                Color=clBlue;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1MouseMove(TObject *Sender,
      TShiftState Shift, int X, int Y)
{
        Form1->Color=clSilver;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::TrackBar1Change(TObject *Sender)
{
        Label9->Caption = AnsiString(TrackBar1->Position);
        Label10->Caption = AnsiString(TrackBar2->Position);
        Label11->Caption = AnsiString(TrackBar3->Position);
        Panel1->Color = RGB(TrackBar1->Position,TrackBar2->Position,TrackBar3->Position);
        Panel1->Caption = "("+Label9->Caption + ","+ Label10->Caption  +","+ Label11->Caption+")";

        if(TrackBar1->Position == 100)
                Color=clRed;

        if(TrackBar1->Position == 100 && TrackBar2->Position == 100 && TrackBar3->Position == 100 )
        {
                Label8->Caption = "RGB(100,100,100)";
                Label8->Visible = true;
        }
}
//---------------------------------------------------------------------------
