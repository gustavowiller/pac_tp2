#include"ComandosBD.h"

void ComandosBD::InserirUsuarios(){
    //*******************   Faz a conex�o com o banco de dados
    const wxString gszFile = _T("test.db"); 
    //remove(gszFile.mb_str());  
    //Intancia a classe de conex�o
    wxSQLite3Database* db = new wxSQLite3Database(); 
    //Abre a conex�o
    db->Open(gszFile); 
    //Insere os dados atrav�s de comandos SQL
    wxString sql =  "insert into usuarios(id, nome, login, senha) values(null, 'luis paulo', 'luis2', '123');";
    wxSQLite3Statement st = db->PrepareStatement(sql);
    //Executa o camando
    wxSQLite3ResultSet q1 = st.ExecuteQuery();
    //fecha a conex�o
    db->Close();  
}

int ComandosBD::InsertSql(wxString sql){
    const wxString gszFile = _T("test.db"); 
    wxSQLite3Database* db = new wxSQLite3Database(); 
    db->Open(gszFile); 
    //Insere os dados atrav�s de comandos SQL
    wxSQLite3Statement st = db->PrepareStatement(sql);
    wxSQLite3ResultSet q1 = st.ExecuteQuery();
    db->Close();
    return 1;
}

int ComandosBD::SelectSql(wxString sql){
    int id = 0;
    const wxString gszFile = _T("test.db"); 
    wxSQLite3Database* db = new wxSQLite3Database(); 
    db->Open(gszFile); 
    ///**** Consulta os dados attrav�s de comando sql
    wxSQLite3Statement st = db->PrepareStatement(sql);
    wxSQLite3ResultSet q1 = st.ExecuteQuery();
    // ******* Pega os dados da query executada e coloca em vari�veis para ser posteriormente utilizado
    while(q1.NextRow())
    {
        id = q1.GetInt(wxT("id"));
    }
    db->Close();
    return id;
}
