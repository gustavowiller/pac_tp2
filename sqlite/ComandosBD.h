#ifndef H_COMANDOBD
#define H_COMANDOBD

#include "wxsqlite3.h"
//#include <stdpaths.h>

class ComandosBD{

public:
    void InserirUsuarios();
    int InsertSql(wxString sql);
    int SelectSql(wxString sql);
};




#endif
