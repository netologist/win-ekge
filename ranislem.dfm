object frmRadevuIslem: TfrmRadevuIslem
  Left = 549
  Top = 99
  BorderStyle = bsDialog
  Caption = 'Radevu Ýþlem Giriþi'
  ClientHeight = 441
  ClientWidth = 337
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 32
    Width = 337
    Height = 409
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 16
      Width = 320
      Height = 385
      DataSource = DataSource1
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'ISLEM KODU'
          Title.Alignment = taCenter
          Title.Caption = 'Ýþlem Kodu'
          Width = 75
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ISLEM TANIMI'
          Title.Alignment = taCenter
          Title.Caption = 'Açýklama'
          Width = 209
          Visible = True
        end>
    end
  end
  object DBNavigator1: TDBNavigator
    Left = 3
    Top = 0
    Width = 330
    Height = 33
    DataSource = DataSource1
    TabOrder = 1
  end
  object DataSource1: TDataSource
    DataSet = Table1
    Left = 448
    Top = 64
  end
  object Table1: TTable
    Active = True
    DatabaseName = 'KUAFOR'
    TableName = 'RANISLEM.db'
    Left = 504
    Top = 64
  end
end
