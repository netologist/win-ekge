object frmRandevuGirisListesi: TfrmRandevuGirisListesi
  Left = 481
  Top = 190
  BorderStyle = bsDialog
  Caption = 'Randevu Giriþ Listesi'
  ClientHeight = 210
  ClientWidth = 354
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
    Width = 353
    Height = 209
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 16
      Width = 337
      Height = 185
      DataSource = DataSource1
      Options = [dgTitles, dgIndicator, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
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
          FieldName = 'RANDEVU_NO'
          Title.Alignment = taCenter
          Title.Caption = 'No'
          Width = 40
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'TARIH'
          Title.Alignment = taCenter
          Title.Caption = 'Tarih'
          Width = 60
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'SAAT'
          Title.Alignment = taCenter
          Title.Caption = 'Saat'
          Width = 55
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'ISLEM'
          Title.Alignment = taCenter
          Title.Caption = 'Ýþlem'
          Width = 143
          Visible = True
        end>
    end
  end
  object DataSource1: TDataSource
    DataSet = Query1
    Left = 88
    Top = 128
  end
  object Query1: TQuery
    Active = True
    DatabaseName = 'KUAFOR'
    SQL.Strings = (
      'SELECT * FROM RANDEVU'
      'ORDER BY RANDEVU_NO DESC')
    Left = 120
    Top = 128
    object Query1RANDEVU_NO: TIntegerField
      FieldName = 'RANDEVU_NO'
      Origin = 'KUAFOR."randevu.DB".RANDEVU_NO'
    end
    object Query1ISLEM: TStringField
      FieldName = 'ISLEM'
      Origin = 'KUAFOR."randevu.DB".ISLEM'
      Size = 35
    end
    object Query1MNO: TStringField
      FieldName = 'MNO'
      Origin = 'KUAFOR."randevu.DB".MNO'
      Size = 35
    end
    object Query1PERSONEL: TStringField
      FieldName = 'PERSONEL'
      Origin = 'KUAFOR."randevu.DB".PERSONEL'
      Size = 35
    end
    object Query1TARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'KUAFOR."randevu.DB".TARIH'
    end
    object Query1SAAT: TTimeField
      FieldName = 'SAAT'
      Origin = 'KUAFOR."randevu.DB".SAAT'
    end
    object Query1RANDEVU_DURUMU: TStringField
      FieldName = 'RANDEVU_DURUMU'
      Origin = 'KUAFOR."randevu.DB".RANDEVU_DURUMU'
    end
    object Query1OZEL_NOT: TMemoField
      FieldName = 'OZEL_NOT'
      Origin = 'KUAFOR."randevu.DB".OZEL_NOT'
      BlobType = ftMemo
      Size = 240
    end
  end
end
