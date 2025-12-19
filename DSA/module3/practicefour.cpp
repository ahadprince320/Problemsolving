#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,2,5,2,6,2,8};
    vector<int>v2={100,200,300};

    replace(v.begin(),v.end(),2,100);
    // auto it=find(v.begin(),v.end(),100);
    for (int x:v)
    {
       cout <<x<<" ";
    }
    
}