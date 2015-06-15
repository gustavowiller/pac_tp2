//---------------------------------------------------------------------------
//
// Name:        Projeto1App.cpp
// Author:      LuisPaulo / GustavoWiller
// Created:     22/05/2015 20:19:40
// Description: 
//
//---------------------------------------------------------------------------

#include "Projeto1App.h"
#include "Projeto1Frm.h"
#include <wx/splash.h>
//#include "sqlite/ComandosBD.h"
//#include "Help/help.h"
#include "wx/help.h" 
#include "wx/fs_zip.h"
#include "Login/LoginFrm.h"
#include "Log/Log.h"
#include <wx/translation.h>

IMPLEMENT_APP(Projeto1FrmApp)


bool Projeto1FrmApp::OnInit()
{   

    wxLocale::AddCatalogLookupPathPrefix(_T("lang"));
    static wxLocale locale;
	wxString language;

    
    //Faz a internacionalizaçã do programa - É utilizado a Classe wxLocale. 
    if (m_locale.Init(wxLANGUAGE_DEFAULT,
    wxLOCALE_LOAD_DEFAULT))
    {
        if(m_locale.AddCatalog(wxT("Projeto1"))){
            wxLogMessage("Carregou");
        }
    } 
     

    
    
    //InserirUsuarios();
    wxFileSystem::AddHandler(new wxZipFSHandler);  
    //m_helpController = new wxHelpController; 
    //m_helpController->Initialize(helpFilePath);
    //Inicio Splash
    //Inicia um handler para a imagem
    wxImage::AddHandler( new wxPNGHandler );
    //Adiciona a imagem a um wxBitmap
    wxBitmap image(wxT("splash.png"), wxBITMAP_TYPE_PNG);
    //Splash
    wxSplashScreen* splash = new wxSplashScreen(image,
          wxSPLASH_CENTRE_ON_SCREEN|wxSPLASH_TIMEOUT,
          3000, NULL, -1, wxDefaultPosition, wxDefaultSize,
          //3 Segundos
          wxSIMPLE_BORDER|wxSTAY_ON_TOP);
    wxYield();
    //fim splash
    Projeto1Frm* frame = new Projeto1Frm(NULL);
    SetTopWindow(frame);
    wxIcon icon3(wxT("images.ico"), wxBITMAP_TYPE_ICO, 16, 16);
    frame->SetIcon(icon3);
    frame->Show();
    
    Login* TelaLogin = new Login(NULL);
    TelaLogin->SetIcon(icon3);
    TelaLogin->Show();
    return true;
}
 
int Projeto1FrmApp::OnExit()
{   
	return 0;
	exit(0);
}

