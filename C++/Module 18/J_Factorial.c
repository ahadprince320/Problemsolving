#include <stdio.h>

long long fact(long long n) {
    if (n == 1)   
        return 1;
    return n * fact(n - 1);  
}

int main() {
    long long N;
    scanf("%lld", &N);

    long long result = fact(N);
    printf("%lld\n", result);

    return 0;
}
