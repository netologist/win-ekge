object frmMusteriListesi: TfrmMusteriListesi
  Left = 344
  Top = 322
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Müþteri Listesi'
  ClientHeight = 361
  ClientWidth = 490
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 0
    Top = 0
    Width = 489
    Height = 361
    TabOrder = 0
    object DBGrid1: TDBGrid
      Left = 8
      Top = 112
      Width = 473
      Height = 241
      DataSource = dsrcMUSTLIST
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
          FieldName = 'KARTNO'
          Title.Alignment = taCenter
          Title.Caption = 'Kart No'
          Width = 50
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'M_ADI'
          Title.Alignment = taCenter
          Title.Caption = 'Adý'
          Width = 148
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'M_SOYADI'
          Title.Alignment = taCenter
          Title.Caption = 'Soyadý'
          Width = 150
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'DOGUM_TARIHI'
          Title.Alignment = taCenter
          Title.Caption = 'Doðum Tarihi'
          Width = 85
          Visible = True
        end>
    end
    object MNO_Edit: TEdit
      Left = 104
      Top = 16
      Width = 217
      Height = 21
      TabOrder = 1
    end
    object MADI_Edit: TEdit
      Left = 104
      Top = 40
      Width = 217
      Height = 21
      TabOrder = 2
    end
    object MSOYADI_Edit: TEdit
      Left = 104
      Top = 64
      Width = 217
      Height = 21
      TabOrder = 3
    end
    object BitBtn1: TBitBtn
      Left = 400
      Top = 16
      Width = 81
      Height = 41
      Caption = 'Tamam'
      TabOrder = 4
      OnClick = BitBtn1Click
      Kind = bkOK
    end
    object BitBtn2: TBitBtn
      Left = 400
      Top = 64
      Width = 81
      Height = 41
      Caption = 'Ýptal'
      TabOrder = 5
      OnClick = BitBtn2Click
      Kind = bkCancel
    end
    object RadioButton1: TRadioButton
      Left = 8
      Top = 16
      Width = 81
      Height = 17
      Caption = 'Müþteri No'
      Checked = True
      TabOrder = 6
      TabStop = True
      OnClick = RadioButton1Click
    end
    object RadioButton2: TRadioButton
      Left = 8
      Top = 40
      Width = 89
      Height = 17
      Caption = 'Müþteri Adý'
      TabOrder = 7
      OnClick = RadioButton2Click
    end
    object RadioButton3: TRadioButton
      Left = 8
      Top = 64
      Width = 89
      Height = 17
      Caption = 'Müþteri Soyadý'
      TabOrder = 8
      OnClick = RadioButton3Click
    end
    object RadioButton4: TRadioButton
      Left = 8
      Top = 88
      Width = 89
      Height = 17
      Caption = 'Doðum Tarihi'
      TabOrder = 9
      OnClick = RadioButton4Click
    end
    object DT_Edit: TDateTimePicker
      Left = 104
      Top = 88
      Width = 217
      Height = 21
      CalAlignment = dtaLeft
      Date = 37037.5858197917
      Time = 37037.5858197917
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 10
    end
  end
  object Edit2: TEdit
    Left = 568
    Top = 8
    Width = 25
    Height = 21
    TabOrder = 1
    Text = 'Edit2'
  end
  object Animate: TAnimate
    Left = 328
    Top = 16
    Width = 65
    Height = 89
    Active = False
    CommonAVI = aviFindFile
    StopFrame = 23
  end
  object dsrcMUSTLIST: TDataSource
    DataSet = queryMUSTLIST
    Left = 528
    Top = 8
  end
  object queryMUSTLIST: TTable
    Active = True
    DatabaseName = 'KUAFOR'
    TableName = 'musteri.DB'
    Left = 496
    Top = 8
    object queryMUSTLISTKARTNO: TStringField
      FieldName = 'KARTNO'
      Size = 15
    end
    object queryMUSTLISTTARIH: TDateField
      FieldName = 'TARIH'
    end
    object queryMUSTLISTM_ADI: TStringField
      FieldName = 'M_ADI'
      Size = 25
    end
    object queryMUSTLISTM_SOYADI: TStringField
      FieldName = 'M_SOYADI'
      Size = 25
    end
    object queryMUSTLISTACIKLAMA: TMemoField
      FieldName = 'ACIKLAMA'
      BlobType = ftMemo
      Size = 100
    end
    object queryMUSTLISTEV_ADRESI1: TStringField
      FieldName = 'EV_ADRESI1'
      Size = 60
    end
    object queryMUSTLISTEV_ADRESI2: TStringField
      FieldName = 'EV_ADRESI2'
      Size = 60
    end
    object queryMUSTLISTIS_ADRESI1: TStringField
      FieldName = 'IS_ADRESI1'
      Size = 60
    end
    object queryMUSTLISTIS_ADRESI2: TStringField
      FieldName = 'IS_ADRESI2'
      Size = 60
    end
    object queryMUSTLISTEV_TEL: TStringField
      FieldName = 'EV_TEL'
      Size = 25
    end
    object queryMUSTLISTIS_TEL: TStringField
      FieldName = 'IS_TEL'
      Size = 25
    end
    object queryMUSTLISTCEP_TEL: TStringField
      FieldName = 'CEP_TEL'
      Size = 25
    end
    object queryMUSTLISTE_MAIL: TStringField
      FieldName = 'E_MAIL'
      Size = 50
    end
    object queryMUSTLISTRESIM: TGraphicField
      FieldName = 'RESIM'
      BlobType = ftGraphic
      Size = 2
    end
    object queryMUSTLISTDOGUM_TARIHI: TDateField
      FieldName = 'DOGUM_TARIHI'
    end
    object queryMUSTLISTKUAFOR_ADI: TStringField
      FieldName = 'KUAFOR_ADI'
      Size = 35
    end
    object queryMUSTLISTANA_RENGI: TStringField
      FieldName = 'ANA_RENGI'
      Size = 15
    end
    object queryMUSTLISTSAC_ORANI: TFloatField
      FieldName = 'SAC_ORANI'
    end
    object queryMUSTLISTDOGAL: TBooleanField
      FieldName = 'DOGAL'
    end
    object queryMUSTLISTBOYALI: TBooleanField
      FieldName = 'BOYALI'
    end
    object queryMUSTLISTPERMALI: TBooleanField
      FieldName = 'PERMALI'
    end
    object queryMUSTLISTROFLE: TBooleanField
      FieldName = 'ROFLE'
    end
    object queryMUSTLISTDT: TStringField
      FieldName = 'DT'
    end
    object queryMUSTLISTDURUM: TStringField
      FieldName = 'DURUM'
      Size = 5
    end
    object queryMUSTLISTSAC_TIPI: TStringField
      FieldName = 'SAC_TIPI'
      Size = 5
    end
    object queryMUSTLISTKANGRUBU: TStringField
      FieldName = 'KANGRUBU'
      Size = 10
    end
    object queryMUSTLISTMESLEGI: TStringField
      FieldName = 'MESLEGI'
      Size = 25
    end
    object queryMUSTLISTKURU: TStringField
      FieldName = 'KURU'
    end
    object queryMUSTLISTKARMA: TStringField
      FieldName = 'KARMA'
    end
    object queryMUSTLISTAKNELI: TStringField
      FieldName = 'AKNELI'
    end
    object queryMUSTLISTHASSAS: TStringField
      FieldName = 'HASSAS'
    end
    object queryMUSTLISTYAGLI: TStringField
      FieldName = 'YAGLI'
    end
    object queryMUSTLISTTURGOR: TStringField
      FieldName = 'TURGOR'
    end
    object queryMUSTLISTKUPEROZ: TStringField
      FieldName = 'KUPEROZ'
    end
    object queryMUSTLISTNEMORANI: TStringField
      FieldName = 'NEMORANI'
    end
    object queryMUSTLISTPIGMENTASYON: TStringField
      FieldName = 'PIGMENTASYON'
    end
    object queryMUSTLISTEGZAMA: TStringField
      FieldName = 'EGZAMA'
    end
    object queryMUSTLISTYUZFORMU: TStringField
      FieldName = 'YUZFORMU'
    end
    object queryMUSTLISTELASTIKIYET: TStringField
      FieldName = 'ELASTIKIYET'
    end
    object queryMUSTLISTKALINLIK: TStringField
      FieldName = 'KALINLIK'
    end
    object queryMUSTLISTKIRISIKLIK: TStringField
      FieldName = 'KIRISIKLIK'
    end
    object queryMUSTLISTTERAPIST: TStringField
      FieldName = 'TERAPIST'
      Size = 25
    end
  end
end
