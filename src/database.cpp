#include "include/database.h"

void Database::write(vector<string> list)
{
    //ofstream - output file stream; allows to write out to a file
  
    ofstream db;
    db.open("db/lists.sl"); //open the database
    if( db.is_open() ) //is_open returns a bool value to indicate if the file is open or not.
    {
        for(int list_index=0; list_index < (int)list.size(); list_index++){
             db << list[list_index] << endl;
        }
    } else 
    {
        cout << "Cannot open file for writing.\n";
    }
    db.close();
}

void Database::read()
{
    //ifstream - input file stream; allows to read in from a file
    string line;
    ifstream db;
    db.open("db/lists.sl");

    if( db.is_open() )
    { 
        while ( getline(db, line, '\n') )
        {
            cout << line << "\n";
        }
    } else {
        cout << "Cannot open file for reading.\n";
    }

    db.close();
}