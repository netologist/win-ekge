object frmMusteri: TfrmMusteri
  Left = 246
  Top = 118
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsDialog
  Caption = 'Müþteri Kartý'
  ClientHeight = 484
  ClientWidth = 656
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = FormClose
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object ToolBar1: TToolBar
    Left = 0
    Top = 0
    Width = 656
    Height = 29
    Caption = 'ToolBar1'
    Flat = True
    Images = ImageList1
    TabOrder = 0
    object tbtnYENI: TToolButton
      Left = 0
      Top = 0
      Caption = 'tbtnYENI'
      ImageIndex = 0
      OnClick = tbtnYENIClick
    end
    object tbtnKAYDET: TToolButton
      Left = 23
      Top = 0
      Caption = 'tbtnKAYDET'
      Enabled = False
      ImageIndex = 1
      OnClick = tbtnKAYDETClick
    end
    object tbtnSIL: TToolButton
      Left = 46
      Top = 0
      Caption = 'tbtnSIL'
      ImageIndex = 2
      OnClick = tbtnSILClick
    end
    object ToolButton4: TToolButton
      Left = 69
      Top = 0
      Width = 8
      Caption = 'ToolButton4'
      ImageIndex = 3
      Style = tbsSeparator
    end
    object tbtnAC: TToolButton
      Left = 77
      Top = 0
      Caption = 'tbtnAC'
      ImageIndex = 3
      OnClick = tbtnACClick
    end
    object ToolButton6: TToolButton
      Left = 100
      Top = 0
      Width = 8
      Caption = 'ToolButton6'
      ImageIndex = 4
      Style = tbsSeparator
    end
    object tbtnYAZDIR: TToolButton
      Left = 108
      Top = 0
      Caption = 'tbtnYAZDIR'
      ImageIndex = 4
    end
    object ToolButton1: TToolButton
      Left = 131
      Top = 0
      Width = 8
      Caption = 'ToolButton1'
      ImageIndex = 5
      Style = tbsSeparator
    end
    object ToolButton2: TToolButton
      Left = 139
      Top = 0
      Caption = 'ToolButton2'
      ImageIndex = 5
      OnClick = ToolButton2Click
    end
    object ToolButton3: TToolButton
      Left = 162
      Top = 0
      Caption = 'ToolButton3'
      ImageIndex = 6
      OnClick = ToolButton3Click
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 463
    Width = 656
    Height = 21
    Panels = <
      item
        Width = 350
      end
      item
        Alignment = taCenter
        Width = 150
      end
      item
        Alignment = taCenter
        Text = 'TARIH'
        Width = 50
      end>
    SimplePanel = False
  end
  object PageControl1: TPageControl
    Left = 0
    Top = 32
    Width = 657
    Height = 433
    ActivePage = TabSheet1
    DockSite = True
    Style = tsFlatButtons
    TabOrder = 2
    object TabSheet1: TTabSheet
      Caption = 'Müþteri Bilgileri'
      object GroupBox1: TGroupBox
        Left = 0
        Top = 0
        Width = 649
        Height = 257
        TabOrder = 0
        object Label1: TLabel
          Left = 320
          Top = 16
          Width = 36
          Height = 13
          Caption = 'Kart No'
        end
        object Label2: TLabel
          Left = 304
          Top = 40
          Width = 52
          Height = 13
          Caption = 'Kayýt Tarihi'
        end
        object Label3: TLabel
          Left = 56
          Top = 16
          Width = 15
          Height = 13
          Caption = 'Adý'
        end
        object Label4: TLabel
          Left = 40
          Top = 40
          Width = 32
          Height = 13
          Caption = 'Soyadý'
        end
        object Label5: TLabel
          Left = 24
          Top = 64
          Width = 45
          Height = 13
          Caption = 'Ev Adresi'
        end
        object Label6: TLabel
          Left = 32
          Top = 232
          Width = 40
          Height = 13
          Caption = 'Cep Tel.'
        end
        object Label7: TLabel
          Left = 40
          Top = 184
          Width = 34
          Height = 13
          Caption = 'Ev Tel.'
        end
        object Label8: TLabel
          Left = 32
          Top = 112
          Width = 40
          Height = 13
          Caption = 'Ýþ Adresi'
        end
        object Label9: TLabel
          Left = 40
          Top = 208
          Width = 32
          Height = 13
          Caption = ' Ýþ Tel.'
        end
        object Label10: TLabel
          Left = 40
          Top = 160
          Width = 27
          Height = 13
          Caption = 'e-mail'
        end
        object Label13: TLabel
          Left = 272
          Top = 184
          Width = 63
          Height = 13
          Caption = 'Doðum Tarihi'
          PopupMenu = PopupMenu1
        end
        object Label16: TLabel
          Left = 280
          Top = 208
          Width = 51
          Height = 13
          Caption = 'Kan Grubu'
        end
        object Label31: TLabel
          Left = 296
          Top = 232
          Width = 36
          Height = 13
          Caption = 'Mesleði'
        end
        object Panel1: TPanel
          Left = 496
          Top = 16
          Width = 145
          Height = 209
          BevelOuter = bvLowered
          Caption = 'R e s i m'
          TabOrder = 0
          object DBImage1: TDBImage
            Left = 0
            Top = 0
            Width = 145
            Height = 209
            Color = clGray
            DataField = 'RESIM'
            DataSource = dsrcMUSTERI
            Enabled = False
            Stretch = True
            TabOrder = 0
            OnClick = DBImage1Click
          end
        end
        object KARTNO_Edit: TDBEdit
          Left = 368
          Top = 16
          Width = 121
          Height = 21
          Color = clGray
          DataField = 'KARTNO'
          DataSource = dsrcMUSTERI
          TabOrder = 1
          OnChange = KARTNO_EditChange
          OnKeyPress = KARTNO_EditKeyPress
        end
        object TARIH_Edit: TDBEdit
          Left = 368
          Top = 40
          Width = 121
          Height = 21
          Color = clGray
          DataField = 'TARIH'
          DataSource = dsrcMUSTERI
          Enabled = False
          MaxLength = 10
          TabOrder = 2
          OnChange = TARIH_EditChange
          OnKeyPress = TARIH_EditKeyPress
        end
        object ADI_Edit: TDBEdit
          Left = 80
          Top = 16
          Width = 217
          Height = 21
          Color = clGray
          DataField = 'M_ADI'
          DataSource = dsrcMUSTERI
          Enabled = False
          TabOrder = 3
          OnChange = ADI_EditChange
          OnKeyPress = ADI_EditKeyPress
        end
        object SOYADI_Edit: TDBEdit
          Left = 80
          Top = 40
          Width = 217
          Height = 21
          Color = clGray
          DataField = 'M_SOYADI'
          DataSource = dsrcMUSTERI
          Enabled = False
          TabOrder = 4
          OnChange = SOYADI_EditChange
          OnKeyPress = SOYADI_EditKeyPress
        end
        object EVADRESI1_Edit: TDBEdit
          Left = 80
          Top = 64
          Width = 409
          Height = 21
          Color = clGray
          DataField = 'EV_ADRESI1'
          DataSource = dsrcMUSTERI
          Enabled = False
          TabOrder = 5
          OnChange = EVADRESI1_EditChange
          OnKeyPress = EVADRESI1_EditKeyPress
        end
        object EVADRESI2_Edit: TDBEdit
          Left = 80
          Top = 88
          Width = 409
          Height = 21
          Color = clGray
          DataField = 'EV_ADRESI2'
          DataSource = dsrcMUSTERI
          Enabled = False
          TabOrder = 6
          OnChange = EVADRESI2_EditChange
          OnKeyPress = EVADRESI2_EditKeyPress
        end
        object ISADRESI1_Edit: TDBEdit
          Left = 80
          Top = 112
          Width = 409
          Height = 21
          Color = clGray
          DataField = 'IS_ADRESI1'
          DataSource = dsrcMUSTERI
          Enabled = False
          TabOrder = 7
          OnChange = ISADRESI1_EditChange
          OnKeyPress = ISADRESI1_EditKeyPress
        end
        object ISADRESI2_Edit: TDBEdit
          Left = 80
          Top = 136
          Width = 409
          Height = 21
          Color = clGray
          DataField = 'IS_ADRESI2'
          DataSource = dsrcMUSTERI
          Enabled = False
          TabOrder = 8
          OnChange = ISADRESI2_EditChange
          OnKeyPress = ISADRESI2_EditKeyPress
        end
        object EVTEL_Edit: TDBEdit
          Left = 80
          Top = 184
          Width = 169
          Height = 21
          Color = clGray
          DataField = 'EV_TEL'
          DataSource = dsrcMUSTERI
          Enabled = False
          MaxLength = 16
          TabOrder = 10
          OnChange = EVTEL_EditChange
          OnKeyPress = EVTEL_EditKeyPress
        end
        object ISTEL_Edit: TDBEdit
          Left = 80
          Top = 208
          Width = 169
          Height = 21
          Color = clGray
          DataField = 'IS_TEL'
          DataSource = dsrcMUSTERI
          Enabled = False
          MaxLength = 16
          TabOrder = 11
          OnChange = ISTEL_EditChange
          OnKeyPress = ISTEL_EditKeyPress
        end
        object CEPTEL_Edit: TDBEdit
          Left = 80
          Top = 232
          Width = 169
          Height = 21
          Color = clGray
          DataField = 'CEP_TEL'
          DataSource = dsrcMUSTERI
          Enabled = False
          MaxLength = 16
          TabOrder = 12
          OnChange = CEPTEL_EditChange
          OnKeyPress = CEPTEL_EditKeyPress
        end
        object EMAIL_Edit: TDBEdit
          Left = 80
          Top = 160
          Width = 409
          Height = 21
          Color = clGray
          DataField = 'E_MAIL'
          DataSource = dsrcMUSTERI
          Enabled = False
          TabOrder = 9
          OnChange = EMAIL_EditChange
          OnKeyPress = EMAIL_EditKeyPress
        end
        object DTARIHI_Edit: TDBEdit
          Left = 344
          Top = 184
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'DOGUM_TARIHI'
          DataSource = dsrcMUSTERI
          Enabled = False
          MaxLength = 10
          TabOrder = 13
          OnChange = DTARIHI_EditChange
          OnKeyPress = DTARIHI_EditKeyPress
        end
        object KANGRUBU_Edit: TDBEdit
          Left = 344
          Top = 208
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'KANGRUBU'
          DataSource = dsrcMUSTERI
          TabOrder = 14
          OnChange = KANGRUBU_EditChange
          OnKeyPress = KANGRUBU_EditKeyPress
        end
        object MESLEGI_Edit: TDBEdit
          Left = 344
          Top = 232
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'MESLEGI'
          DataSource = dsrcMUSTERI
          TabOrder = 15
          OnChange = MESLEGI_EditChange
          OnKeyPress = MESLEGI_EditKeyPress
        end
      end
      object GroupBox4: TGroupBox
        Left = 0
        Top = 256
        Width = 649
        Height = 145
        TabOrder = 1
        object GroupBox2: TGroupBox
          Left = 8
          Top = 8
          Width = 241
          Height = 129
          TabOrder = 0
          object Label11: TLabel
            Left = 16
            Top = 16
            Width = 61
            Height = 13
            Caption = 'Kuaförün Adý'
          end
          object Label12: TLabel
            Left = 32
            Top = 40
            Width = 50
            Height = 13
            Caption = 'Ana Rengi'
          end
          object Label14: TLabel
            Left = 8
            Top = 64
            Width = 70
            Height = 13
            Alignment = taCenter
            Caption = 'Byz. Saç Oraný'
          end
          object KUAFOR_combo: TDBLookupComboBox
            Left = 88
            Top = 16
            Width = 145
            Height = 21
            Color = clGray
            DataField = 'KUAFOR_ADI'
            DataSource = dsrcMUSTERI
            Enabled = False
            KeyField = 'PERSONEL_ADI'
            ListField = 'PERSONEL_ADI'
            ListSource = dsrcPERSON
            TabOrder = 0
            OnClick = KUAFOR_comboClick
            OnKeyPress = KUAFOR_comboKeyPress
          end
          object SACORANI_Edit: TDBEdit
            Left = 88
            Top = 64
            Width = 145
            Height = 21
            Color = clGray
            DataField = 'SAC_ORANI'
            DataSource = dsrcMUSTERI
            Enabled = False
            TabOrder = 1
            OnChange = SACORANI_EditChange
            OnKeyPress = SACORANI_EditKeyPress
          end
          object ANARENGI_combo: TDBComboBox
            Left = 88
            Top = 40
            Width = 145
            Height = 21
            Color = clGray
            DataField = 'ANA_RENGI'
            DataSource = dsrcMUSTERI
            Enabled = False
            ItemHeight = 13
            Items.Strings = (
              'AÇIK'
              'DOÐAL'
              'KOYU')
            TabOrder = 2
            OnChange = ANARENGI_comboChange
            OnKeyPress = ANARENGI_comboKeyPress
          end
        end
        object GroupBox3: TGroupBox
          Left = 248
          Top = 8
          Width = 121
          Height = 129
          TabOrder = 1
          object chkDOGAL: TDBCheckBox
            Left = 16
            Top = 24
            Width = 73
            Height = 17
            Caption = 'Doðal'
            Color = clBtnFace
            DataField = 'DOGAL'
            DataSource = dsrcMUSTERI
            Enabled = False
            Font.Charset = DEFAULT_CHARSET
            Font.Color = clMenuText
            Font.Height = -11
            Font.Name = 'MS Sans Serif'
            Font.Style = []
            ParentColor = False
            ParentFont = False
            TabOrder = 0
            ValueChecked = 'True'
            ValueUnchecked = 'True'
            OnClick = chkDOGALClick
          end
          object chkBOYALI: TDBCheckBox
            Left = 16
            Top = 48
            Width = 73
            Height = 17
            Caption = 'Boyalý'
            DataField = 'BOYALI'
            DataSource = dsrcMUSTERI
            Enabled = False
            TabOrder = 1
            ValueChecked = 'True'
            ValueUnchecked = 'False'
            OnClick = chkBOYALIClick
          end
          object chkPERMALI: TDBCheckBox
            Left = 16
            Top = 72
            Width = 73
            Height = 17
            Caption = 'Permanatlý'
            DataField = 'PERMALI'
            DataSource = dsrcMUSTERI
            Enabled = False
            TabOrder = 2
            ValueChecked = 'True'
            ValueUnchecked = 'False'
            OnClick = chkPERMALIClick
          end
          object chkROFLE: TDBCheckBox
            Left = 16
            Top = 96
            Width = 73
            Height = 17
            Caption = 'Röfle'
            DataField = 'ROFLE'
            DataSource = dsrcMUSTERI
            Enabled = False
            TabOrder = 3
            ValueChecked = 'True'
            ValueUnchecked = 'False'
            OnClick = chkROFLEClick
          end
        end
        object DBRadioGroup1: TDBRadioGroup
          Left = 368
          Top = 8
          Width = 137
          Height = 129
          DataField = 'DURUM'
          DataSource = dsrcMUSTERI
          Enabled = False
          Items.Strings = (
            'Çok Ýyi'
            'Ýyi'
            'Orta'
            'Kötü')
          TabOrder = 2
          OnChange = DBRadioGroup1Change
          OnClick = DBRadioGroup1Click
        end
        object DBRadioGroup2: TDBRadioGroup
          Left = 504
          Top = 8
          Width = 137
          Height = 129
          DataField = 'SAC_TIPI'
          DataSource = dsrcMUSTERI
          Enabled = False
          Items.Strings = (
            'Yaðlý'
            'Kuru'
            'Karýþýk Tipte'
            'Normal')
          TabOrder = 3
          OnChange = DBRadioGroup2Change
          OnClick = DBRadioGroup2Click
        end
      end
      object GroupBox5: TGroupBox
        Left = 0
        Top = 256
        Width = 649
        Height = 145
        TabOrder = 2
        object Label17: TLabel
          Left = 48
          Top = 16
          Width = 22
          Height = 13
          Caption = 'Kuru'
        end
        object Label18: TLabel
          Left = 40
          Top = 40
          Width = 29
          Height = 13
          Caption = 'Akneli'
        end
        object Label19: TLabel
          Left = 40
          Top = 64
          Width = 30
          Height = 13
          Caption = 'Karma'
        end
        object Label20: TLabel
          Left = 32
          Top = 88
          Width = 35
          Height = 13
          Caption = 'Hassas'
        end
        object Label21: TLabel
          Left = 48
          Top = 112
          Width = 23
          Height = 13
          Caption = 'Yaðlý'
        end
        object Label23: TLabel
          Left = 256
          Top = 40
          Width = 39
          Height = 13
          Caption = 'Küperoz'
        end
        object Label24: TLabel
          Left = 248
          Top = 64
          Width = 50
          Height = 13
          Caption = 'Nem Oraný'
        end
        object Label22: TLabel
          Left = 264
          Top = 16
          Width = 31
          Height = 13
          Caption = 'Turgor'
        end
        object Label25: TLabel
          Left = 232
          Top = 88
          Width = 66
          Height = 13
          Caption = 'Pigmentasyon'
        end
        object Label26: TLabel
          Left = 256
          Top = 112
          Width = 38
          Height = 13
          Caption = 'Egzama'
        end
        object Label27: TLabel
          Left = 432
          Top = 16
          Width = 50
          Height = 13
          Caption = 'Yüz Formu'
        end
        object Label28: TLabel
          Left = 440
          Top = 40
          Width = 47
          Height = 13
          Caption = 'Elastikiyet'
        end
        object Label29: TLabel
          Left = 448
          Top = 64
          Width = 33
          Height = 13
          Caption = 'Kalýnlýk'
        end
        object Label30: TLabel
          Left = 448
          Top = 88
          Width = 37
          Height = 13
          Caption = 'Kýrýþýklýk'
        end
        object Label15: TLabel
          Left = 448
          Top = 112
          Width = 38
          Height = 13
          Caption = 'Terapist'
        end
        object KURU_Edit: TDBEdit
          Left = 80
          Top = 16
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'KURU'
          DataSource = dsrcMUSTERI
          TabOrder = 0
          OnChange = KURU_EditChange
          OnKeyPress = KURU_EditKeyPress
        end
        object KARMA_Edit: TDBEdit
          Left = 80
          Top = 64
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'KARMA'
          DataSource = dsrcMUSTERI
          TabOrder = 2
          OnChange = KARMA_EditChange
          OnKeyPress = KARMA_EditKeyPress
        end
        object AKNELI_Edit: TDBEdit
          Left = 80
          Top = 40
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'AKNELI'
          DataSource = dsrcMUSTERI
          TabOrder = 1
          OnChange = AKNELI_EditChange
          OnKeyPress = AKNELI_EditKeyPress
        end
        object HASSAS_Edit: TDBEdit
          Left = 80
          Top = 88
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'HASSAS'
          DataSource = dsrcMUSTERI
          TabOrder = 3
          OnChange = HASSAS_EditChange
          OnKeyPress = HASSAS_EditKeyPress
        end
        object YAGLI_Edit: TDBEdit
          Left = 80
          Top = 112
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'YAGLI'
          DataSource = dsrcMUSTERI
          TabOrder = 4
          OnChange = YAGLI_EditChange
          OnKeyPress = YAGLI_EditKeyPress
        end
        object TURGOR_Edit: TDBEdit
          Left = 304
          Top = 16
          Width = 121
          Height = 21
          Color = clGray
          DataField = 'TURGOR'
          DataSource = dsrcMUSTERI
          TabOrder = 5
          OnChange = TURGOR_EditChange
          OnKeyPress = TURGOR_EditKeyPress
        end
        object KUPEROZ_Edit: TDBEdit
          Left = 304
          Top = 40
          Width = 121
          Height = 21
          Color = clGray
          DataField = 'KUPEROZ'
          DataSource = dsrcMUSTERI
          TabOrder = 6
          OnChange = KUPEROZ_EditChange
          OnKeyPress = KUPEROZ_EditKeyPress
        end
        object NEMORANI_Edit: TDBEdit
          Left = 304
          Top = 64
          Width = 121
          Height = 21
          Color = clGray
          DataField = 'NEMORANI'
          DataSource = dsrcMUSTERI
          TabOrder = 7
          OnChange = NEMORANI_EditChange
          OnKeyPress = NEMORANI_EditKeyPress
        end
        object PIGMENTASTON_Edit: TDBEdit
          Left = 304
          Top = 88
          Width = 121
          Height = 21
          Color = clGray
          DataField = 'PIGMENTASYON'
          DataSource = dsrcMUSTERI
          TabOrder = 8
          OnChange = PIGMENTASTON_EditChange
          OnKeyPress = PIGMENTASTON_EditKeyPress
        end
        object EGZAMA_Edit: TDBEdit
          Left = 304
          Top = 112
          Width = 121
          Height = 21
          Color = clGray
          DataField = 'EGZAMA'
          DataSource = dsrcMUSTERI
          TabOrder = 9
          OnChange = EGZAMA_EditChange
          OnKeyPress = EGZAMA_EditKeyPress
        end
        object YUZFORMU_Edit: TDBEdit
          Left = 496
          Top = 16
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'YUZFORMU'
          DataSource = dsrcMUSTERI
          TabOrder = 10
          OnChange = YUZFORMU_EditChange
          OnKeyPress = YUZFORMU_EditKeyPress
        end
        object ELASTIKISYET_Edit: TDBEdit
          Left = 496
          Top = 40
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'ELASTIKIYET'
          DataSource = dsrcMUSTERI
          TabOrder = 11
          OnChange = ELASTIKISYET_EditChange
          OnKeyPress = ELASTIKISYET_EditKeyPress
        end
        object KALINLIK_Edit: TDBEdit
          Left = 496
          Top = 64
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'KALINLIK'
          DataSource = dsrcMUSTERI
          TabOrder = 12
          OnChange = KALINLIK_EditChange
          OnKeyPress = KALINLIK_EditKeyPress
        end
        object KIRISIKLIK_Edit: TDBEdit
          Left = 496
          Top = 88
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'KIRISIKLIK'
          DataSource = dsrcMUSTERI
          TabOrder = 13
          OnChange = KIRISIKLIK_EditChange
          OnKeyPress = KIRISIKLIK_EditKeyPress
        end
        object DBLookupComboBox1: TDBLookupComboBox
          Left = 496
          Top = 112
          Width = 145
          Height = 21
          Color = clGray
          DataField = 'TERAPIST'
          DataSource = dsrcMUSTERI
          KeyField = 'PERSONEL_ADI'
          ListField = 'PERSONEL_ADI'
          ListSource = dsrcPERSON
          TabOrder = 14
          OnClick = DBLookupComboBox1Click
          OnKeyPress = DBLookupComboBox1KeyPress
        end
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'Müþteri Açýklamasý'
      ImageIndex = 1
      object DBMemo1: TDBMemo
        Left = 0
        Top = 0
        Width = 649
        Height = 401
        Color = clGray
        DataField = 'ACIKLAMA'
        DataSource = dsrcMUSTERI
        TabOrder = 0
        OnChange = DBMemo1Change
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'Adisyonlarý'
      ImageIndex = 3
      object GroupBox6: TGroupBox
        Left = 0
        Top = 0
        Width = 649
        Height = 401
        TabOrder = 0
        object DBGrid2: TDBGrid
          Left = 8
          Top = 16
          Width = 633
          Height = 377
          Color = clGray
          DataSource = dsrcADISYON
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Alignment = taCenter
              Expanded = False
              FieldName = 'DEPARTMAN'
              Title.Alignment = taCenter
              Title.Caption = 'Adisyon Türü'
              Width = 135
              Visible = True
            end
            item
              Alignment = taCenter
              Expanded = False
              FieldName = 'ADISYONNO'
              Title.Alignment = taCenter
              Title.Caption = 'Adisyon No'
              Width = 135
              Visible = True
            end
            item
              Alignment = taCenter
              Expanded = False
              FieldName = 'TARIH'
              Title.Alignment = taCenter
              Title.Caption = 'Tarih'
              Width = 135
              Visible = True
            end
            item
              Alignment = taCenter
              Expanded = False
              FieldName = 'TOPLAM'
              Title.Alignment = taCenter
              Title.Caption = 'Toplam Tutar'
              Width = 180
              Visible = True
            end>
        end
      end
    end
    object TabSheet5: TTabSheet
      Caption = 'Formülleri'
      ImageIndex = 4
      object TGroupBox
        Left = 0
        Top = 0
        Width = 649
        Height = 401
        TabOrder = 0
        object DBGrid1: TDBGrid
          Left = 8
          Top = 16
          Width = 633
          Height = 377
          Color = clGray
          DataSource = dsrcFORMUL
          Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit]
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Alignment = taCenter
              Expanded = False
              FieldName = 'OTOMATIK_SAYI'
              Title.Alignment = taCenter
              Title.Caption = 'Fiþ No'
              Width = 170
              Visible = True
            end
            item
              Alignment = taCenter
              Expanded = False
              FieldName = 'TARIH'
              Title.Alignment = taCenter
              Title.Caption = 'Tarih'
              Width = 170
              Visible = True
            end
            item
              Alignment = taCenter
              Expanded = False
              FieldName = 'BEKLEMESURESI'
              Title.Alignment = taCenter
              Title.Caption = 'Bekleme Süresi'
              Width = 250
              Visible = True
            end>
        end
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'Randevularý'
      ImageIndex = 4
      object GroupBox7: TGroupBox
        Left = 0
        Top = 0
        Width = 649
        Height = 401
        TabOrder = 0
        object DBGrid3: TDBGrid
          Left = 8
          Top = 16
          Width = 633
          Height = 377
          Color = clGray
          DataSource = dsrcRANDEVU
          TabOrder = 0
          TitleFont.Charset = DEFAULT_CHARSET
          TitleFont.Color = clWindowText
          TitleFont.Height = -11
          TitleFont.Name = 'MS Sans Serif'
          TitleFont.Style = []
          Columns = <
            item
              Expanded = False
              FieldName = 'RANDEVU_NO'
              Title.Alignment = taCenter
              Title.Caption = 'No'
              Width = 70
              Visible = True
            end
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
              FieldName = 'SAAT'
              Title.Alignment = taCenter
              Title.Caption = 'Saat'
              Width = 70
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'ISLEM'
              Title.Alignment = taCenter
              Title.Caption = 'Ýþlem'
              Width = 150
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'PERSONEL'
              Title.Alignment = taCenter
              Title.Caption = 'Personel'
              Width = 150
              Visible = True
            end
            item
              Expanded = False
              FieldName = 'RANDEVU_DURUMU'
              Title.Alignment = taCenter
              Title.Caption = 'Durumu'
              Width = 80
              Visible = True
            end>
        end
      end
    end
  end
  object OpenPictureDialog1: TOpenPictureDialog
    Left = 724
    Top = 60
  end
  object ImageList1: TImageList
    Left = 725
    Top = 27
    Bitmap = {
      494C010107000900040010001000FFFFFFFFFF00FFFFFFFFFFFFFFFF424D3600
      0000000000003600000028000000400000003000000001001000000000000018
      000000000000000000000000000000000000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      00000000000000000000000000000000FF7F0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      000000000000000000000000000000000000000000000000DA7FDA7FDA7FDA7F
      DA7FDA7FDA7FDA7FDA7F00000000000000000000000000000000000000000000
      000000000000000000000000000000000000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      E07FE07FE07F0000000000000000000000000000000000003F363F363F363F36
      3F363F363F363F363F36000000000000000000003F325A7F3F32DD775A7F3F32
      DD775A7F3F32DD775A7F3F32DD775A7F0000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      1042104210420000000000000000000000000000000000003F36BF46BF463F36
      3F363F363F363F36BF46000000000000000000005A7FFF7FDD77DD77DD77DD77
      DD77DD77DD77DD77DD77DD77FF7FAC7D0000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      00000000000000000000000000000000000000000000FE7F0000BF46BF46BF46
      BF46BF46BF46BF46BF4600000000000000000000FF7F9C73FF7FDD77DD77DD77
      DD77DD77DD77DD77DD77FF7FDD77175F0000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      00000000000000000000000000000000000000000000C039C618BF46BF46BF46
      BF46BF46BF46BF46BF46000000000000000000003F32DD779C73FF7FDD77DD77
      DD77DD77DD77DD77FF7FDD77DD779F6B0000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      00000000000000000000000000000000000000000000C039C618BF46BF46BF46
      BF46BF46BF46BF46BF46000000000000000000005A7FDD77DD779C73FF7FDD77
      7A6BDD77DD77FF7FDD77DD77DD77AC7D0000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7F000000000000000000000000000000003F36BF46BF46BF46
      BF46BF46BF46BF46BF4600000000000000000000FF7FDD77DD77DD777A6BD65A
      FF7FFF7F175FDD77DD77DD77DD77175F0000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000FF7F00000000
      000000000000FF7F0000000000000000000000000000FE7F0000BF46BF46BF46
      BF46BF46BF46BF46BF46000000000000000000003F32DD777A6BD65AFF7FDD77
      DD77DD77DD77FF7F175FDD77DD779F6B0000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000FF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F000000000000000000000000C039C618BF46BF46BF46
      BF46BF46BF46BF46BF46000000000000000000005A7FD65AFF7FDD77DD77DD77
      DD77DD77DD77DD77DD77FF7F175FAC7D0000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E00000000000000000000FF7F0000
      0000000000000000FF7F000000000000000000000000C039C618BF46BF460000
      0000000000000000BF46000000000000000000005A7FBF46FF7F5A7FBF46FF7F
      5A7FBF46FF7F5A7FBF46FF7FFF7F3F320000F75EF75EF75EF75EF75EF75EF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E00000000000000000000FF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000003F36BF46BF460000
      0000000000000000BF4600000000000000000000000000000000000000000000
      0000000000000000000000000000000000007B6F7B6F7B6F7B6F7B6F7B6F7B6F
      7B6F7B6F7B6F7B6F7B6F7B6F7B6F7B6F7B6F0000000000000000000000000000
      00000000000000000000000000000000000000000000FE7F0000BF46BF46BF46
      BF46BF46BF46BF46BF4600000000000000000000000000000000000000000000
      000000000000000000000000000000000000FF7FFF7FFF7FFF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7FFF7F0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000F75EF75EEF3D0000FF7F7B6FF75E
      F75EF75EF75EF75EF75EF75EF75EF75EF75E0000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000420042004200420042
      004200420042004200000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07F00000042004200420042
      004200420042004200420000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07F0000004200420042
      004200420042004200420042000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042004200420042
      0042004200420042004200420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07F000000420042
      004200420042004200420042004200000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420042000000000000
      0000000000000000000000420042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07FFF7FE07F00000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07FFF7FE07FFF7F
      E07FFF7FE07F000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000FF7FE07FFF7FE07FFF7FE07F
      FF7FE07FFF7F000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7FFF7FFF7FFF7F00000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000E07FFF7FE07F000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000042000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F0000FF7F000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000000000000000FF7FFF7FFF7FFF7F
      FF7FFF7F00000000000000000000000000000000000000420000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      000000000000000000000000000000000000424D3E000000000000003E000000
      2800000040000000300000000100010000000000800100000000000000000000
      000000000000000000000000FFFFFF0000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      0000000000000000000000000000000000000000000000000000000000000000
      00000000000000000000000000000000FFFEFFFFFFFF0000C007FFFFFFFF0000
      BFEBC007FFFF00000005C007000000007E31C007000000007E35C00700000000
      00068007000000007FEA8007000000008014800700005845C00AC00700004150
      E001800700002046E007800700005C50F00783E700000000F003C3E700010000
      F8038007FFFFD37EFFFFE007FFFF0000FFFFFFFFFFFFFFFFFFFFC001FFFFFFFF
      C0078031EFFD001FC0078031C7FF000FC0078031C3FB0007C0078001E3F70003
      C0078001F1E70001C0078001F8CF0000C0078FF1FC1F001FC0078FF1FE3F001F
      C0078FF1FC1F001FC0078FF1F8CF8FF1C00F8FF1E1E7FFF9C01F8FF5C3F3FF75
      C03F8001C7FDFF8FFFFFFFFFFFFFFFFF}
  end
  object PopupMenu1: TPopupMenu
    Left = 693
    Top = 26
    object ResimEkle1: TMenuItem
      Caption = 'Resim Ekle'
    end
    object ResimKaydet1: TMenuItem
      Caption = 'Kopya Oluþtur'
    end
  end
  object tblMUSTERI: TTable
    Active = True
    AfterInsert = tblMUSTERIAfterInsert
    DatabaseName = 'KUAFOR'
    TableName = 'MUSTERI.db'
    Left = 660
    Top = 63
    object tblMUSTERIKARTNO: TStringField
      FieldName = 'KARTNO'
      Size = 15
    end
    object tblMUSTERITARIH: TDateField
      FieldName = 'TARIH'
      EditMask = '##.##.####'
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
      EditMask = '#(###) ### ## ##;1;_'
      Size = 25
    end
    object tblMUSTERIIS_TEL: TStringField
      FieldName = 'IS_TEL'
      EditMask = '#(###) ### ## ##;1;_'
      Size = 25
    end
    object tblMUSTERICEP_TEL: TStringField
      FieldName = 'CEP_TEL'
      EditMask = '#(###) ### ## ##;1;_'
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
      EditMask = '##.##.####;1;_'
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
  object dsrcMUSTERI: TDataSource
    DataSet = tblMUSTERI
    Left = 725
    Top = 93
  end
  object dsrcPERSON: TDataSource
    DataSet = queryPERSON
    Left = 725
    Top = 129
  end
  object queryPERSON: TQuery
    Active = True
    DatabaseName = 'KUAFOR'
    SQL.Strings = (
      'SELECT * FROM PERSONEL'
      'WHERE DEPARTMAN=:DEPARTMAN')
    Left = 660
    Top = 98
    ParamData = <
      item
        DataType = ftString
        Name = 'DEPARTMAN'
        ParamType = ptUnknown
      end>
  end
  object queryKONTROL: TQuery
    DatabaseName = 'KUAFOR'
    SQL.Strings = (
      'SELECT * FROM MUSTERI'
      'WHERE KARTNO=:KARTNO')
    Left = 692
    Top = 96
    ParamData = <
      item
        DataType = ftString
        Name = 'KARTNO'
        ParamType = ptUnknown
      end>
    object queryKONTROLKARTNO: TStringField
      FieldName = 'KARTNO'
      Origin = 'KUAFOR."MUSTERI.DB".KARTNO'
      Size = 15
    end
    object queryKONTROLTARIH: TDateField
      FieldName = 'TARIH'
      Origin = 'KUAFOR."MUSTERI.DB".TARIH'
    end
    object queryKONTROLM_ADI: TStringField
      FieldName = 'M_ADI'
      Origin = 'KUAFOR."MUSTERI.DB".M_ADI'
      Size = 25
    end
    object queryKONTROLM_SOYADI: TStringField
      FieldName = 'M_SOYADI'
      Origin = 'KUAFOR."MUSTERI.DB".M_SOYADI'
      Size = 25
    end
    object queryKONTROLACIKLAMA: TMemoField
      FieldName = 'ACIKLAMA'
      Origin = 'KUAFOR."MUSTERI.DB".ACIKLAMA'
      BlobType = ftMemo
      Size = 100
    end
    object queryKONTROLEV_ADRESI1: TStringField
      FieldName = 'EV_ADRESI1'
      Origin = 'KUAFOR."MUSTERI.DB".EV_ADRESI1'
      Size = 60
    end
    object queryKONTROLEV_ADRESI2: TStringField
      FieldName = 'EV_ADRESI2'
      Origin = 'KUAFOR."MUSTERI.DB".EV_ADRESI2'
      Size = 60
    end
    object queryKONTROLIS_ADRESI1: TStringField
      FieldName = 'IS_ADRESI1'
      Origin = 'KUAFOR."MUSTERI.DB".IS_ADRESI1'
      Size = 60
    end
    object queryKONTROLIS_ADRESI2: TStringField
      FieldName = 'IS_ADRESI2'
      Origin = 'KUAFOR."MUSTERI.DB".IS_ADRESI2'
      Size = 60
    end
    object queryKONTROLEV_TEL: TStringField
      FieldName = 'EV_TEL'
      Origin = 'KUAFOR."MUSTERI.DB".EV_TEL'
      Size = 25
    end
    object queryKONTROLIS_TEL: TStringField
      FieldName = 'IS_TEL'
      Origin = 'KUAFOR."MUSTERI.DB".IS_TEL'
      Size = 25
    end
    object queryKONTROLCEP_TEL: TStringField
      FieldName = 'CEP_TEL'
      Origin = 'KUAFOR."MUSTERI.DB".CEP_TEL'
      Size = 25
    end
    object queryKONTROLE_MAIL: TStringField
      FieldName = 'E_MAIL'
      Origin = 'KUAFOR."MUSTERI.DB".E_MAIL'
      Size = 50
    end
    object queryKONTROLRESIM: TGraphicField
      FieldName = 'RESIM'
      Origin = 'KUAFOR."MUSTERI.DB".RESIM'
      BlobType = ftGraphic
      Size = 2
    end
    object queryKONTROLDOGUM_TARIHI: TDateField
      FieldName = 'DOGUM_TARIHI'
      Origin = 'KUAFOR."MUSTERI.DB".DOGUM_TARIHI'
    end
    object queryKONTROLKUAFOR_ADI: TStringField
      FieldName = 'KUAFOR_ADI'
      Origin = 'KUAFOR."MUSTERI.DB".KUAFOR_ADI'
      Size = 35
    end
    object queryKONTROLANA_RENGI: TStringField
      FieldName = 'ANA_RENGI'
      Origin = 'KUAFOR."MUSTERI.DB".ANA_RENGI'
      Size = 15
    end
    object queryKONTROLSAC_ORANI: TFloatField
      FieldName = 'SAC_ORANI'
      Origin = 'KUAFOR."MUSTERI.DB".SAC_ORANI'
    end
    object queryKONTROLDOGAL: TBooleanField
      FieldName = 'DOGAL'
      Origin = 'KUAFOR."MUSTERI.DB".DOGAL'
    end
    object queryKONTROLBOYALI: TBooleanField
      FieldName = 'BOYALI'
      Origin = 'KUAFOR."MUSTERI.DB".BOYALI'
    end
    object queryKONTROLPERMALI: TBooleanField
      FieldName = 'PERMALI'
      Origin = 'KUAFOR."MUSTERI.DB".PERMALI'
    end
    object queryKONTROLROFLE: TBooleanField
      FieldName = 'ROFLE'
      Origin = 'KUAFOR."MUSTERI.DB".ROFLE'
    end
    object queryKONTROLDURUM: TStringField
      FieldName = 'DURUM'
      Origin = 'KUAFOR."MUSTERI.DB".DURUM'
      Size = 5
    end
    object queryKONTROLSAC_TIPI: TStringField
      FieldName = 'SAC_TIPI'
      Origin = 'KUAFOR."MUSTERI.DB".SAC_TIPI'
      Size = 5
    end
    object queryKONTROLKANGRUBU: TStringField
      FieldName = 'KANGRUBU'
      Origin = 'KUAFOR."MUSTERI.DB".KANGRUBU'
      Size = 10
    end
    object queryKONTROLMESLEGI: TStringField
      FieldName = 'MESLEGI'
      Origin = 'KUAFOR."MUSTERI.DB".MESLEGI'
      Size = 25
    end
    object queryKONTROLKURU: TStringField
      FieldName = 'KURU'
      Origin = 'KUAFOR."MUSTERI.DB".KURU'
    end
    object queryKONTROLKARMA: TStringField
      FieldName = 'KARMA'
      Origin = 'KUAFOR."MUSTERI.DB".KARMA'
    end
    object queryKONTROLAKNELI: TStringField
      FieldName = 'AKNELI'
      Origin = 'KUAFOR."MUSTERI.DB".AKNELI'
    end
    object queryKONTROLHASSAS: TStringField
      FieldName = 'HASSAS'
      Origin = 'KUAFOR."MUSTERI.DB".HASSAS'
    end
    object queryKONTROLYAGLI: TStringField
      FieldName = 'YAGLI'
      Origin = 'KUAFOR."MUSTERI.DB".YAGLI'
    end
    object queryKONTROLTURGOR: TStringField
      FieldName = 'TURGOR'
      Origin = 'KUAFOR."MUSTERI.DB".TURGOR'
    end
    object queryKONTROLKUPEROZ: TStringField
      FieldName = 'KUPEROZ'
      Origin = 'KUAFOR."MUSTERI.DB".KUPEROZ'
    end
    object queryKONTROLNEMORANI: TStringField
      FieldName = 'NEMORANI'
      Origin = 'KUAFOR."MUSTERI.DB".NEMORANI'
    end
    object queryKONTROLPIGMENTASYON: TStringField
      FieldName = 'PIGMENTASYON'
      Origin = 'KUAFOR."MUSTERI.DB".PIGMENTASYON'
    end
    object queryKONTROLEGZAMA: TStringField
      FieldName = 'EGZAMA'
      Origin = 'KUAFOR."MUSTERI.DB".EGZAMA'
    end
    object queryKONTROLYUZFORMU: TStringField
      FieldName = 'YUZFORMU'
      Origin = 'KUAFOR."MUSTERI.DB".YUZFORMU'
    end
    object queryKONTROLELASTIKIYET: TStringField
      FieldName = 'ELASTIKIYET'
      Origin = 'KUAFOR."MUSTERI.DB".ELASTIKIYET'
    end
    object queryKONTROLKALINLIK: TStringField
      FieldName = 'KALINLIK'
      Origin = 'KUAFOR."MUSTERI.DB".KALINLIK'
    end
    object queryKONTROLKIRISIKLIK: TStringField
      FieldName = 'KIRISIKLIK'
      Origin = 'KUAFOR."MUSTERI.DB".KIRISIKLIK'
    end
    object queryKONTROLTERAPIST: TStringField
      FieldName = 'TERAPIST'
      Origin = 'KUAFOR."MUSTERI.DB".TERAPIST'
      Size = 25
    end
    object queryKONTROLDT: TStringField
      FieldName = 'DT'
      Origin = 'KUAFOR."MUSTERI.DB".DT'
    end
  end
  object dsrcFORMUL: TDataSource
    DataSet = queryFORMUL
    Left = 725
    Top = 163
  end
  object queryFORMUL: TQuery
    Active = True
    DatabaseName = 'KUAFOR'
    DataSource = dsrcMUSTERI
    SQL.Strings = (
      'SELECT * FROM FORMULANA'
      'WHERE MNO=:KARTNO')
    Left = 692
    Top = 59
    ParamData = <
      item
        DataType = ftString
        Name = 'KARTNO'
        ParamType = ptUnknown
      end>
  end
  object dsrcADISYON: TDataSource
    DataSet = queryADISYON
    Left = 692
    Top = 163
  end
  object queryADISYON: TQuery
    Active = True
    DatabaseName = 'KUAFOR'
    DataSource = dsrcMUSTERI
    SQL.Strings = (
      'SELECT * FROM ADISANA'
      'WHERE MNO=:KARTNO')
    Left = 692
    Top = 131
    ParamData = <
      item
        DataType = ftString
        Name = 'KARTNO'
        ParamType = ptUnknown
      end>
  end
  object dsrcRANDEVU: TDataSource
    DataSet = queryRANDEVU
    Left = 660
    Top = 163
  end
  object queryRANDEVU: TQuery
    Active = True
    DatabaseName = 'KUAFOR'
    DataSource = dsrcMUSTERI
    SQL.Strings = (
      'SELECT * FROM RANDEVU'
      'WHERE MNO=:KARTNO')
    Left = 660
    Top = 131
    ParamData = <
      item
        DataType = ftString
        Name = 'KARTNO'
        ParamType = ptUnknown
      end>
  end
end
