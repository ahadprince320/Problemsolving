#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i = 0; i <N; i++)
    {
        scanf("%d",&arr[i]);
       // printf("%d ",arr[i]);
    }
    int index;
    scanf("%d",&index);

    for (int i = index; i <=N-1; i++)
    {
        arr[i]=arr[i+1];
    }
    N--;
    
    for (int i = 0; i <N; i++)
    {
        printf("%d ",arr[i]);
       
    }
     return 0;
}
