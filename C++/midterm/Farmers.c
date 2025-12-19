#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int total=M1+M2;
        int nday=(M1 * D) / total;
         int days = D - nday;
        printf("%d\n",days);
    }

    return 0;
}
