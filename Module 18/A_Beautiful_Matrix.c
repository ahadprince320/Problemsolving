#include <stdio.h>

int main() {
    int matrix[5][5];
    int r, c;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &matrix[i-1][j-1]);
            if (matrix[i-1][j-1] == 1) {
                r = i;
                c = j;
            }
        }
    }

    int moves = abs(r - 3) + abs(c - 3);
    printf("%d", moves);

    return 0;
}
