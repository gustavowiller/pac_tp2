#include <wx/wx.h>
#include "wx/html/htmlwin.h"  
#include <wx/statline.h>



class Help{
public:
    wxBoxSizer topsizer; 
	wxHtmlWindow html; 
	wxDialog dlg;
	void GetHelp();
	
	};
