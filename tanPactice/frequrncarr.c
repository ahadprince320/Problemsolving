#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count[6] = {0};
    for (int i = 0; i < N; i++)
    {
        count[arr[i]]++;
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d \n", count[i]);
       
    }

    return 0;
}
