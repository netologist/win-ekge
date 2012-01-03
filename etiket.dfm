object frmEtiket: TfrmEtiket
  Left = 194
  Top = 112
  BorderIcons = [biSystemMenu]
  BorderStyle = bsDialog
  Caption = 'Adres - Etiket  Raporu'
  ClientHeight = 595
  ClientWidth = 798
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object QuickRep1: TQuickRep
    Left = 0
    Top = 0
    Width = 794
    Height = 1123
    Frame.Color = clBlack
    Frame.DrawTop = False
    Frame.DrawBottom = False
    Frame.DrawLeft = False
    Frame.DrawRight = False
    DataSet = tblMUSTERI
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Arial'
    Font.Style = []
    Functions.Strings = (
      'PAGENUMBER'
      'COLUMNNUMBER'
      'REPORTTITLE')
    Functions.DATA = (
      '0'
      '0'
      #39#39)
    Options = [FirstPageHeader, LastPageFooter]
    Page.Columns = 1
    Page.Orientation = poPortrait
    Page.PaperSize = A4
    Page.Values = (
      100
      2970
      100
      2100
      100
      100
      0)
    PrinterSettings.Copies = 1
    PrinterSettings.Duplex = False
    PrinterSettings.FirstPage = 0
    PrinterSettings.LastPage = 0
    PrinterSettings.OutputBin = Auto
    PrintIfEmpty = True
    SnapToGrid = True
    Units = MM
    Zoom = 100
    object DetailBand1: TQRBand
      Left = 38
      Top = 38
      Width = 718
      Height = 123
      Frame.Color = clBlack
      Frame.DrawTop = False
      Frame.DrawBottom = False
      Frame.DrawLeft = False
      Frame.DrawRight = False
      AlignToBottom = False
      Color = clWhite
      ForceNewColumn = False
      ForceNewPage = False
      Size.Values = (
        325.4375
        1899.70833333333)
      BandType = rbDetail
      object QRLabel1: TQRLabel
        Left = 24
        Top = 16
        Width = 44
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          63.5
          42.3333333333333
          116.416666666667)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'SAYIN,'
        Color = clWhite
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'Arial'
        Font.Style = [fsBold]
        ParentFont = False
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel2: TQRLabel
        Left = 24
        Top = 48
        Width = 58
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          63.5
          127
          153.458333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'QRLabel2'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
      object QRLabel3: TQRLabel
        Left = 280
        Top = 40
        Width = 58
        Height = 17
        Frame.Color = clBlack
        Frame.DrawTop = False
        Frame.DrawBottom = False
        Frame.DrawLeft = False
        Frame.DrawRight = False
        Size.Values = (
          44.9791666666667
          740.833333333333
          105.833333333333
          153.458333333333)
        Alignment = taLeftJustify
        AlignToBand = False
        AutoSize = True
        AutoStretch = False
        Caption = 'QRLabel3'
        Color = clWhite
        Transparent = False
        WordWrap = True
        FontSize = 10
      end
    end
  end
  object tblMUSTERI: TTable
    Active = True
    DatabaseName = 'KUAFOR'
    TableName = 'musteri.DB'
    Left = 120
    Top = 192
    object tblMUSTERIKARTNO: TStringField
      FieldName = 'KARTNO'
      Size = 15
    end
    object tblMUSTERITARIH: TDateField
      FieldName = 'TARIH'
    end
    object tblMUSTERIM_ADI: TStringField
      FieldName = 'M_ADI'
      Size = 25
    end
    object tblMUSTERIM_SOYADI: TStringField
      FieldName = 'M_SOYADI'
      Size = 25
    end
    object tblMUSTERIACIKLAMA: TMemoField
      FieldName = 'ACIKLAMA'
      BlobType = ftMemo
      Size = 100
    end
    object tblMUSTERIEV_ADRESI1: TStringField
      FieldName = 'EV_ADRESI1'
      Size = 60
    end
    object tblMUSTERIEV_ADRESI2: TStringField
      FieldName = 'EV_ADRESI2'
      Size = 60
    end
    object tblMUSTERIIS_ADRESI1: TStringField
      FieldName = 'IS_ADRESI1'
      Size = 60
    end
    object tblMUSTERIIS_ADRESI2: TStringField
      FieldName = 'IS_ADRESI2'
      Size = 60
    end
    object tblMUSTERIEV_TEL: TStringField
      FieldName = 'EV_TEL'
      Size = 25
    end
    object tblMUSTERIIS_TEL: TStringField
      FieldName = 'IS_TEL'
      Size = 25
    end
    object tblMUSTERICEP_TEL: TStringField
      FieldName = 'CEP_TEL'
      Size = 25
    end
    object tblMUSTERIE_MAIL: TStringField
      FieldName = 'E_MAIL'
      Size = 50
    end
    object tblMUSTERIRESIM: TGraphicField
      FieldName = 'RESIM'
      BlobType = ftGraphic
      Size = 2
    end
    object tblMUSTERIDOGUM_TARIHI: TDateField
      FieldName = 'DOGUM_TARIHI'
    end
    object tblMUSTERIKUAFOR_ADI: TStringField
      FieldName = 'KUAFOR_ADI'
      Size = 35
    end
    object tblMUSTERIANA_RENGI: TStringField
      FieldName = 'ANA_RENGI'
      Size = 15
    end
    object tblMUSTERISAC_ORANI: TFloatField
      FieldName = 'SAC_ORANI'
    end
    object tblMUSTERIDOGAL: TBooleanField
      FieldName = 'DOGAL'
    end
    object tblMUSTERIBOYALI: TBooleanField
      FieldName = 'BOYALI'
    end
    object tblMUSTERIPERMALI: TBooleanField
      FieldName = 'PERMALI'
    end
    object tblMUSTERIROFLE: TBooleanField
      FieldName = 'ROFLE'
    end
    object tblMUSTERIDT: TStringField
      FieldName = 'DT'
    end
    object tblMUSTERIDURUM: TStringField
      FieldName = 'DURUM'
      Size = 5
    end
    object tblMUSTERISAC_TIPI: TStringField
      FieldName = 'SAC_TIPI'
      Size = 5
    end
    object tblMUSTERIKANGRUBU: TStringField
      FieldName = 'KANGRUBU'
      Size = 10
    end
    object tblMUSTERIMESLEGI: TStringField
      FieldName = 'MESLEGI'
      Size = 25
    end
    object tblMUSTERIKURU: TStringField
      FieldName = 'KURU'
    end
    object tblMUSTERIKARMA: TStringField
      FieldName = 'KARMA'
    end
    object tblMUSTERIAKNELI: TStringField
      FieldName = 'AKNELI'
    end
    object tblMUSTERIHASSAS: TStringField
      FieldName = 'HASSAS'
    end
    object tblMUSTERIYAGLI: TStringField
      FieldName = 'YAGLI'
    end
    object tblMUSTERITURGOR: TStringField
      FieldName = 'TURGOR'
    end
    object tblMUSTERIKUPEROZ: TStringField
      FieldName = 'KUPEROZ'
    end
    object tblMUSTERINEMORANI: TStringField
      FieldName = 'NEMORANI'
    end
    object tblMUSTERIPIGMENTASYON: TStringField
      FieldName = 'PIGMENTASYON'
    end
    object tblMUSTERIEGZAMA: TStringField
      FieldName = 'EGZAMA'
    end
    object tblMUSTERIYUZFORMU: TStringField
      FieldName = 'YUZFORMU'
    end
    object tblMUSTERIELASTIKIYET: TStringField
      FieldName = 'ELASTIKIYET'
    end
    object tblMUSTERIKALINLIK: TStringField
      FieldName = 'KALINLIK'
    end
    object tblMUSTERIKIRISIKLIK: TStringField
      FieldName = 'KIRISIKLIK'
    end
    object tblMUSTERITERAPIST: TStringField
      FieldName = 'TERAPIST'
      Size = 25
    end
  end
end
