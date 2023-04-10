#include "include/list.h"
#include "include/database.h"

int main(int arg_count, char *args[]) 
{
    if( arg_count > 1)
    {
        List simpleList;
        simpleList.name = string(args[1]);
        simpleList.print_menu();
    }
    else {
        cout << "username not supplied...exiting the program" << endl;
    }

        Database data;
        data.write();
        data.read();

    return 0;
}


