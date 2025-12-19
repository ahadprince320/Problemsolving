#include <stdio.h>

int main()
{
    int n, y;
    scanf("%d %d", &n, &y);

    if (n != y)
    {
        printf("NO\n");
        return 0;
    }

    int arr[n][y];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {

            if (i == j)
            {
                if (arr[i][j] != 1)
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else if (i + j == n - 1)
            {
                if (arr[i][j] != 1)
                {
                    printf("NO\n");
                    return 0;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }

    printf("YES\n");
    return 0;
}
