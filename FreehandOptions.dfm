object Form4: TForm4
  Left = 868
  Top = 170
  AlphaBlend = True
  AlphaBlendValue = 173
  BorderStyle = bsDialog
  Caption = 'Szabadk'#233'z Be'#225'll'#237't'#225'sok'
  ClientHeight = 99
  ClientWidth = 254
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 104
    Top = 56
    Width = 30
    Height = 13
    Caption = 'M'#233'ret:'
  end
  object Label2: TLabel
    Left = 136
    Top = 56
    Width = 6
    Height = 13
    Caption = '1'
  end
  object RadioButton1: TRadioButton
    Left = 8
    Top = 16
    Width = 121
    Height = 25
    Caption = 'Egyenk'#233'nt'
    TabOrder = 0
  end
  object RadioButton2: TRadioButton
    Left = 8
    Top = 48
    Width = 89
    Height = 33
    Caption = 'Folyamatos'
    TabOrder = 1
  end
  object CheckBox1: TCheckBox
    Left = 136
    Top = 16
    Width = 97
    Height = 33
    Caption = 'T'#246'rl'#233's'
    TabOrder = 2
  end
  object SizeBar: TTrackBar
    Left = 152
    Top = 56
    Width = 65
    Height = 25
    Max = 3
    Min = 1
    Orientation = trHorizontal
    Frequency = 1
    Position = 1
    SelEnd = 0
    SelStart = 0
    TabOrder = 3
    ThumbLength = 10
    TickMarks = tmBottomRight
    TickStyle = tsAuto
    OnChange = SizeBarChange
  end
end
