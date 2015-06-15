#include "Log.h"
#include "../sqlite/ComandosBD.h"
#include <wx/datetime.h>
void Log::Salva_Log(int ev){
    //**** Pega a data Atual *********
    wxDateTime now = wxDateTime::Now();
    wxString data_hora = now.Format();
    //wxLogMessage(data_hora);
    

        
    //Pega o usuario que esta logado no sistema
    int id_u;
    FILE *arq = fopen("sessao.dat", "rb");
    fread (&id_u, sizeof(int), 1, arq);
    
    //Converte Inteiro para Sttring
    wxString id_usuario;
    id_usuario << id_u;
    
    wxString evento;
    evento << ev;
    ComandosBD* con;
    int resultado = con->InsertSql("insert into log(id, usuario_id, evento, data_hora) values(null,"+id_usuario+","+evento+",  '"+data_hora+"');");
    if (resultado == 0){
        wxLogMessage("Erro ao salvar Log");
    }
}
