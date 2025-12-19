#include <stdio.h>
#include <string.h>
int main()
{

    char s[10000001];
    scanf("%s", s);
   
    int val = strlen(s);
   
    int fre[26] = {0};
    for (int i = 0; i < val; i++)
    {
        fre[s[i] - 'a']++;
     
    }
    for (int i = 0; i < 26; i++)
    {
        if (fre[i] != 0)
        {
            printf("%c : %d\n", 'a' + i, fre[i]);
        }
    }

    return 0;
}
