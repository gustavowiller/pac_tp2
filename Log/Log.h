#include <wx/wx.h>

class Log{
    int usuario_id;
    int evento;
    wxString data;
    wxString hora;

public:
    void Salva_Log(int ev);
    void Salva_Log_Valvula(int id_valvula,int status_valvula);
};
