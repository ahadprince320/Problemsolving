#include <stdio.h>
int main()
{
      long long int A;
      long long int B;
      long long int C;
      long long int D;
       scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
       long long int X = A * B;
       long long int Y = C * D;
       long long int res = X - Y;
       printf("Difference = %lld",res);
    return 0;
}