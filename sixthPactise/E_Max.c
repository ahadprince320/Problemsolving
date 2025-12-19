#include<stdio.h>
int main(){
    int N; 
    scanf("%d",&N);
    int mx=0;
    for (int i = 1; i <=N; i++)
    {
        int val;

        scanf("%d",&val);
        if (val>mx)
        {
            mx=val;
        }
        
    }
     
     printf("%d",mx);
     return 0;
}
