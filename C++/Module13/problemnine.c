#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int val=N+2;
    int space=0;
    for (int i = 0; i <= N; i++)
    {
        for (int i =1; i <=space; i++)
        {
            printf(" ");
        }
        
        for (int i = 0; i <val; i++)
        {
            printf("*");
        }
        printf("\n");
        val-=2;
        space++;
    }
     
     return 0;
}
