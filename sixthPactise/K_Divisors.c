#include<stdio.h>
int main(){
    int N;
    scanf ("%d",&N);
    for (int i = 1; i <=N; i++)
    {
       //printf("%d",i);
       while (N%i==0)
       {
        printf("%d\n",i);
        break;
       }
       
              
    }
    
    return 0;
}