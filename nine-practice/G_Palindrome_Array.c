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
    arr[N]=arr[j];
    int value=1;
    for (int i = 0; i <N/2; i++,j--)
    {
        if (arr[i] != arr[j])
        {
           value=0;
         
        }
        
    }
      if (value)
        {
            printf("YES");
        }else{
            printf("NO");
        }
     return 0;
}
