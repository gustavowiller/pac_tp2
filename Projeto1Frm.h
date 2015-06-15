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
		wxFileDialog *WxOpenFileDialog1;
		wxMenuBar *WxMenuBar1;
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
};

#endif
