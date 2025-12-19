#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val;
    scanf("%d", &val);

    while (val--)
    {
        int n;
        scanf("%d", &n);
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (b[j] > b[j + 1])
                {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
            printf("%d ", abs(a[i] - b[i]));
        printf("\n");
    }

    return 0;
}
