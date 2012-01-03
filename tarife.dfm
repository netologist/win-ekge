object frmTarife: TfrmTarife
  Left = 333
  Top = 348
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Fiyat Tarifeleri'
  ClientHeight = 401
  ClientWidth = 521
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
  object Group: TGroupBox
    Left = 0
    Top = 0
    Width = 521
    Height = 401
    TabOrder = 0
    object DBNavigator1: TDBNavigator
      Left = 8
      Top = 16
      Width = 500
      Height = 33
      DataSource = dsrcTARIFE
      TabOrder = 0
    end
    object DBGrid1: TDBGrid
      Left = 8
      Top = 56
      Width = 505
      Height = 337
      DataSource = dsrcTARIFE
      TabOrder = 1
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'MS Sans Serif'
      TitleFont.Style = []
      Columns = <
        item
          Expanded = False
          FieldName = 'DEPARTMAN'
          PickList.Strings = (
            '   SAÇ TASARIM MERKEZÝ'
            '   ESTETÝK MERKEZÝ')
          Title.Alignment = taCenter
          Title.Caption = 'Departman'
          Width = 150
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ACIKLAMA'
          Title.Alignment = taCenter
          Title.Caption = 'Hizmet Açýklamasý'
          Width = 170
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'FIYAT'
          Title.Alignment = taCenter
          Title.Caption = 'Fiyatý'
          Width = 140
          Visible = True
        end>
    end
  end
  object dsrcTARIFE: TDataSource
    DataSet = tblTARIFE
    Left = 448
    Top = 360
  end
  object tblTARIFE: TTable
    Active = True
    DatabaseName = 'KUAFOR'
    TableName = 'TARIFE.db'
    Left = 448
    Top = 328
    object tblTARIFEACIKLAMA: TStringField
      FieldName = 'ACIKLAMA'
      Size = 35
    end
    object tblTARIFEFIYAT: TCurrencyField
      FieldName = 'FIYAT'
    end
    object tblTARIFEDEPARTMAN: TStringField
      FieldName = 'DEPARTMAN'
      Size = 35
    end
  end
end
