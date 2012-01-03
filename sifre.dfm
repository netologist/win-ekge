object frmSifre: TfrmSifre
  Left = 232
  Top = 541
  BorderIcons = [biSystemMenu]
  BorderStyle = bsSingle
  Caption = 'Sistem Giriþi'
  ClientHeight = 119
  ClientWidth = 225
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
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 225
    Height = 81
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 16
      Width = 80
      Height = 19
      Caption = 'Kullanýcý Adý'
      Color = clInactiveBorder
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBtnText
      Font.Height = -13
      Font.Name = 'Comic Sans MS'
      Font.Style = [fsBold]
      ParentColor = False
      ParentFont = False
    end
    object Label2: TLabel
      Left = 48
      Top = 48
      Width = 38
      Height = 19
      Caption = 'Parola'
      Color = clInactiveBorder
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBtnText
      Font.Height = -13
      Font.Name = 'Comic Sans MS'
      Font.Style = [fsBold]
      ParentColor = False
      ParentFont = False
    end
    object Image1: TImage
      Left = 8
      Top = 41
      Width = 32
      Height = 32
      AutoSize = True
      Center = True
      Picture.Data = {
        055449636F6E0000010002002020100000000000E80200002600000010101000
        00000000280100000E0300002800000020000000400000000100040000000000
        8002000000000000000000000000000000000000000000000000800000800000
        0080800080000000800080008080000080808000C0C0C0000000FF0000FF0000
        00FFFF00FF000000FF00FF00FFFF0000FFFFFF00000000000000000000000000
        00000000000000000000FFF888700000000000000000000000FFF00000F87000
        00000000000000000FF00008000087000000000000000000FF00000800000870
        000000000000000FF00F000000080087000000000000000FF000F000008000F8
        00000000000000FF000000887000000F70000000000000FF00000FF88700000F
        80000000000000FF0FF00FFF8800880F80000000000000FF00000FFFF800000F
        80000000000000FF000000FFF000000FF0000000000000FFF000F00000F000FF
        F0000000000000FFF00F0000000F00FFF00000000000000FFF00000F00000FFF
        000000000000000FFFF0000F0000FFFF0000000000000000FFFFF00000FFFFF0
        00000000000000000FFFFFF0FFFFFF00000000000000000000FFFF000FFFF000
        00000000000000000000FFFFFFF0080000000000000000000000000000000800
        00000000000000000000000000000F0000000000000000000000000000000F00
        00000000000000000F00000000000F0000000000000000000000000000000F00
        00000000000000000F00000000000F0000000000000000000F00000000000F00
        00000000000000000FF000000000FF00000000000000000000FF0000000FF000
        0000000000000000000FFF000FFF0000000000000000000000000FFFFF000000
        0000000000000000000000000000000000000000FFF01FFFFFC007FFFF8003FF
        FF0001FFFE0000FFFC00007FFC00007FF800003FF800003FF800003FF800003F
        F800003FF800003FF800003FFC00007FFC00007FFE0000FFFF0001FFFF8001FF
        FFC001FFFFF011FFFFFFF1FFFF1FF1FFFF1FF1FFFF3FF1FFFF1FF1FFFF1FF1FF
        FF0FE1FFFF8383FFFFC007FFFFE00FFFFFF83FFF280000001000000020000000
        0100040000000000C00000000000000000000000000000000000000000000000
        00008000008000000080800080000000800080008080000080808000C0C0C000
        0000FF0000FF000000FFFF00FF000000FF00FF00FFFF0000FFFFFF0000000000
        0000000000000FFF770000000000FF000F700000000FF0F0F0F70000000F0008
        000F0000000F0F0F0F0F0000000F0000000F00000000F0F0F0F000000000FF00
        0FF00000000000F7F00000000000000000F000000000007000F0000000000F00
        00F0000000000F8008F00000000000FFFF0000000000000000000000F83F0000
        F01F0000E00F0000C0070000C0070000C0070000C0070000E00F0000E00F0000
        F00F0000FC0F0000F18F0000F18F0000F00F0000F81F0000FC3F0000}
    end
    object Edit1: TEdit
      Left = 96
      Top = 16
      Width = 121
      Height = 24
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnKeyPress = Edit1KeyPress
    end
    object Edit2: TEdit
      Left = 96
      Top = 48
      Width = 121
      Height = 24
      Color = clWhite
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clNavy
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      PasswordChar = '*'
      TabOrder = 1
    end
  end
  object BitBtn1: TBitBtn
    Left = 0
    Top = 85
    Width = 113
    Height = 33
    Caption = 'Tamam'
    TabOrder = 1
    OnClick = BitBtn1Click
    Kind = bkOK
  end
  object BitBtn2: TBitBtn
    Left = 112
    Top = 85
    Width = 113
    Height = 33
    Caption = 'Ýptal'
    TabOrder = 2
    OnClick = BitBtn2Click
    Kind = bkCancel
  end
  object queryPAROLA: TQuery
    Active = True
    DatabaseName = 'KUAFOR'
    Filtered = True
    FilterOptions = [foCaseInsensitive]
    SQL.Strings = (
      'SELECT * FROM PAROLA'
      'WHERE (KULLANICI_ADI=:KADI AND PAROLA1=:PAROLA)')
    Left = 272
    Top = 8
    ParamData = <
      item
        DataType = ftString
        Name = 'KADI'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'PAROLA'
        ParamType = ptUnknown
      end>
    object queryPAROLAKULLANICI_ADI: TStringField
      FieldName = 'KULLANICI_ADI'
      Origin = 'KUAFOR."PAROLA.DB".KULLANICI_ADI'
      Size = 25
    end
    object queryPAROLAPAROLA1: TStringField
      FieldName = 'PAROLA1'
      Origin = 'KUAFOR."PAROLA.DB".PAROLA1'
    end
    object queryPAROLAPAROLA2: TStringField
      FieldName = 'PAROLA2'
      Origin = 'KUAFOR."PAROLA.DB".PAROLA2'
    end
    object queryPAROLAIZIN: TBooleanField
      FieldName = 'IZIN'
      Origin = 'KUAFOR."PAROLA.DB".IZIN'
    end
  end
end
