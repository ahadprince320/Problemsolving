#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < b; j++)
    {
        printf("%d ", arr[a - 1][j]);
    }
    printf("\n");

    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i][b - 1]);
    }

    return 0;
}
