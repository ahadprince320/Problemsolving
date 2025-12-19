#include <stdio.h>

void odd_even()
{
    int x;
    scanf("%d", &x);

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }

    int even_num = 0;
    int odd_num = 0;

    for (int i = 0; i < x; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even_num++;
        }
        else
        {
            odd_num++;
        }
    }

    printf("%d %d\n", even_num, odd_num);
}

int main()
{
    odd_even();
    return 0;
}
