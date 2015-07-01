#ifndef ZOOM_H
#define ZOOM_H

//(*Headers(Zoom)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/statbmp.h>
#include <wx/frame.h>
//*)

class Zoom: public wxFrame
{
	public:

		Zoom(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~Zoom();

		//(*Declarations(Zoom)
		wxStaticText* StaticText2;
		wxStaticBitmap* StaticBitmap1;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxStaticBox* StaticBox1;
		wxStaticText* StaticText5;
		wxPanel* Panel2;
		wxStaticText* StaticText4;
		//*)

	protected:

		//(*Identifiers(Zoom)
		static const long ID_STATICBITMAP1;
		static const long ID_PANEL1;
		static const long ID_STATICBOX1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_PANEL2;
		//*)

	private:

		//(*Handlers(Zoom)
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
