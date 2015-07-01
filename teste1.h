#ifndef TESTE1_H
#define TESTE1_H

//(*Headers(teste1)
#include <wx/checkbox.h>
#include <wx/panel.h>
#include <wx/bmpbuttn.h>
#include <wx/frame.h>
#include <wx/gauge.h>
#include <wx/statusbr.h>
//*)

class teste1: public wxFrame
{
	public:

		teste1(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~teste1();

		//(*Declarations(teste1)
		wxGauge* Gauge1;
		wxPanel* Panel1;
		wxBitmapButton* BitmapButton1;
		wxCheckBox* CheckBox1;
		wxStatusBar* StatusBar;
		//*)

	protected:

		//(*Identifiers(teste1)
		static const long ID_BITMAPBUTTON1;
		static const long ID_GAUGE1;
		static const long ID_CHECKBOX1;
		static const long ID_PANEL1;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(teste1)
		void OnSpinCtrl1Change(wxSpinEvent& event);
		void OnBitmapButton1Click(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
