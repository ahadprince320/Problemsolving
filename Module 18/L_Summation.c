#include <stdio.h>

long long sumArray(long long arr[], int index) {
    if (index < 0) {
        return 0;
    }
    return arr[index] + sumArray(arr, index - 1);
}

int main() {
    int N;
    scanf("%d", &N);

    long long arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%lld", &arr[i]);
    }

    long long result = sumArray(arr, N - 1);

    printf("%lld", result);

    return 0;
}
