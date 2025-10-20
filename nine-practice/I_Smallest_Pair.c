#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int t = 0; t < N; t++)
    {
        int a;
        scanf("%d", &a);
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);

            // printf("%d ",arr[i]);
           
        }
           int minResult;

        for (int i = 0; i < N; i++)
        {
             for (int j = i + 1; j < N; j++)
            {
                int result = arr[i] + arr[j] + (j - i);

                minResult = result;
            }
        }
        
        printf("%d\n", minResult);
    }

    return 0;
}
