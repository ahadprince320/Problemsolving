#include<stdio.h>
// আর্গুমেন্ট আছে, কিন্তু রিটার্ন নেই
int number2(int N){
 if (N%2==0)
 {
    printf("Even Number");
 }else{
    printf("Odd Number");
 }
 

}
int main(){
    int N;
    scanf("%d",&N);
     number2(N);
     return 0;
}
