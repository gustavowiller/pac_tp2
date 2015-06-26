#include <wx/wxsqlite3.h>
#include <wx/stdpaths.h>

class SampleApp : public wxApp
{
public:
	virtual bool OnInit()
	{
		try
		{
			wxStandardPaths paths;
			wxString fileName = paths.GetUserDataDir() + wxFILE_SEP_PATH + wxT("Sample.db");
			if(!wxDirExists(paths.GetUserDataDir())) wxMkdir(paths.GetUserDataDir());
			bool needCreate(false);
			if(!wxFileExists(fileName)) needCreate = true;
			wxSQLite3Database dataBase;
			dataBase.Open(fileName);
			if(!dataBase.IsOpen()) return false;
			wxSQLite3ResultSet result;
			if(!needCreate)
			{
				result = dataBase.ExecuteQuery(wxT("SELECT * FROM sqlite_master WHERE type='table'"));
				needCreate = (!result.IsOk() || !result.NextRow());
				if(result.IsOk()) result.Finalize();
			}
			if(needCreate)
			{
				dataBase.Begin();
				dataBase.ExecuteUpdate(
					wxT("CREATE TABLE SampleTable (ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL, Name VARCHAR(32))"));
				for(int i = 0; i < 5; i++)
				{
					dataBase.ExecuteUpdate(wxString::Format(
						wxT("INSERT INTO SampleTable (Name) VALUES ('%i')"), rand()));
				}
				dataBase.Commit();
			}
			result = dataBase.ExecuteQuery(wxT("SELECT * FROM SampleTable"));
			if(result.IsOk())
			{
				while(result.NextRow())
				{
					wxLogTrace(wxTraceMask(), result.GetString(wxT("Name")));
				}
				result.Finalize();
			}
		}
		catch(wxSQLite3Exception ex)
		{
			wxMessageBox(ex.GetMessage());
		}
		return false;
	}
};

