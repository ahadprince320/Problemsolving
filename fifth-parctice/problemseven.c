#include <stdio.h>
int main()
{
   long long int X;
   long long int Y;
    scanf("%lld %lld",&X,&Y);
   long long int summation = X + Y;
   long long int multiplication = X * Y;
   long long int subtraction = X - Y;

    printf("%lld + %lld = %lld\n%lld * %lld = %lld\n%lld - %lld = %lld\n",X,Y,summation,X,Y,multiplication,X,Y,subtraction);
    
    return 0;
}