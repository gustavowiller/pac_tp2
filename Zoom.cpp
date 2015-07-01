#include "Zoom.h"

//(*InternalHeaders(Zoom)
#include <wx/bitmap.h>
#include <wx/intl.h>
#include <wx/image.h>
#include <wx/string.h>
//*)

//(*IdInit(Zoom)
const long Zoom::ID_STATICBITMAP1 = wxNewId();
const long Zoom::ID_PANEL1 = wxNewId();
const long Zoom::ID_STATICBOX1 = wxNewId();
const long Zoom::ID_STATICTEXT1 = wxNewId();
const long Zoom::ID_STATICTEXT2 = wxNewId();
const long Zoom::ID_STATICTEXT3 = wxNewId();
const long Zoom::ID_STATICTEXT4 = wxNewId();
const long Zoom::ID_STATICTEXT5 = wxNewId();
const long Zoom::ID_PANEL2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Zoom,wxFrame)
	//(*EventTable(Zoom)
	//*)
END_EVENT_TABLE()

Zoom::Zoom(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(Zoom)
	wxBoxSizer* BoxSizer1;

	Create(parent, wxID_ANY, _("Zoom"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	SetClientSize(wxSize(404,258));
	SetHelpText(_("Visualiza o tamque separadamente com seu status atual"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(330,293), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	StaticBitmap1 = new wxStaticBitmap(Panel1, ID_STATICBITMAP1, wxBitmap(wxImage(_T("C:\\Users\\LuisPaulo\\Documents\\code\\prj\\ImagePanel\\tanque_sep.png")).Rescale(wxSize(264,272).GetWidth(),wxSize(264,272).GetHeight())), wxPoint(0,0), wxSize(264,272), wxSIMPLE_BORDER, _T("ID_STATICBITMAP1"));
	BoxSizer1->Add(Panel1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2 = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxSize(264,232), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	StaticBox1 = new wxStaticBox(Panel2, ID_STATICBOX1, _("Tanque X"), wxPoint(16,8), wxSize(232,264), 0, _T("ID_STATICBOX1"));
	StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("Líquido Atual: Gasolina"), wxPoint(40,32), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("Quantidade: 10 Litros"), wxPoint(40,56), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
	StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("Capacidade: 100 Litros"), wxPoint(40,80), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
	StaticText4 = new wxStaticText(Panel2, ID_STATICTEXT4, _("Válvula de entrada: Aberta"), wxPoint(40,104), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
	StaticText5 = new wxStaticText(Panel2, ID_STATICTEXT5, _("Válvula de saída: Fechada"), wxPoint(40,128), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
	BoxSizer1->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	SetSizer(BoxSizer1);
	Layout();
	Center();
	//*)
}

Zoom::~Zoom()
{
	//(*Destroy(Zoom)
	//*)
}

