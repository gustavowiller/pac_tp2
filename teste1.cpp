#include "teste1.h"
#include "lcdwindow.cpp"
//(*InternalHeaders(teste1)
#include <wx/bitmap.h>
#include <wx/settings.h>
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(teste1)
const long teste1::ID_BITMAPBUTTON1 = wxNewId();
const long teste1::ID_GAUGE1 = wxNewId();
const long teste1::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(teste1,wxFrame)
	//(*EventTable(teste1)
	//*)
END_EVENT_TABLE()

teste1::teste1(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(teste1)
	Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(224,160), wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BitmapButton1 = new wxBitmapButton(Panel1, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("C:\\Users\\LuisPaulo\\Documents\\code\\prj\\ImagePanel\\red_button.png"))), wxPoint(40,88), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	Gauge1 = new wxGauge(Panel1, ID_GAUGE1, 100, wxPoint(136,40), wxSize(28,176), wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGE1"));
	Gauge1->SetValue(50);
	Gauge1->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNTEXT));
	Gauge1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_HIGHLIGHT));
	wxFont Gauge1Font(10,wxSWISS,wxFONTSTYLE_NORMAL,wxBOLD,false,_T("@Yu Gothic UI"),wxFONTENCODING_DEFAULT);
	Gauge1->SetFont(Gauge1Font);
	Gauge1->SetToolTip(_("Teste"));
	Gauge1->SetHelpText(_("Valor do liquido contido no tanque 1"));

	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&teste1::OnBitmapButton1Click);
	//*)
}

teste1::~teste1()
{
	//(*Destroy(teste1)
	//*)
}


void teste1::OnSpinCtrl1Change(wxSpinEvent& event)
{
}

void teste1::OnBitmapButton1Click(wxCommandEvent& event)
{
}
