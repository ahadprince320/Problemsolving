#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    // int val=N;
    int val =1;
    int space=N-1;
    for (int i = 0; i <= N; i++)
    {
        for (int i = 0; i <= space; i++)
        {
           printf(" ");
        }
        
        for (int j = 0; j<val; j++)
        {
            
            printf("*");
        }
        printf("\n");
        val+=1;
        space--;
    }
    
     return 0;
}
