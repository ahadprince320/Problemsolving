#include<stdio.h>
int main(){

    long long int N;
    scanf("%lld",&N);
    
    if (N>0)
    {
        for (int i = 0; i < N; i++)
        {
            printf("%d ",i+1);
        }
        
    }
    else
    {
       for (int i = N; i <= 0; i++)
        {
            printf("%d ",i);
        }
    }
    
     return 0;
}
