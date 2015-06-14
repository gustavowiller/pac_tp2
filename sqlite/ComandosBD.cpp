#include"ComandosBD.h"

void ComandosBD::InserirUsuarios(){
    const wxString gszFile = _T("test.db"); 
    //remove(gszFile.mb_str());  
    wxSQLite3Database* db = new wxSQLite3Database(); 
    db->Open(gszFile); 
    wxString sql =  "insert into usuarios(id, nome, login, senha) values(null, 'luis paulo', 'luis2', '123');";
    wxSQLite3Statement st = db->PrepareStatement(sql);
    wxSQLite3ResultSet q1 = st.ExecuteQuery();
    db->Close();  
}

int ComandosBD::InsertSql(wxString sql){
    //wxLogMessage(sql);
    const wxString gszFile = _T("test.db"); 
    //remove(gszFile.mb_str());  
    wxSQLite3Database* db = new wxSQLite3Database(); 
    db->Open(gszFile); 
    wxSQLite3Statement st = db->PrepareStatement(sql);
    wxSQLite3ResultSet q1 = st.ExecuteQuery();
    db->Close();
    return 1;
}

int ComandosBD::SelectSql(wxString sql){
    int id = 0;
    //wxLogMessage(sql);
    const wxString gszFile = _T("test.db"); 
    //remove(gszFile.mb_str());  
    wxSQLite3Database* db = new wxSQLite3Database(); 
    db->Open(gszFile); 
    wxSQLite3Statement st = db->PrepareStatement(sql);
    wxSQLite3ResultSet q1 = st.ExecuteQuery();
    while(q1.NextRow())
    {
        id = q1.GetInt(wxT("id"));
    }
    db->Close();
    return id;
}
