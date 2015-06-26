#ifndef H_COMANDOBD
#define H_COMANDOBD

#include <wx/wxsqlite3.h>
#include <wx/stdpaths.h>

class ComandosBD{
    
public:
    void InserirUsuarios();
    int InsertSql(wxString sql);
    int SelectSql(wxString sql);
};




#endif
