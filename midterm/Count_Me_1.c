#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    int count[2] = {0};
    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            count[0]++;
        }
        else if (A[i] % 3 == 0)
        {
            count[1]++;
        }
    }
    printf("%d %d", count[0], count[1]);

    // for (int i = 0; i < 2; i++)
    // {
    //        printf("%d %d", count[i], count[i]);
    // }

    return 0;
}
