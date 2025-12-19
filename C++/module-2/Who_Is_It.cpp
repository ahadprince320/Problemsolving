#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int myid, mymarks;
        string myname;
        char mysection;

        int id, marks;
        string name;
        char section;

        cin >> myid >> myname >> mysection >> mymarks;

        cin >> id >> name >> section >> marks;
        if (marks > mymarks || (marks == mymarks && id < myid))
        {
            myid = id;
            myname = name;
            mysection = section;
            mymarks = marks;
        }

        cin >> id >> name >> section >> marks;
        if (marks > mymarks || (marks == mymarks && id < myid))
        {
            myid = id;
            myname = name;
            mysection = section;
            mymarks = marks;
        }

        cout << myid << " " << myname << " " << mysection << " " << mymarks << endl;
    }

    return 0;
}
