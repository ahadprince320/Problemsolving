#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s, x;
        cin >> s >> x;

        string::size_type pos = 0;

        while ((pos = s.find(x, pos)) != string::npos) {
            s.replace(pos, x.length(), "#");
            pos += 1;
        }

        cout << s << endl;
    }

    return 0;
}
