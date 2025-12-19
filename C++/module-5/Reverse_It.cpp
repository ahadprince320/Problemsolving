#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    int id;
};

int main()
{
    int N;
    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id;
    }

    int l = 0, r = N - 1;
    while (l < r)
    {
        swap(students[l].section, students[r].section);
        l++;
        r--;
    }

    for (int i = 0; i < N; i++)
    {
        cout << students[i].name << " "
             << students[i].cls << " "
             << students[i].section << " "
             << students[i].id << endl;
    }

    return 0;
}
