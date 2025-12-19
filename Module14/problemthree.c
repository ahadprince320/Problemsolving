#include<stdio.h>
int number3(){
    int N;
    scanf("%d",&N);

    if (N%2==0)
    {
        return 0;
    }else
    {
        return 1;
    }
    
    
    
}
int main(){
    
   int result = number3();
    if (result == 0) {
        printf("Even Number");
    } else {
        printf("Odd Number");
    }
    
     return 0;
}
