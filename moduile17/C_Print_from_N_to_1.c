#include <stdio.h>
void value(int N)
{
    if (N == 0)
    {
        return;
    }
    printf("%d", N);

    if (N > 1)
    {
        printf(" ");
    }
    value(N - 1);
}
int main()
{
    int N;
    scanf("%d", &N);
    value(N);
    return 0;
}
