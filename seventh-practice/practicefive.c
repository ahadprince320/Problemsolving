#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int arr[a];
    //printf("hello");
    for (int i = 0; i < a; i++)
    {
        //printf("%d",i);
        while (i%2==0)
        {
          printf("%d\n",i);
          break;
        }
        
    }
    
     return 0;
}
