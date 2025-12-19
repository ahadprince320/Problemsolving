#include <stdio.h>
#include <string.h>

int is_palindrome(char val[])
{
    int Myln = strlen(val);
    for (int i = 0; i < Myln / 2; i++)
    {
        if (val[i] != val[Myln - 1 - i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char a[1001];

    scanf("%s", a);

    int value = is_palindrome(a);

    if (value == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}
