object Form1: TForm1
  Left = 209
  Top = 190
  Width = 1044
  Height = 614
  Hint = 'Press Right Mouse Button'
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  KeyPreview = True
  Menu = MainMenu1
  OldCreateOrder = False
  PopupMenu = PopupMenu2
  ShowHint = True
  OnCreate = FormCreate
  OnKeyPress = FormKeyPress
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 192
    Top = 536
    Width = 27
    Height = 16
    Caption = 'Ad.3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 112
    Top = 536
    Width = 27
    Height = 16
    Caption = 'Ad.2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 32
    Top = 536
    Width = 27
    Height = 16
    Caption = 'Ad.1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 272
    Top = 536
    Width = 27
    Height = 16
    Caption = 'Ad.4'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 352
    Top = 536
    Width = 27
    Height = 16
    Caption = 'Ad.5'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 376
    Top = 232
    Width = 241
    Height = 24
    Caption = 'Press Right Mouse Button'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    PopupMenu = PopupMenu1
  end
  object Button1: TButton
    Left = 160
    Top = 504
    Width = 81
    Height = 33
    Caption = 'Draw2'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 80
    Top = 504
    Width = 81
    Height = 33
    Caption = 'Refresh'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 0
    Top = 504
    Width = 81
    Height = 33
    Caption = 'Draw1'
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 240
    Top = 504
    Width = 81
    Height = 33
    Caption = 'Draw3'
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 320
    Top = 504
    Width = 81
    Height = 33
    Caption = 'Draw4'
    TabOrder = 4
    OnClick = Button5Click
  end
  object MainMenu1: TMainMenu
    object Color1: TMenuItem
      Caption = 'Color'
      object White1: TMenuItem
        Caption = 'White'
        OnClick = White1Click
      end
      object Blue1: TMenuItem
        Caption = 'Blue'
        OnClick = Blue1Click
      end
      object Red1: TMenuItem
        Caption = 'Red'
        OnClick = Red1Click
      end
    end
    object Help1: TMenuItem
      Caption = 'Help'
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 480
    Top = 200
    object Blue2: TMenuItem
      Caption = 'Blue'
      OnClick = Blue2Click
    end
    object Green1: TMenuItem
      Caption = 'Green'
      OnClick = Green1Click
    end
  end
  object PopupMenu2: TPopupMenu
    Left = 32
    object White2: TMenuItem
      Caption = 'White'
      OnClick = White2Click
    end
    object Gray1: TMenuItem
      Caption = 'Gray'
      OnClick = Gray1Click
    end
  end
end
