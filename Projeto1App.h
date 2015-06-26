//---------------------------------------------------------------------------
//
// Name:        Projeto1App.h
// Author:      LuisPaulo
// Created:     22/05/2015 20:19:40
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __PROJETO1FRMApp_h__
#define __PROJETO1FRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

///WxLocale
#include <wx/intl.h>
class Projeto1FrmApp : public wxApp
{
    protected:
        wxLocale m_locale;    
	public:
        wxLocale *objLocale;
        wxString m_language;
		bool OnInit();
		int OnExit();

};

#endif
