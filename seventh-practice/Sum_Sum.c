#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int pos = 0, neg = 0;
    int V;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &V);
        if (V > 0)
        {
            pos += V;
        }
        else if (V < 0)
        {
            neg += V;
        }
    }
    printf("%d %d", pos, neg);
    return 0;
}
