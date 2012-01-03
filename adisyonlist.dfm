object frmAdisyonListesi: TfrmAdisyonListesi
  Left = 353
  Top = 219
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Adisyon Fiþ Listesi'
  ClientHeight = 273
  ClientWidth = 441
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 441
    Height = 273
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 16
      Width = 425
      Height = 249
      DataSource = DataSource1
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnCellClick = DBGrid1CellClick
      Columns = <
        item
          Expanded = False
          FieldName = 'TARIH'
          Title.Alignment = taCenter
          Title.Caption = 'Tarih'
          Width = 70
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ADISYONNO'
          Title.Alignment = taCenter
          Title.Caption = 'Fiþ No'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'MNO'
          Title.Alignment = taCenter
          Title.Caption = 'M. No'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'TOPLAM'
          Title.Alignment = taCenter
          Title.Caption = 'Toplam'
          Width = 100
          Visible = True
        end>
    end
  end
  object Query1: TQuery
    DatabaseName = 'KUAFOR'
    SQL.Strings = (
      'SELECT * FROM ADISANA'
      'WHERE DEPARTMAN=:DEPARTMAN')
    Left = 400
    Top = 232
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end>
    object Query1DEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'KUAFOR."ADISANA.DB".DEPARTMAN'
      Size = 35
    end
    object Query1ADISYONNO: TIntegerField
      FieldName = 'ADISYONNO'
      Origin = 'KUAFOR."ADISANA.DB".ADISYONNO'
    end
    object Query1TARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'KUAFOR."ADISANA.DB".TARIH'
    end
    object Query1TOPLAM: TCurrencyField
      FieldName = 'TOPLAM'
      Origin = 'KUAFOR."ADISANA.DB".TOPLAM'
    end
    object Query1MNO: TStringField
      FieldName = 'MNO'
      Origin = 'KUAFOR."ADISANA.DB".MNO'
      Size = 25
    end
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 368
    Top = 232
  end
end
