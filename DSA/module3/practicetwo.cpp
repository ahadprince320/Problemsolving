#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v ={1,2,3,4};
    vector<int>v2={100,200,300};

    v.erase(v.begin()+2);
    for (int x:v)
    {
       cout<<x<< " ";
    }
    
}