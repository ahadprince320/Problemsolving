#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int val=N;
    int space=0;
    for (int i = 1; i <= N; i++)
    {
        for (int i =1; i <=space; i++)
        {
            printf(" ");
        }
        
        for (int i = 1; i <=val; i++)
        {
            printf("*");
        }
        printf("\n");
        val--;
        space++;
    }
     
     return 0;
}
