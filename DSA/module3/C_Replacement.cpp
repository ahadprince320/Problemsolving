#include<bits/stdc++.h>
using namespace std;
void value(vector<int>&a,int n){
for (int i = 0; i < n; i++)
{
    if (a[i]>0)
    {
        a[i]=1;
    }
    else if (a[i]<0)
    {
        a[i]=2;
    }
 
    
}
   for (int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{

    int n;
    cin >>n;
    vector <int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    value(a , n);
    return 0;
}