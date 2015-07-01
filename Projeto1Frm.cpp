///-----------------------------------------------------------------
///
/// @file      Projeto1Frm.cpp
/// @author    LuisPaulo
/// Created:   22/05/2015 20:19:40
/// @section   DESCRIPTION
///            Projeto1Frm class implementation
///
///------------------------------------------------------------------
#include <wx/wx.h>
#include "wx/html/htmlwin.h"
#include <wx/statline.h>
#include "Projeto1Frm.h"
#include "icon/icon.h"       // incluir o ícone
#include "NewUser/NewUser.h" // Incluir Tela Novo Usuário
#include "Login/LoginFrm.h" //Incluir Tela de Login
#include "Log/Log.h"        //Incluir Logs
#include "ImagePanel.h"

//tanque 1
const long Projeto1Frm::ID_STATICBOXTANQUE1 = wxNewId();
const long Projeto1Frm::ID_SPINCTRLTANQUE1 = wxNewId();
const long Projeto1Frm::ID_STATICTEXTTANQUE1 = wxNewId();
const long Projeto1Frm::ID_PANELVALTANQUE1 = wxNewId();
const long Projeto1Frm::ID_STATICTEXTVALTANQUE1 = wxNewId();
//tanque 2
const long Projeto1Frm::ID_STATICBOXTANQUE2 = wxNewId();
const long Projeto1Frm::ID_SPINCTRLTANQUE2 = wxNewId();
const long Projeto1Frm::ID_STATICTEXTTANQUE2 = wxNewId();
const long Projeto1Frm::ID_PANELVALTANQUE2 = wxNewId();
const long Projeto1Frm::ID_STATICTEXTVALTANQUE2 = wxNewId();
//tanque 3
const long Projeto1Frm::ID_STATICBOXTANQUE3 = wxNewId();
const long Projeto1Frm::ID_PANELVALTANQUE3 = wxNewId();
const long Projeto1Frm::ID_STATICTEXTVALTANQUE3 = wxNewId();

//**************************************************************
const long Projeto1Frm::ID_STATICBOXALTERARCOR = wxNewId();
const long Projeto1Frm::ID_COLOURPICKERCTRL1 = wxNewId();
const long Projeto1Frm::ID_BUTTON1 = wxNewId();
const long Projeto1Frm::ID_PANEL1 = wxNewId();
const long Projeto1Frm::ID_PANEL2 = wxNewId();
//*********************************************
//****Tanques***************
const long Projeto1Frm::ID_BITMAPBUTTONV1IN = wxNewId();
const long Projeto1Frm::ID_BITMAPBUTTONV1OU = wxNewId();

const long Projeto1Frm::ID_BITMAPBUTTONV2IN = wxNewId();
const long Projeto1Frm::ID_BITMAPBUTTONV2OU = wxNewId();

const long Projeto1Frm::ID_BITMAPBUTTONV3IN = wxNewId();
const long Projeto1Frm::ID_BITMAPBUTTONV3OU = wxNewId();

const long Projeto1Frm::ID_BITMAPBUTTONV4IN = wxNewId();
const long Projeto1Frm::ID_BITMAPBUTTONV4OU = wxNewId();

const long Projeto1Frm::ID_BITMAPBUTTONV5IN = wxNewId();
const long Projeto1Frm::ID_BITMAPBUTTONV5OU = wxNewId();

const long Projeto1Frm::ID_GAUGET1 = wxNewId(); //Componente GAuge tanque1
const long Projeto1Frm::ID_GAUGET2 = wxNewId(); //Componente GAuge tanque2
const long Projeto1Frm::ID_GAUGET3 = wxNewId(); //Componente GAuge tanque3



//const long Projeto1Frm::ID_LCDDISPLAY1 = wxNewId();

//#include "Help/Help.h"        // Incluir Ajuda

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Projeto1Frm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Projeto1Frm,wxFrame)
	////Manual Code Start
	////Manual Code End

	EVT_CLOSE(Projeto1Frm::OnClose)
	EVT_MENU(ID_MNU_NOVO_1004, Projeto1Frm::Mnunovo1004Click0)
	EVT_MENU(ID_MNU_ABRIR_1002, Projeto1Frm::Mnuabrir1002Click)
	EVT_MENU(ID_MNU_SALVAR_1005, Projeto1Frm::Mnusalvar1005Click)
	EVT_MENU(ID_MNU_FECHAR_1003, Projeto1Frm::Mnufechar1003Click)
	EVT_MENU(ID_MNU_NOVOUSU_RIO_1007, Projeto1Frm::Mnunovousurio1007Click)
	EVT_MENU(ID_MNU_SOBRE_1009, Projeto1Frm::Mnusobre1009Click)
