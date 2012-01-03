object frmFormulListesi: TfrmFormulListesi
  Left = 575
  Top = 141
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Formül Listesi'
  ClientHeight = 364
  ClientWidth = 330
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
    Width = 329
    Height = 361
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 16
      Width = 313
      Height = 337
      DataSource = dsrcLIST
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
          FieldName = 'OTOMATIK_SAYI'
          Title.Alignment = taCenter
          Title.Caption = 'Kayýt No'
          Width = 50
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'MNO'
          Title.Alignment = taCenter
          Title.Caption = 'Müþteri No'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'TARIH'
          Title.Alignment = taCenter
          Title.Caption = 'Tarih'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'BEKLEMESURESI'
          Title.Alignment = taCenter
          Title.Caption = 'B. Süresi'
          Width = 100
          Visible = True
        end>
    end
  end
  object dsrcLIST: TDataSource
    DataSet = queryLIST
    Left = 16
    Top = 320
  end
  object queryLIST: TQuery
    Active = True
    DatabaseName = 'KUAFOR'
    SQL.Strings = (
      'SELECT * FROM FORMULANA'
      'ORDER BY OTOMATIK_SAYI DESC')
    Left = 48
    Top = 320
    object queryLISTOTOMATIK_SAYI: TIntegerField
      FieldName = 'OTOMATIK_SAYI'
      Origin = 'KUAFOR."FORMULANA.DB".OTOMATIK_SAYI'
    end
    object queryLISTMNO: TStringField
      FieldName = 'MNO'
      Origin = 'KUAFOR."FORMULANA.DB".MNO'
      Size = 15
    end
    object queryLISTTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'KUAFOR."FORMULANA.DB".TARIH'
    end
    object queryLISTKAYITNO: TStringField
      FieldName = 'KAYITNO'
      Origin = 'KUAFOR."FORMULANA.DB".KAYITNO'
    end
    object queryLISTBEKLEMESURESI: TStringField
      FieldName = 'BEKLEMESURESI'
      Origin = 'KUAFOR."FORMULANA.DB".BEKLEMESURESI'
      Size = 25
    end
  end
end
