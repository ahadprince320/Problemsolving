#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int>v={1,2,3,4,5,2,3,100};
    auto it =find(v.begin(),v.end(),100);
    if(it==v.end()){
        cout<<"not fount";

    }else{
        cout<<"found";
    }

}