#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int val=N;
     for (int i = 0; i < N; i++)
     {
        for (int j= 0; j < val; j++)
        {
        printf("*");
        
        }
        val--;
        printf("\n");
     }
     
     return 0;
}
