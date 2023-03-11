#include <iostream>
#include "studentInfo.h"


using namespace std;

int main()
{
    studentInfo students;

    students.InsertItem(15234,"Jon",2.6);
    students.InsertItem(13732,"Tyrion",3.9);
    students.InsertItem(13569,"Sandor",1.2);
    students.InsertItem(15467,"Ramsey",3.1);
    students.InsertItem(16285,"Arya",3.1);


    bool studentFound;
    students.DeleteItem(15467);

    students.RetrieveItem(13569,studentFound);

    students.PrintList();
}
