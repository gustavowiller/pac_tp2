///-----------------------------------------------------------------
///
/// @file      Sem T�tulo1Frm.cpp
/// @author    LuisPaulo
/// Created:   09/06/2015 17:58:00
/// @section   DESCRIPTION
///            Login class implementation
///
///------------------------------------------------------------------

#include "loginFrm.h"
#include "../Log/Log.h"
#include "../sqlite/ComandosBD.h"
#include "../Md5/md5.h"




//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// Login
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(Login,wxFrame)
	////Manual Code Start
	////Manual Code End

	EVT_CLOSE(Login::OnClose)
	EVT_BUTTON(ID_WXBUTTON2,Login::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,Login::WxButton1Click)
END_EVENT_TABLE()
////Event Table End

Login::Login(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, wxDefaultPosition, size, style)
{
	CreateGUIControls();

}

Login::~Login()
{
}

void Login::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxButton2 = new wxButton(this, ID_WXBUTTON2, wxT("Sair"), wxPoint(159, 103), wxSize(65, 22), 0, wxDefaultValidator, _("WxButton2"));

	WxButton1 = new wxButton(this, ID_WXBUTTON1, _("Entrar"), wxPoint(58, 103), wxSize(65, 22), 0, wxDefaultValidator, _("WxButton1"));

	WxEdit2 = new wxTextCtrl(this, ID_WXEDIT2, _(""), wxPoint(13, 74), wxSize(260, 20), wxTE_PASSWORD);

	WxEdit1 = new wxTextCtrl(this, ID_WXEDIT1, _(""), wxPoint(10, 26), wxSize(261, 20), 0, wxDefaultValidator, _("WxEdit1"));

	WxStaticText2 = new wxStaticText(this, ID_WXSTATICTEXT2, _("Senha"), wxPoint(13, 58), wxDefaultSize, 0, _("WxStaticText2"));

	WxStaticText1 = new wxStaticText(this, ID_WXSTATICTEXT1, _("Usu�rio"), wxPoint(11, 8), wxDefaultSize, 0, _("WxStaticText1"));


	SetTitle(_("Login"));
	SetSize(8,8,291,173);
	Center();

	////GUI Items Creation End
}

void Login::OnClose(wxCloseEvent& event)
{
	Destroy();
	exit(0);
}

/*
 * WxButton2Click
 */
void Login::WxButton2Click(wxCommandEvent& event)
{
	Log* S_Log;
    S_Log->Salva_Log(8);
    Destroy();
    exit(0);

}

/*
 * WxButton1Click
 */
void Login::WxButton1Click(wxCommandEvent& event)
{

    wxIcon icon3(wxT("images.ico"), wxBITMAP_TYPE_ICO, 16, 16);
	// insert your code here
    wxString login = WxEdit1->GetValue();
	wxString senha = WxEdit2->GetValue();
	ComandosBD* con;
    int usuario_id = con->SelectSql("select id from usuarios where usuarios.login = '"+login+"' and senha = '"+md5(std::string(senha.mb_str()))+"';");
    if (usuario_id != 0){
        int is_admin = con->SelectSql("select is_admin as id from usuarios where usuarios.login = '"+login+"';");
        Projeto1Frm* frame = new Projeto1Frm(NULL,is_admin);
         //Salvar sess�o usuario
        FILE *arq = fopen("sessao.dat","wb");
        fwrite(&usuario_id,sizeof(int),1,arq);
        fclose(arq);

        Log* S_Log;
        S_Log->Salva_Log(1);

        frame->SetIcon(icon3);
        frame->Maximize(TRUE);
        frame->Show();
        Destroy();
    }else{
        wxLogMessage("Usuario ou senha incorreto!");
        Log* S_Log;
        S_Log->Salva_Log(2);
    }

}
