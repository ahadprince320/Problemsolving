#include <stdio.h>

void printNumbers(int i, int N) {
    if (i > N) {
        return;
    }
    printf("%d\n", i);
    printNumbers(i + 1, N);
}

int main() {
    int N;
    scanf("%d", &N);

    printNumbers(1, N);

    return 0;
}
