#include <stdio.h>

int A[1000];

void printEvenReverse(int i) {
    
    if (i < 0)
        return;

    
    if (i % 2 == 0)
        printf("%d ", A[i]);

    
    printEvenReverse(i - 1);
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    printEvenReverse(N - 1);

    return 0;
}
