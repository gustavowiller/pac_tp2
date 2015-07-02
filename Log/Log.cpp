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

void Log::Salva_Log_Valvula(int id_valvula,int status_valvula){
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

    wxString status;
    status << status_valvula;
    wxString valvula;
    valvula << id_valvula;

    ComandosBD* con;
    int resultado = con->InsertSql("insert into log_valvula(id, valvula_id, status, usuario, data) values(null,"+valvula+",'"+status+"',"+id_usuario+",  '"+data_hora+"');");
    if (resultado == 0){
        wxLogMessage("Erro ao salvar Log Valvula");
    }
}



void Log::Salva_Log_Processo(int t1,int t2, int t3, int e1, int e2){
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

    wxString wt1;
    wt1 << t1;
    wxString wt2;
    wt2 << t2;
    wxString wt3;
    wt3 << t3;
    wxString we1;
    we1 << e1;
    wxString we2;
    we2 << e2;

    ComandosBD* con;
    int resultado = con->InsertSql("insert into log_processo(id, tanque_1, tanque_2, tanque_3, entrada_tanque_1, entrada_tanque_2, usuario, data) values(null,"+wt1+","+wt2+","+wt3+"',"+we1+","+we2+"',"+id_usuario+",  '"+data_hora+"');");
    if (resultado == 0){
        wxLogMessage("Erro ao salvar Log Valvula");
    }
}
