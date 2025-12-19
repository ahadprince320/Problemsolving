#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int res=1;
    int val=N-1;
    
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < val; k++)
        {
            printf(" ");
        }
        
        //printf("*");
        for (int i = 0; i < res; i++)
        {
            printf("*");
        }
        printf("\n");
        res+=2;
        val--;
    }
    
     return 0;
}
