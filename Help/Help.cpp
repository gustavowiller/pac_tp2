#include "Help.h"

void Help::GetHelp(){
	wxBoxSizer *topsizer; 
	wxHtmlWindow *html; 
    //wxDialog dlg(this, wxID_ANY, wxString(_("About")));  
	 
	topsizer = new wxBoxSizer(wxVERTICAL); 
	html = new wxHtmlWindow(&dlg, wxID_ANY, wxDefaultPosition, wxSize(380, 160), wxHW_SCROLLBAR_NEVER); 
	
	html->SetBorders(0);  
	html->LoadPage(wxT("teste.html")); 
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
}
