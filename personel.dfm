object frmPersonel: TfrmPersonel
  Left = 384
  Top = 355
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Personel Giriþi'
  ClientHeight = 305
  ClientWidth = 362
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 32
    Width = 361
    Height = 273
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 16
      Width = 345
      Height = 249
      DataSource = dsrcPERSON
      TabOrder = 0
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
          FieldName = 'PERSONEL_ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Personel Adý'
          Width = 160
          Visible = True
        end>
    end
  end
  object DBNavigator1: TDBNavigator
    Left = 0
    Top = 0
    Width = 360
    Height = 33
    DataSource = dsrcPERSON
    TabOrder = 1
  end
  object dsrcPERSON: TDataSource
    DataSet = tblPERSON
    Left = 416
    Top = 8
  end
  object tblPERSON: TTable
    Active = True
    DatabaseName = 'KUAFOR'
    TableName = 'PERSONEL.db'
    Left = 384
    Top = 8
  end
end
