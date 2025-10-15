#include<stdio.h>
int main(){
    int t;
    scanf("%d \n",&t);
    for (int i = 1; i <=t; i++)
    {
        int N;
        scanf("%d\n",&N);
        do
        {
         printf("%d ",N%10);
         N/=10;
        } while (N!=0);
        printf("\n");
    }
    
     return 0;
}
