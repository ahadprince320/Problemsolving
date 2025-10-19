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
    int index,value;
    scanf("%d %d",&index,&value);

    for (int i = N; i >=index+1; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=value;
    
    for (int i = 0; i <=N; i++)
    {
        printf("%d ",arr[i]);
       
    }
     return 0;
}
