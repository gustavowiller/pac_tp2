///-----------------------------------------------------------------
///
/// @file      Projeto1Frm.h
/// @author    LuisPaulo
/// Created:   22/05/2015 20:19:40
/// @section   DESCRIPTION
///            Projeto1Frm class declaration
///
///------------------------------------------------------------------

#ifndef __PROJETO1FRM_H__
#define __PROJETO1FRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/filedlg.h>
#include <wx/menu.h>
#include <wx/clrpicker.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/statbox.h>
#include "wx/KWIC/LCDWindow.h"
//#include <wx/KWIC/LCDWindow.h>
////Header Include End

////Dialog Style Start
#undef Projeto1Frm_STYLE
#define Projeto1Frm_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Projeto1Frm : public wxFrame
{
    private:
		DECLARE_EVENT_TABLE();

	public:
		Projeto1Frm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Projeto1"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Projeto1Frm_STYLE);
		virtual ~Projeto1Frm();
		void Mnuabrir1002Click(wxCommandEvent& event);
		void Mnufechar1003Click(wxCommandEvent& event);
		void Mnunovo1004Click(wxCommandEvent& event);
		void Mnuajuda1008Click(wxCommandEvent& event);

		void Mnunovo1004Click0(wxCommandEvent& event);
		void Mnunovousurio1007Click(wxCommandEvent& event);
		void Mnusalvar1005Click(wxCommandEvent& event);
		void Mnusobre1009Click(wxCommandEvent& event);

	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxStaticBitmap *m_bgImage;
		wxFileDialog *WxOpenFileDialog1;
		wxMenuBar *WxMenuBar1;
		wxPanel* Panel1;
		wxPanel* Panel2;
		wxButton* Atualizar;
		wxColourPickerCtrl* AlterarCorPanel;
		wxStaticBox* StaticBoxAlterarCor;
		wxColour CorFundo;
		//tanque 1
		wxStaticText* StaticText1;  //TExto tanque 1
		wxSpinCtrl* SpinCtrlTanque1; //SpinCtrl Tanque1
		wxStaticBox* StaticBoxTanque1; //Box tanque1
		wxPanel* PanelValTanque1;
		wxStaticText* StaticTextValTanque1;


		//*******Valvulas
		wxBitmapButton* BitmapButtonV1in;
		wxBitmapButton* BitmapButtonV1ou;
		wxBitmapButton* BitmapButtonV2in;
		wxBitmapButton* BitmapButtonV2ou;
		wxBitmapButton* BitmapButtonV3in;
		wxBitmapButton* BitmapButtonV3ou;
		wxBitmapButton* BitmapButtonV4in;
		wxBitmapButton* BitmapButtonV4ou;
		wxBitmapButton* BitmapButtonV5in;
		wxBitmapButton* BitmapButtonV5ou;
		//****************************************

		//Tanque 2

		wxStaticText* StaticText2;  //TExto tanque 1
		wxSpinCtrl* SpinCtrlTanque2; //SpinCtrl Tanque2
		wxStaticBox* StaticBoxTanque2; //box tanque 2
		wxStaticBox* StaticBoxTanque2Val; //val tanque 2
        wxPanel* PanelValTanque2;
		wxStaticText* StaticTextValTanque2;

		//Tanque 3
		wxStaticBox* StaticBoxTanque3; //box tanque 2
        wxPanel* PanelValTanque3;
		wxStaticText* StaticTextValTanque3;

		wxGauge* GaugeT1;
		wxGauge* GaugeT2;
		wxGauge* GaugeT3;


		//Imagens
        wxString img1 = "ImagePanel/img1.png";
        wxString img2 = "ImagePanel/img2.png";
        wxString img3 = "ImagePanel/img3.png";
        wxString img4 = "ImagePanel/img4.png";
        wxString img5 = "ImagePanel/img5.png";
        wxString img6 = "ImagePanel/img6.png";
        wxString img7 = "ImagePanel/img7.png";
        wxString img8 = "ImagePanel/img8.png";
        wxString imgv1 = "ImagePanel/v1.png";
        wxString imgv2 = "ImagePanel/v2.png";
        wxString imgT1Vazio = "ImagePanel/VolT1_vazio.png";

        //*************

        //Valores dos Tanques
        int ValTanque1 = 0;
        int ValTanque2 = 0;
        int ValTanque3 = 0;
        int ValTanque1Atual = 0;
        int ValTanque2Atual = 0;
        int ValTanque3Atual = 0;
		////GUI Control Declaration End

	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_MNU_ARQUIVO_1001 = 1001,
			ID_MNU_NOVO_1004 = 1004,
			ID_MNU_ABRIR_1002 = 1002,
			ID_MNU_SALVAR_1005 = 1005,
			ID_MNU_FECHAR_1003 = 1003,
			ID_MNU_ACESSO_1006 = 1006,
			ID_MNU_NOVOUSU_RIO_1007 = 1007,
			ID_MNU_AJUDA_1008 = 1008,
			ID_MNU_SOBRE_1009 = 1009,


			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};

	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();


		static const long ID_GAUGET1;
        static const long ID_GAUGET2;
        static const long ID_GAUGET3;

		static const long ID_PANEL1;
		static const long ID_PANEL2;
		static const long ID_BUTTON1;
		static const long ID_COLOURPICKERCTRL1;
		static const long ID_STATICBOXALTERARCOR;
		//tanque 1
		static const long ID_STATICBOXTANQUE1;
		static const long ID_SPINCTRLTANQUE1;
		static const long ID_STATICTEXTTANQUE1;
		static const long ID_PANELVALTANQUE1;
		static const long ID_STATICTEXTVALTANQUE1;

		//tanque 2
		static const long ID_STATICBOXTANQUE2;
		static const long ID_SPINCTRLTANQUE2;
		static const long ID_STATICTEXTTANQUE2;
        static const long ID_PANELVALTANQUE2;
		static const long ID_STATICTEXTVALTANQUE2;


		//Tanque3
		static const long ID_STATICBOXTANQUE3;
		static const long ID_PANELVALTANQUE3;
		static const long ID_STATICTEXTVALTANQUE3;

		//Valvula Tanque 1 input
		static const long ID_BITMAPBUTTONV1IN;
		static const long ID_BITMAPBUTTONV1OU;
		//
		static const long ID_BITMAPBUTTONV2IN;
		static const long ID_BITMAPBUTTONV2OU;
		//
		static const long ID_BITMAPBUTTONV3IN;
		static const long ID_BITMAPBUTTONV3OU;
		//
		static const long ID_BITMAPBUTTONV4IN;
		static const long ID_BITMAPBUTTONV4OU;
        //
        static const long ID_BITMAPBUTTONV5IN;
		static const long ID_BITMAPBUTTONV5OU;

		void OnAtualizarClick(wxCommandEvent& event);
		void OnColourPickerCtrl1ColourChanged(wxColourPickerEvent& event);
        void SetValoresTanques();
        void SetValores(int valor, int tanque);
        void SetGauge(int T1, int T2, int T3);
        void ZeraPainel();
        void EsvaziaTanque(int valor, int tanque);

        void OnSpinCtrl2Change(wxSpinEvent& event);
        void OnSpinCtrl1Change(wxSpinEvent& event);

        void OnBitmapButtonV1inClick(wxCommandEvent& event);
        void OnBitmapButtonV1ouClick(wxCommandEvent& event);
        void OnBitmapButtonV2inClick(wxCommandEvent& event);
        void OnBitmapButtonV2ouClick(wxCommandEvent& event);
        void OnBitmapButtonV3inClick(wxCommandEvent& event);
        void OnBitmapButtonV3ouClick(wxCommandEvent& event);
        void OnBitmapButtonV4inClick(wxCommandEvent& event);
        void OnBitmapButtonV4ouClick(wxCommandEvent& event);
        void OnBitmapButtonV5inClick(wxCommandEvent& event);
        void OnBitmapButtonV5ouClick(wxCommandEvent& event);



};

#endif
