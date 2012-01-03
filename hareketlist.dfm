object frmHareketListesi: TfrmHareketListesi
  Left = 488
  Top = 143
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Hareket Listesi'
  ClientHeight = 281
  ClientWidth = 297
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
    Top = 56
    Width = 297
    Height = 225
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 16
      Width = 281
      Height = 201
      DataSource = dsrcHAREKET
      Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      OnCellClick = DBGrid1CellClick
      OnKeyPress = DBGrid1KeyPress
      Columns = <
        item
          Expanded = False
          FieldName = 'TARIH'
          Title.Alignment = taCenter
          Title.Caption = 'Tarih'
          Width = 65
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'FATURANO'
          Title.Alignment = taCenter
          Title.Caption = 'Fatura No'
          Width = 60
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'MUSTERIADI'
          Title.Alignment = taCenter
          Title.Caption = 'Firma Adý'
          Width = 120
          Visible = True
        end>
    end
  end
  object GroupBox2: TGroupBox
    Left = 0
    Top = 0
    Width = 297
    Height = 65
    TabOrder = 1
    object Label2: TLabel
      Left = 8
      Top = 16
      Width = 49
      Height = 13
      AutoSize = False
      Caption = 'Fatura No'
    end
    object Firma_Edit: TEdit
      Left = 8
      Top = 32
      Width = 281
      Height = 21
      CharCase = ecUpperCase
      TabOrder = 0
      OnChange = Firma_EditChange
    end
  end
  object dsrcHAREKET: TDataSource
    DataSet = queryHAREKET
    Left = 304
  end
  object queryHAREKET: TQuery
    DatabaseName = 'KUAFOR'
    SQL.Strings = (
      'SELECT * FROM STHARANA'
      'WHERE FATURANO LIKE :FATURA_NO  AND'
      '      KAYIT_TURU=:HAREKET_TURU AND'
      '      DEPARTMAN=:DEPARTMAN'
      ''
      ' ')
    Left = 336
    ParamData = <
      item
        DataType = ftString
        Name = 'FATURA_NO'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'HAREKET_TURU'
        ParamType = ptUnknown
      end
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end>
    object queryHAREKETFATURANO: TStringField
      FieldName = 'FATURANO'
      Origin = 'KUAFOR."stharana.DB".FATURANO'
    end
    object queryHAREKETMUSTERIADI: TStringField
      FieldName = 'MUSTERIADI'
      Origin = 'KUAFOR."stharana.DB".MUSTERIADI'
      Size = 50
    end
    object queryHAREKETTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'KUAFOR."stharana.DB".TARIH'
    end
    object queryHAREKETACIKLAMA: TMemoField
      FieldName = 'ACIKLAMA'
      Origin = 'KUAFOR."stharana.DB".ACIKLAMA'
      BlobType = ftMemo
      Size = 10
    end
    object queryHAREKETDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Origin = 'KUAFOR."stharana.DB".DEPARTMAN'
      Size = 35
    end
    object queryHAREKETKAYIT_TURU: TStringField
      FieldName = 'KAYIT_TURU'
      Origin = 'KUAFOR."stharana.DB".KAYIT_TURU'
      Size = 25
    end
    object queryHAREKETREFERANS: TStringField
      FieldName = 'REFERANS'
      Origin = 'KUAFOR."stharana.DB".REFERANS'
    end
  end
end
