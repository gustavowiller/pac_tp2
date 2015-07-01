///-----------------------------------------------------------------
///
/// @file      Sem T�tulo1Frm.h
/// @author    LuisPaulo
/// Created:   09/06/2015 17:58:00
/// @section   DESCRIPTION
///            Login class declaration
///
///------------------------------------------------------------------

#ifndef __LOGIN_H__
#define __LOGIN_H__

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
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/stattext.h>
#include "../Projeto1Frm.h"
////Header Include End

////Dialog Style Start
#undef Login_STYLE
#define Login_STYLE wxCAPTION | wxSYSTEM_MENU | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End

class Login : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();

	public:
		Login(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("Login"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = Login_STYLE);
		virtual ~Login();
		void WxButton2Click(wxCommandEvent& event);
		void WxButton1Click(wxCommandEvent& event);

	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxTextCtrl *WxEdit2;
		wxTextCtrl *WxEdit1;
		wxStaticText *WxStaticText2;
		wxStaticText *WxStaticText1;
		wxIcon icon3;
		////GUI Control Declaration End

	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_WXBUTTON2 = 1006,
			ID_WXBUTTON1 = 1005,
			ID_WXEDIT2 = 1004,
			ID_WXEDIT1 = 1003,
			ID_WXSTATICTEXT2 = 1002,
			ID_WXSTATICTEXT1 = 1001,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
		};

	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
