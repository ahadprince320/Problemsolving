#include<stdio.h>
void value(int N){
    if (N==0)
    {
     return;
    }
    
value(N-1);
printf("%d\n",N);
}
int main(){
    int N;
    scanf("%d",&N);
    value(N);
     return 0;
}
