#include <stdio.h>
#include<stdlib.h>
int main()
{
    long long int N;
    long long int count = 0;
    scanf("%lld",&N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        count = arr[i] + count;
     
        
    }
    printf("%lld", llabs(count));
    return 0;
}
