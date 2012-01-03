object frmStokListesi: TfrmStokListesi
  Left = 550
  Top = 191
  BorderStyle = bsDialog
  Caption = 'Stok Listesi'
  ClientHeight = 241
  ClientWidth = 260
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnKeyPress = FormKeyPress
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox2: TGroupBox
    Left = 3
    Top = 0
    Width = 257
    Height = 241
    TabOrder = 0
    object Label5: TLabel
      Left = 8
      Top = 16
      Width = 43
      Height = 13
      Caption = 'Kod / Ad'
    end
    object DBGrid3: TDBGrid
      Left = 8
      Top = 40
      Width = 241
      Height = 193
      DataSource = dsrcSTOKLISTE
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgMultiSelect]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnCellClick = DBGrid3CellClick
      OnKeyPress = DBGrid3KeyPress
      Columns = <
        item
          Expanded = False
          FieldName = 'URUNKODU'
          Title.Alignment = taCenter
          Title.Caption = 'Ürün Kodu'
          Width = 75
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'URUNADI'
          Title.Alignment = taCenter
          Title.Caption = 'Ürün Adý'
          Width = 130
          Visible = True
        end>
    end
    object ARAMA_Edit: TEdit
      Left = 64
      Top = 16
      Width = 185
      Height = 21
      CharCase = ecUpperCase
      Font.Charset = TURKISH_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnChange = ARAMA_EditChange
      OnKeyPress = ARAMA_EditKeyPress
    end
  end
  object AYAR_Edit: TEdit
    Left = 336
    Top = 16
    Width = 25
    Height = 21
    TabOrder = 1
  end
  object querySTOKLISTE: TQuery
    Active = True
    DatabaseName = 'KUAFOR'
    SQL.Strings = (
      'SELECT URUNKODU, URUNADI, FIYATI FROM STOKANA'
      
        'WHERE (URUNADI LIKE :URUNADI OR URUNKODU LIKE :URUNKODU) AND DEP' +
        'ARTMAN=:DEPARTMAN')
    Left = 272
    Top = 16
    ParamData = <
      item
        DataType = ftString
        Name = 'URUNADI'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'URUNKODU'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end>
    object querySTOKLISTEURUNKODU: TStringField
      FieldName = 'URUNKODU'
      Origin = 'BM."STOKANA.DB".URUNKODU'
      Size = 15
    end
    object querySTOKLISTEURUNADI: TStringField
      FieldName = 'URUNADI'
      Origin = 'BM."STOKANA.DB".URUNADI'
      Size = 30
    end
    object querySTOKLISTEFIYATI: TCurrencyField
      FieldName = 'FIYATI'
      Origin = 'BM."STOKANA.DB".FIYATI'
    end
  end
  object dsrcSTOKLISTE: TDataSource
    DataSet = querySTOKLISTE
    Left = 304
    Top = 16
  end
end
