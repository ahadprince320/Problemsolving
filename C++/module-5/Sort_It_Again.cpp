#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int cls;
    char section;
    long long id;
    int math;
    int eng;
};
bool cmp(Student a, Student b)
{
    if (a.eng != b.eng)
        return a.eng > b.eng;
    if (a.math != b.math)
        return a.math > b.math;
    return a.id < b.id;
}

int main()
{
    int N;
    cin >> N;

    vector<Student> students(N);

    for (int i = 0; i < N; i++)
    {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math >> students[i].eng;
    }

    sort(students.begin(), students.end(), cmp);

    for (int i = 0; i < N; i++)
    {
        cout << students[i].name << " "
             << students[i].cls << " "
             << students[i].section << " "
             << students[i].id << " "
             << students[i].math << " "
             << students[i].eng << endl;
    }

    return 0;
}