END_EVENT_TABLE()
////Event Table End

Projeto1Frm::Projeto1Frm(wxWindow *parent, int is_admin, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
    this->is_admin = is_admin;
	CreateGUIControls();
}

Projeto1Frm::~Projeto1Frm()
{
}

void Projeto1Frm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start




    ImagePanel *ImgPanel;
    wxBoxSizer* BoxSizer1;
    SetClientSize(wxSize(477,261));
	Move(wxDefaultPosition);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxSize(173,900), wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	BoxSizer1->Add(Panel1, 3, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel2 = new wxPanel(this, ID_PANEL2, wxDefaultPosition, wxSize(173,900), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
	BoxSizer1->Add(Panel2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(BoxSizer1);
	SetSizer(BoxSizer1);

	//*******************

    WxOpenFileDialog1 =  new wxFileDialog(this, _("Choose a file"), _(""), _(""), _("*.*"), wxFD_OPEN);
	WxMenuBar1 = new wxMenuBar();
	wxMenu *ID_MNU_ARQUIVO_1001_Mnu_Obj = new wxMenu();
	ID_MNU_ARQUIVO_1001_Mnu_Obj->Append(ID_MNU_NOVO_1004, _("Novo"), _(""), wxITEM_NORMAL);
	ID_MNU_ARQUIVO_1001_Mnu_Obj->Append(ID_MNU_ABRIR_1002, _("Abrir"), _(""), wxITEM_NORMAL);
	ID_MNU_ARQUIVO_1001_Mnu_Obj->Append(ID_MNU_SALVAR_1005, _("Salvar"), _(""), wxITEM_NORMAL);
	ID_MNU_ARQUIVO_1001_Mnu_Obj->Append(ID_MNU_FECHAR_1003, _("Fechar"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_ARQUIVO_1001_Mnu_Obj, _("Arquivo"));

	wxMenu *ID_MNU_ACESSO_1006_Mnu_Obj = new wxMenu();
	//Controle de acesso - Somente Adminstradores visualizam o menu para acessar cadastro de usuarios.
    if(this->is_admin==1)
        ID_MNU_ACESSO_1006_Mnu_Obj->Append(ID_MNU_NOVOUSU_RIO_1007, _("Novo Usuário"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_ACESSO_1006_Mnu_Obj, _("Acesso"));

	wxMenu *ID_MNU_AJUDA_1008_Mnu_Obj = new wxMenu();
	ID_MNU_AJUDA_1008_Mnu_Obj->Append(ID_MNU_SOBRE_1009, _("Sobre"), _(""), wxITEM_NORMAL);
	WxMenuBar1->Append(ID_MNU_AJUDA_1008_Mnu_Obj, _("Ajuda"));
	SetMenuBar(WxMenuBar1);
    //Botão Atualizar
    Atualizar = new wxButton(Panel2, ID_BUTTON1, _("Atualizar"), wxPoint(152,650), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnAtualizarClick);
    //**************************
    //Alterar Cor - Componente ColorPicker
    AlterarCorPanel = new wxColourPickerCtrl(Panel2, ID_COLOURPICKERCTRL1, wxColour(224,224,224), wxPoint(152,520), wxDefaultSize, 0, wxDefaultValidator, _T("ID_COLOURPICKERCTRL1"));
    //*******************************
	//******* Ref a Alterar Cor de Fundo
    StaticBoxAlterarCor = new wxStaticBox(Panel2, ID_STATICBOXALTERARCOR, _("Alterar Cor de Fundo"), wxPoint(89,500), wxSize(200,100), 0, _T("ID_STATICBOXALTERARCOR"));
	//*****************

	//***********Ref a tanque 1
	StaticBoxTanque1 = new wxStaticBox(Panel2, ID_STATICBOXTANQUE1, _("Tanque 1"), wxPoint(60,40), wxSize(224,112), 0, _T("ID_STATICBOX1"));

	PanelValTanque1 = new wxPanel(StaticBoxTanque1, ID_PANELVALTANQUE1, wxPoint(15,40), wxSize(75,30), wxTAB_TRAVERSAL, _T("ID_PANELVALTANQUE1"));
	PanelValTanque1->SetBackgroundColour(wxColour(0,0,0));
	StaticTextValTanque1 = new wxStaticText(PanelValTanque1, ID_STATICTEXTVALTANQUE1, _("000"), wxPoint(7,3), wxDefaultSize, 0, _T("ID_STATICTEXTVALTANQUE1"));
	StaticTextValTanque1->SetForegroundColour(wxColour(25,176,11));
	StaticTextValTanque1->SetBackgroundColour(wxColour(0,0,0));
	wxFont StaticText1Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Impact"),wxFONTENCODING_DEFAULT);
	StaticTextValTanque1->SetFont(StaticText1Font);

	SpinCtrlTanque1 = new wxSpinCtrl(StaticBoxTanque1, ID_SPINCTRLTANQUE1, _T("0"), wxPoint(140,65), wxSize(54,21), 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	SpinCtrlTanque1->SetValue(_T("0"));
	SpinCtrlTanque1->SetRange(0,100);
	StaticText1 = new wxStaticText(StaticBoxTanque1, ID_STATICTEXTTANQUE1, _("Valor Atual"), wxPoint(25,20), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	//******************************


	//***********Ref tanque 2
	StaticBoxTanque2 = new wxStaticBox(Panel2, ID_STATICBOXTANQUE2, _("Tanque 2"), wxPoint(60,190), wxSize(224,112), 0, _T("ID_STATICBOX2"));

	PanelValTanque2 = new wxPanel(StaticBoxTanque2, ID_PANELVALTANQUE2, wxPoint(15,40), wxSize(75,30), wxTAB_TRAVERSAL, _T("ID_PANELVALTANQUE2"));
	PanelValTanque2->SetBackgroundColour(wxColour(0,0,0));
	StaticTextValTanque2 = new wxStaticText(PanelValTanque2, ID_STATICTEXTVALTANQUE2, _("000"), wxPoint(7,3), wxDefaultSize, 0, _T("ID_STATICTEXTVALTANQUE2"));
	StaticTextValTanque2->SetForegroundColour(wxColour(25,176,11));
	StaticTextValTanque2->SetBackgroundColour(wxColour(0,0,0));
	wxFont StaticText2Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Impact"),wxFONTENCODING_DEFAULT);
	StaticTextValTanque2->SetFont(StaticText2Font);

    Connect(ID_SPINCTRLTANQUE1,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&Projeto1Frm::OnSpinCtrl1Change);
    Connect(ID_SPINCTRLTANQUE2,wxEVT_COMMAND_SPINCTRL_UPDATED,(wxObjectEventFunction)&Projeto1Frm::OnSpinCtrl2Change);

	SpinCtrlTanque2 = new wxSpinCtrl(StaticBoxTanque2, ID_SPINCTRLTANQUE2, _T("0"), wxPoint(140,65), wxSize(54,21), 0, 0, 100, 0, _T("ID_SPINCTRL1"));
	SpinCtrlTanque2->SetValue(_T("0"));
	SpinCtrlTanque2->SetRange(0,100);

    //***********Ref tanque 3
    StaticBoxTanque3 = new wxStaticBox(Panel2, ID_STATICBOXTANQUE3, _("Tanque 3"), wxPoint(60,370), wxSize(224,112), 0, _T("ID_STATICBOX3"));
    PanelValTanque3 = new wxPanel(StaticBoxTanque3, ID_PANELVALTANQUE3, wxPoint(15,40), wxSize(75,30), wxTAB_TRAVERSAL, _T("ID_PANELVALTANQUE3"));
	PanelValTanque3->SetBackgroundColour(wxColour(0,0,0));
	StaticTextValTanque3 = new wxStaticText(PanelValTanque3, ID_STATICTEXTVALTANQUE3, _("000"), wxPoint(7,3), wxDefaultSize, 0, _T("ID_STATICTEXTVALTANQUE3"));
	StaticTextValTanque3->SetForegroundColour(wxColour(25,176,11));
	StaticTextValTanque3->SetBackgroundColour(wxColour(0,0,0));
	wxFont StaticText3Font(12,wxSWISS,wxFONTSTYLE_NORMAL,wxNORMAL,false,_T("Impact"),wxFONTENCODING_DEFAULT);
	StaticTextValTanque3->SetFont(StaticText3Font);


    //**** Sobre as valvulas
    BitmapButtonV1in = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV1IN, wxBitmap(wxImage(_T("ImagePanel\\v1.png"))), wxPoint(73,99), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1IN"));
    BitmapButtonV1ou = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV1OU, wxBitmap(wxImage(_T("ImagePanel\\v2.png"))), wxPoint(73,99), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1OU"));
    BitmapButtonV2in = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV2IN, wxBitmap(wxImage(_T("ImagePanel\\v1.png"))), wxPoint(881,99), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1IN"));
    BitmapButtonV2ou = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV2OU, wxBitmap(wxImage(_T("ImagePanel\\v2.png"))), wxPoint(881,99), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1OU"));
    BitmapButtonV3in = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV3IN, wxBitmap(wxImage(_T("ImagePanel\\v1.png"))), wxPoint(293,418), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1IN"));
    BitmapButtonV3ou = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV3OU, wxBitmap(wxImage(_T("ImagePanel\\v2.png"))), wxPoint(293,418), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1OU"));
    BitmapButtonV4in = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV4IN, wxBitmap(wxImage(_T("ImagePanel\\v1.png"))), wxPoint(616,418), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1IN"));
    BitmapButtonV4ou = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV4OU, wxBitmap(wxImage(_T("ImagePanel\\v2.png"))), wxPoint(616,418), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1OU"));
    BitmapButtonV5ou = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV5OU, wxBitmap(wxImage(_T("ImagePanel\\v2.png"))), wxPoint(587,609), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1OU"));
    BitmapButtonV5in = new wxBitmapButton(Panel1, ID_BITMAPBUTTONV5IN, wxBitmap(wxImage(_T("ImagePanel\\v1.png"))), wxPoint(587,609), wxSize(40,40), wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTONV1IN"));






    Connect(ID_BITMAPBUTTONV1IN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV1inClick);
    Connect(ID_BITMAPBUTTONV1OU,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV1ouClick);

    Connect(ID_BITMAPBUTTONV2IN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV2inClick);
    Connect(ID_BITMAPBUTTONV2OU,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV2ouClick);

    Connect(ID_BITMAPBUTTONV3IN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV3inClick);
    Connect(ID_BITMAPBUTTONV3OU,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV3ouClick);

    Connect(ID_BITMAPBUTTONV4IN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV4inClick);
    Connect(ID_BITMAPBUTTONV4OU,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV4ouClick);

    Connect(ID_BITMAPBUTTONV5IN,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV5inClick);
    Connect(ID_BITMAPBUTTONV5OU,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Projeto1Frm::OnBitmapButtonV5ouClick);
	//********************************


	//Relative to Panels
    //******Test
    wxImage::AddHandler( new wxPNGHandler );
	m_bgImage = new wxStaticBitmap( Panel1, wxID_ANY, wxBitmap( img8, wxBITMAP_TYPE_PNG ), wxDefaultPosition, wxDefaultSize, 0 );

    GaugeT1 = new wxGauge(m_bgImage, ID_GAUGET1, 100, wxPoint(420,140), wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGET1"));
    GaugeT1->SetValue(0);
    GaugeT1->SetToolTip(_("Valor do liquido contido no tanque 1"));
	GaugeT1->SetHelpText(_("Valor do liquido contido no tanque 1"));
	GaugeT1->SetForegroundColour(wxColour(27,16,150));
    GaugeT2 = new wxGauge(m_bgImage, ID_GAUGET2, 100, wxPoint(810,140), wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGET2"));
    GaugeT2->SetValue(0);
    GaugeT2->SetToolTip(_("Valor do liquido contido no tanque 2"));
	GaugeT2->SetHelpText(_("Valor do liquido contido no tanque 2"));
	GaugeT2->SetForegroundColour(wxColour(27,16,150));
    GaugeT3 = new wxGauge(m_bgImage, ID_GAUGET3, 100, wxPoint(307,469), wxDefaultSize, wxGA_VERTICAL, wxDefaultValidator, _T("ID_GAUGET3"));
    GaugeT3->SetValue(0);
    GaugeT3->SetToolTip(_("Valor do liquido contido no tanque 3"));
	GaugeT3->SetHelpText(_("Valor do liquido contido no tanque 3"));
	GaugeT3->SetForegroundColour(wxColour(27,16,150));

	SetTitle(_("Supervisório - Versão 1 - TP3 - PAC"));
	SetIcon(wxNullIcon);
	SetSize(8,8,820,513);
	Center();

	////GUI Items Creation End
}

void Projeto1Frm::OnClose(wxCloseEvent& event)
{
	Destroy();
	exit(0);
}

/*
 * Mnuabrir1002Click
 */
void Projeto1Frm::Mnuabrir1002Click(wxCommandEvent& event)
{
    Log* S_Log;
    S_Log->Salva_Log(5);
    wxFileDialog
        openFileDialog(this, _("Open XYZ file"), "", "",
                       "XYZ files (*.xyz)|*.xyz", wxFD_OPEN|wxFD_FILE_MUST_EXIST);
    if (openFileDialog.ShowModal() == wxID_CANCEL)
        return;     // the user changed idea...
     if (openFileDialog.ShowModal() == wxID_OK)
        return;     // the user clicked ok

}

/*
 * Mnufechar1003Click
 */
void Projeto1Frm::Mnufechar1003Click(wxCommandEvent& event)
{
	// insert your code here
	Log* S_Log;
    S_Log->Salva_Log(4);
	Destroy();
	exit(0);
}


/*
 * Mnunovo1004Click0
 */
void Projeto1Frm::Mnunovo1004Click0(wxCommandEvent& event)
{
	// insert your code here
    wxLogMessage(_("Um novo arquivo foi selecionado!"));
    Log* S_Log;
    S_Log->Salva_Log(6);
}

/*
 * Mnusalvar1005Click
 */
void Projeto1Frm::Mnusalvar1005Click(wxCommandEvent& event)
{
	// insert your code here
	wxLogMessage(_("Um arquivo foi salvo!"));
	Log* S_Log;
    S_Log->Salva_Log(7);
}



/*
 * Mnunovousurio1007Click
 */
void Projeto1Frm::Mnunovousurio1007Click(wxCommandEvent& event)
{
	// insert your code here
	NewUser *New_User = new NewUser(this);
	wxIcon icon3(wxT("images.ico"), wxBITMAP_TYPE_ICO, 16, 16);
    New_User->SetIcon(icon3);
    New_User->Show(true);
    Log* S_Log;
    S_Log->Salva_Log(9);
}

/*
 * Mnuajuda1008Click
 */
void Projeto1Frm::Mnuajuda1008Click(wxCommandEvent& event)
{
	// insert your code here

}

/*
 * Mnusobre1009Click
 */
void Projeto1Frm::Mnusobre1009Click(wxCommandEvent& event)
{
	// insert your code here
	wxBoxSizer *topsizer;
	wxHtmlWindow *html;
    wxDialog dlg(this, wxID_ANY, wxString(_("Sobre o Aplicativo TP 2")));

	topsizer = new wxBoxSizer(wxVERTICAL);
	html = new wxHtmlWindow(&dlg, wxID_ANY, wxDefaultPosition, wxSize(500, 400));

	html->SetBorders(0);
	html->LoadPage(wxT("ajuda.html"));
	// Fit the HTML window to the size of its contents

	html->SetSize(html->GetInternalRepresentation()->GetWidth(),
	html->GetInternalRepresentation()->GetHeight());

	topsizer->Add(html, 1, wxALL, 10);

	topsizer->Add(new wxStaticLine(&dlg, wxID_ANY), 0, wxEXPAND | wxLEFT | wxRIGHT, 10);
	wxButton *but = new wxButton(&dlg, wxID_OK, _("OK"));
	but->SetDefault();  topsizer->Add(but, 0, wxALL | wxALIGN_RIGHT, 15);

	dlg.SetSizer(topsizer);
	topsizer->Fit(&dlg);

	dlg.ShowModal();
	Log* S_Log;
    S_Log->Salva_Log(10);
}
void Projeto1Frm::OnAtualizarClick(wxCommandEvent& event)
{
    SetValoresTanques();
    CorFundo = AlterarCorPanel->GetColour();
    Panel1->SetBackgroundColour(CorFundo);
    Panel2->SetBackgroundColour(CorFundo);
    Layout();
    Refresh();

}
void Projeto1Frm::SetValoresTanques()
{
    ValTanque1 = SpinCtrlTanque1->GetValue();
    ValTanque2 = SpinCtrlTanque2->GetValue();
    ValTanque1Atual = ValTanque1Atual+ValTanque1;
    ValTanque2Atual = ValTanque2Atual+ValTanque2;

    SetGauge(ValTanque1Atual, ValTanque2Atual, 0);
    ZeraPainel();
    /*
    wxImage::AddHandler( new wxPNGHandler );
    if((ValTanque1Atual < 250)){

        m_bgImage = new wxStaticBitmap( Panel1, wxID_ANY, wxBitmap( img1, wxBITMAP_TYPE_PNG ), wxDefaultPosition, wxDefaultSize, 0 );
    }
    if((ValTanque1Atual >= 250)){

        m_bgImage = new wxStaticBitmap( Panel1, wxID_ANY, wxBitmap( img4, wxBITMAP_TYPE_PNG ), wxDefaultPosition, wxDefaultSize, 0 );
    }
    */
}

void Projeto1Frm::SetValores(int val, int tanque)
{
    wxString mystring = wxString::Format(wxT("%i"),val);
    if(tanque == 1){
        StaticTextValTanque1->SetLabel(mystring);
    }
    if(tanque == 2){
        StaticTextValTanque2->SetLabel(mystring);
    }

}

void Projeto1Frm::OnSpinCtrl2Change(wxSpinEvent& event)
{
   if (ValTanque2Atual <= 100)
   {
        ValTanque2Atual = ValTanque2Atual+1;
        SetValores(ValTanque2Atual, 2);
   }
}

void Projeto1Frm::OnSpinCtrl1Change(wxSpinEvent& event)
{
    if (ValTanque1Atual <= 100)
    {
        ValTanque1Atual = ValTanque1Atual+1;
        SetValores(ValTanque1Atual, 1);
    }
}

void Projeto1Frm::OnBitmapButtonV1inClick(wxCommandEvent& event)
{
    BitmapButtonV1in->Hide();
    StaticBoxTanque1->Disable();

}
void Projeto1Frm::OnBitmapButtonV1ouClick(wxCommandEvent& event)
{
    BitmapButtonV1in->Show();
    StaticBoxTanque1->Enable();

}

void Projeto1Frm::OnBitmapButtonV2inClick(wxCommandEvent& event)
{
    BitmapButtonV2in->Hide();
    StaticBoxTanque2->Disable();


}
void Projeto1Frm::OnBitmapButtonV2ouClick(wxCommandEvent& event)
{
    BitmapButtonV2in->Show();
    StaticBoxTanque2->Enable();

}


void Projeto1Frm::OnBitmapButtonV3inClick(wxCommandEvent& event)
{
    BitmapButtonV3in->Hide();


}
void Projeto1Frm::OnBitmapButtonV3ouClick(wxCommandEvent& event)
{
    BitmapButtonV3in->Show();

}

void Projeto1Frm::OnBitmapButtonV4inClick(wxCommandEvent& event)
{
    BitmapButtonV4in->Hide();


}
void Projeto1Frm::OnBitmapButtonV4ouClick(wxCommandEvent& event)
{
    BitmapButtonV4in->Show();

}
void Projeto1Frm::OnBitmapButtonV5inClick(wxCommandEvent& event)
{
    BitmapButtonV5in->Hide();


}
void Projeto1Frm::OnBitmapButtonV5ouClick(wxCommandEvent& event)
{
    BitmapButtonV5in->Show();

}

void Projeto1Frm::SetGauge(int T1, int T2, int T3)
{
    GaugeT1->SetValue(T1);
    GaugeT2->SetValue(T2);
    GaugeT3->SetValue(T3);
}
void Projeto1Frm::ZeraPainel()
{
    SpinCtrlTanque1->SetValue(0);
    SpinCtrlTanque2->SetValue(0);
}
