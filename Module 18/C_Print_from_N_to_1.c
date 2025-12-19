#include <stdio.h>

void printNumbers(int i, int N) {
    if (i > N) {
        return;
    }
    printNumbers(i + 1, N);
    printf("%d ", i);
}

int main() {
    int N;
    scanf("%d", &N);

    printNumbers(1, N);

    return 0;
}
