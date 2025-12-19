#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string S;

    while (getline(cin, S))
    {
        string T = "";

        for (char c : S)
        {
            if (c != ' ')
                T += c;
        }

        sort(T.begin(), T.end());

        cout << T << endl;
    }

    return 0;
}
