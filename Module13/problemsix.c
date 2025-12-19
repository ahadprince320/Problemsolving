#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int val=1;
    int space=N-1;
    for (int i = 1; i <= N; i++)
    {
        for (int i =1; i <=space; i++)
        {
            printf(" ");
        }
        
        for (int i = 1; i <=val; i++)
        {
            printf("* ");
        }
        printf("\n");
        val++;
        space--;
    }
     
     return 0;
}
