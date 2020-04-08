object Form5: TForm5
  Left = 922
  Top = 332
  AlphaBlend = True
  AlphaBlendValue = 173
  BorderIcons = []
  BorderStyle = bsDialog
  Caption = 'Elhelyez'#233's'
  ClientHeight = 96
  ClientWidth = 318
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 16
    Width = 7
    Height = 13
    Caption = 'X'
  end
  object Label2: TLabel
    Left = 8
    Top = 40
    Width = 7
    Height = 13
    Caption = 'Y'
  end
  object Button2: TButton
    Left = 8
    Top = 64
    Width = 129
    Height = 25
    Caption = 'Elfogad'
    ModalResult = 1
    TabOrder = 0
    OnClick = Button2Click
  end
  object ScrollBar1: TScrollBar
    Left = 32
    Top = 32
    Width = 217
    Height = 25
    LargeChange = 10
    Min = 48
    PageSize = 0
    Position = 48
    TabOrder = 1
    OnChange = ScrollBar1Change
  end
  object ScrollBar2: TScrollBar
    Left = 32
    Top = 8
    Width = 217
    Height = 25
    LargeChange = 10
    Min = 52
    PageSize = 0
    Position = 52
    TabOrder = 2
    OnChange = ScrollBar2Change
  end
  object Button1: TButton
    Left = 144
    Top = 64
    Width = 105
    Height = 25
    Caption = 'Elvet'
    ModalResult = 2
    TabOrder = 3
  end
  object Edit1: TEdit
    Left = 256
    Top = 8
    Width = 49
    Height = 21
    TabOrder = 4
    OnChange = Edit1Change
  end
  object Edit2: TEdit
    Left = 256
    Top = 32
    Width = 49
    Height = 21
    TabOrder = 5
    OnChange = Edit2Change
  end
end
