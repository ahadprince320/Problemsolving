#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int val[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &val[i][j]);
        }
    }

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < N; i++)
    {
        primarySum += val[i][i];
        secondarySum += val[i][N - i - 1];
    }

    int resu = abs(primarySum - secondarySum);
    printf("%d", resu);
    return 0;
}
