#include <wx/wx.h>

class Log{
    int usuario_id;
    int evento;
    wxString data;
    wxString hora;
public:
    void Salva_Log(int ev);
};
