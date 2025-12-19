#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int R = 5 + (a + 1) / 2;
    int HEIGHT = 5;
    int WIGHT = a;

    int totalstr = 2 * (R - 1) + 1;

    for (int i = 0; i < R; i++)
    {
        int mysrt = 1 + 2 * i;
        int havespa = (totalstr - mysrt) / 2;

        for (int s = 0; s < havespa; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < mysrt; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    int space = (totalstr - WIGHT) / 2;
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        for (int j = 0; j < WIGHT; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
