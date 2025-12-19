#include <stdio.h>
int main()
{
    long long N;
    scanf("%lld", &N);
    // printf("%d\n", N);
    int first = N / 10;
    // printf("%d\n", first);
    int sec = N % 10;
    // printf("%d", sec);

    if (sec != 0 && first % sec == 0)
    {
        printf("YES\n");
    }
    else if ( first!= 0 && sec % first == 0)
    {
        printf("YES\n");
    }
    

    else
    {
        printf("NO\n");
    }

    return 0;
}
