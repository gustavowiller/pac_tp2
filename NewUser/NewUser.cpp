///-----------------------------------------------------------------
///
/// @file      NewUser.cpp
/// @author    LuisPaulo
/// Created:   07/06/2015 17:10:56
/// @section   DESCRIPTION
///            NewUser class implementation
///
///------------------------------------------------------------------

#include "NewUser.h"


#include "../sqlite/ComandosBD.h"
#include "../Log/Log.h"
#include "../Md5/md5.h"



//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// NewUser
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(NewUser,wxFrame)
	////Manual Code Start
	////Manual Code End

	EVT_CLOSE(NewUser::OnClose)
	EVT_ACTIVATE(NewUser::NewUserActivate0)
	EVT_BUTTON(ID_WXBUTTON1,NewUser::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

NewUser::NewUser(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

NewUser::~NewUser()
{
}

void NewUser::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Cadastrar"), wxPoint(113,171), wxDefaultSize, 0, wxDefaultValidator, _("WxButton1"));

	WxEdit3 = new wxTextCtrl(this, ID_WXEDIT3, _(""),  wxPoint(17,114), wxSize(260, 20),wxTE_PASSWORD);

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _(""), wxPoint(17,70), wxSize(260, 20), 0, wxDefaultValidator, _("WxEdit2"));

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(17,27), wxSize(260, 20), 0, wxDefaultValidator, _("WxEdit1"));

	WxStaticText3 = new wxStaticText(this, ID_WXSTATICTEXT3, _("Login"), wxPoint(17,54), wxDefaultSize, 0, _("WxStaticText3"));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("Senha"), wxPoint(17,94), wxDefaultSize, 0, _("WxStaticText2"));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Nome de usu�rio"), wxPoint(17,12), wxDefaultSize, 0, _("WxStaticText1"));

	//WxStaticTextIsAdmin = new wxStaticText(this, ID_WXSTATICTEXTISADMIN, _("Perfil Administrador"), wxPoint(17,134), wxDefaultSize, 0, _("WxStaticTextIsAdmin"));

    WxRadioButtonIsAdmin = new wxCheckBox(this, ID_WXRADIOBUTTONISADMIN, _("Administrador"),  wxPoint(17,150), wxDefaultSize, 0,wxDefaultValidator, _("WxRadioButtonIsAdmin"));
	SetTitle(_("Novo Usu�rio"));
	SetIcon(wxNullIcon);
	SetSize(8,8,340,240);
	Center();

	////GUI Items Creation End
}

void NewUser::OnClose(wxCloseEvent& event)
{
	Destroy();
}

/*
 * NewUserActivate
 */
void NewUser::NewUserActivate(wxActivateEvent& event)
{
	// insert your code here
}

/*
 * WxEdit2Updated
 */
void NewUser::WxEdit2Updated(wxCommandEvent& event)
{
	// insert your code here
}

/*
 * WxButton1Click
 */
void NewUser::WxButton1Click(wxCommandEvent& event)
{
	int usuario_id;
    // insert your code here
	wxString nome = WxEdit1->GetValue();
	wxString login = WxEdit2->GetValue();
	wxString senha = WxEdit3->GetValue();

    wxString IsAdmin =  (WxRadioButtonIsAdmin->GetValue()) ? "1" : "0";

	ComandosBD* con;
    int resultado = con->InsertSql("insert into usuarios(id, nome, login, senha,is_admin) values(null,'"+nome+"' , '"+login+"', '"+md5(std::string(senha.mb_str()))+"',"+IsAdmin+");");
    if (resultado == 1){
        wxLogMessage("Salvo com sucesso!");
        Log* S_Log;
        S_Log->Salva_Log(3);
    }



}

/*
 * NewUserActivate0
 */
void NewUser::NewUserActivate0(wxActivateEvent& event)
{
	// insert your code here
}
