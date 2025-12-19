#include<stdio.h>
int main(){
    int N;
    int val=1;
    scanf("%d",&N);
     for (int i = 0; i < N; i++)
     {
       // printf("*");
       for (int j = 0; j <val; j++)
       {
         printf("*");
       }
       val++;
       printf("\n");
     }
     
     return 0;
}
