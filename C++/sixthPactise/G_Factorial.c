#include <stdio.h>
int main()
{
    long long int t;
    scanf("%lld", &t);
    for (int i = 1; i <= t; i++)
    {
       // printf("%d\n", t);
        long long int N;
        scanf("%lld", &N);
        
       long long int val = 1;
       // printf("%d\n", N);
        for (int i = 1; i <= N; i++)
        {
           val*=i;

          
        }
      printf("%lld\n",val);
    }
        return 0;

}
