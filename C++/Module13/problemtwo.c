#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int val=N;

    for (int i = 0; i <= N; i++)
    {
        for (int j = 1; j<=val; j++)
        {
            
            printf("*");
        }
        printf("\n");
        val--;
    }
    
     return 0;
}
