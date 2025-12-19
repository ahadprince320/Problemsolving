#include<stdio.h>
int main(){
    int X;
    scanf("%d",&X);
    int val= X/1000;
    if (val%2==0){
      printf("EVEN");
    }
    else
    {
       printf("ODD");
    }
  
    
     return 0;
} 
