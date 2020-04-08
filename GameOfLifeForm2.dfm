object Form2: TForm2
  Left = 200
  Top = 691
  AlphaBlend = True
  AlphaBlendValue = 173
  BorderStyle = bsDialog
  Caption = #193'tm'#233'retez'#233's'
  ClientHeight = 47
  ClientWidth = 409
  Color = clBtnShadow
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  PixelsPerInch = 96
  TextHeight = 13
  object TrackBar1: TTrackBar
    Left = 0
    Top = 0
    Width = 409
    Height = 40
    Max = 1000
    Min = 350
    Orientation = trHorizontal
    PageSize = 10
    Frequency = 10
    Position = 400
    SelEnd = 0
    SelStart = 0
    TabOrder = 0
    TickMarks = tmTopLeft
    TickStyle = tsAuto
    OnChange = TrackBar1Change
  end
end
