#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&arr[i]);
    }
    int j=N-1;
    int count=0;
    for (int i = 0; i < N/2; i++,j--)
    {
        while (arr[i]!=arr[j])
        {
            count=1;
            break;
        }
        
     // printf(" this is i= %d\n  this is j=%d\n",arr[i],arr[j]);
        
    }
    if (count==0)
    {
        printf("YES");
    }else
    {
         printf("NO");
    }
    
    
     return 0;
}
