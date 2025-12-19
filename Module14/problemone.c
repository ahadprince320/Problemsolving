#include<stdio.h>
// কোন আর্গুমেন্ট নেই, কোন রিটার্ন নেই
void number1(){
   int n;
   scanf("%d",&n);
   if (n%2==0)
   {
    printf("even number");
   }else{
     printf("odd number");
   }
   
}

int main(){
    number1();
     return 0;
}
