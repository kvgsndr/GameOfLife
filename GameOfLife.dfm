object Form1: TForm1
  Left = 564
  Top = 186
  AlphaBlend = True
  AlphaBlendValue = 173
  Anchors = [akLeft, akTop, akRight, akBottom]
  BorderStyle = bsDialog
  Caption = 'GameOfLife [Szl'#225'k'#243' Szil'#225'rd]'
  ClientHeight = 498
  ClientWidth = 415
  Color = clBtnFace
  TransparentColorValue = clTeal
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PrintScale = poNone
  DesignSize = (
    415
    498)
  PixelsPerInch = 96
  TextHeight = 13
  object CellBack: TShape
    Left = 8
    Top = 11
    Width = 401
    Height = 401
    Anchors = [akLeft, akTop, akRight, akBottom]
  end
  object Label1: TLabel
    Left = 40
    Top = 0
    Width = 18
    Height = 13
    Caption = '400'
  end
  object Label2: TLabel
    Left = 8
    Top = 0
    Width = 30
    Height = 13
    Caption = 'M'#233'ret:'
  end
  object Label3: TLabel
    Left = 88
    Top = 0
    Width = 31
    Height = 13
    Caption = 'Ciklus:'
  end
  object Label4: TLabel
    Left = 128
    Top = 0
    Width = 6
    Height = 13
    Caption = '0'
  end
  object Label5: TLabel
    Left = 160
    Top = 0
    Width = 65
    Height = 13
    Caption = 'SejtekSz'#225'ma:'
  end
  object Label6: TLabel
    Left = 232
    Top = 0
    Width = 6
    Height = 13
    Caption = '0'
  end
  object CellBox: TImage
    Left = 8
    Top = 11
    Width = 401
    Height = 401
    Anchors = [akLeft, akTop, akRight, akBottom]
    OnClick = FHD
    OnDragOver = FHDF
    OnMouseDown = FFStart
    OnMouseMove = FHDFFoly
    OnMouseUp = FFEnd
  end
  object PozCenter: TImage
    Left = 208
    Top = 212
    Width = 10
    Height = 10
    Picture.Data = {
      07544269746D617076010000424D760100000000000036000000280000000A00
      00000A000000010018000000000040010000120B0000120B0000000000000000
      000000632800993D00993D00993D00993D00993D00993D00993D00993D003F19
      000000B54800FF6600FF6600FF6600FF6600FF6600FF6600FF6600FF6600692A
      000000B54800FF6600FF6600FF6600FF6600FF6600FF6600FF6600FF6600692A
      000000B54800FF6600FF6600FF6600FF6600FF6600FF6600FF6600FF6600692A
      000000B54800FF6600FF6600FF6600FF6600FF6600FF6600FF6600FF6600692A
      000000B54800FF6600FF6600FF6600FF6600FF6600FF6600FF6600FF6600692A
      000000B54800FF6600FF6600FF6600FF6600FF6600FF6600FF6600FF6600692A
      000000B54800FF6600FF6600FF6600FF6600FF6600FF6600FF6600FF6600692A
      000000B54800FF6600FF6600FF6600FF6600FF6600FF6600FF6600FF6600692A
      000000421A006629006629006629006629006629006629006629006629002A11
      0000}
    Visible = False
  end
  object Label7: TLabel
    Left = 8
    Top = 456
    Width = 50
    Height = 13
    Anchors = [akLeft, akBottom]
    Caption = 'Sebess'#233'g:'
    Enabled = False
  end
  object TimeWarp: TTrackBar
    Left = 56
    Top = 448
    Width = 265
    Height = 41
    Anchors = [akLeft, akRight, akBottom]
    Enabled = False
    Max = 2000
    Min = 1
    Orientation = trHorizontal
    Frequency = 60
    Position = 1000
    SelEnd = 0
    SelStart = 0
    TabOrder = 0
    TickMarks = tmBoth
    TickStyle = tsAuto
    OnChange = TimeWarpChange
  end
  object Button2: TButton
    Left = 8
    Top = 416
    Width = 97
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = 'M'#233'retV'#225'ltoztat'#225's'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button4: TButton
    Left = 200
    Top = 416
    Width = 73
    Height = 25
    Anchors = [akLeft, akBottom]
    Caption = 'Elhelyez'#233's'
    Enabled = False
    TabOrder = 2
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 360
    Top = 416
    Width = 49
    Height = 25
    Anchors = [akRight, akBottom]
    Caption = 'T'#246'rl'#233's'
    TabOrder = 3
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 272
    Top = 416
    Width = 89
    Height = 25
    Anchors = [akLeft, akRight, akBottom]
    Caption = 'K'#233'szenl'#233'tbe'
    Enabled = False
    TabOrder = 4
    OnClick = Button6Click
  end
  object Button1: TCheckBox
    Left = 320
    Top = 440
    Width = 89
    Height = 49
    Anchors = [akRight, akBottom]
    Caption = 'Ind'#237't'#225's'
    Enabled = False
    TabOrder = 5
    OnClick = Button1Click
  end
  object Button3: TComboBox
    Left = 104
    Top = 416
    Width = 97
    Height = 21
    Anchors = [akLeft, akBottom]
    ItemHeight = 13
    TabOrder = 6
    OnChange = Button3Change
    Items.Strings = (
      'Prec'#237'z Sejtkol'#243'nia'
      'Szabadk'#233'zzel')
  end
  object Symbiosis: TTimer
    OnTimer = SymbiosisTimer
    Left = 376
    Top = 440
  end
end
