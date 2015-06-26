#include <wx/wx.h>
#include <wx/splash.h>

class Splash : public wxSplashScreen
{
    public:
    Splash	(	const wxBitmap & 	bitmap,
    long 	splashStyle,
    int 	milliseconds,
    wxWindow * 	parent,
    wxWindowID 	id,
    const wxPoint & 	pos = wxDefaultPosition,
    const wxSize & 	size = wxDefaultSize,
    long 	style = wxBORDER_SIMPLE|wxFRAME_NO_TASKBAR|wxSTAY_ON_TOP 
    );
}
