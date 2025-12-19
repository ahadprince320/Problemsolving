#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        long long S, D, F, G;
        scanf("%lld %lld %lld %lld", &S, &D, &F, &G);

        long long Myproduc = D * F * G;

        if (Myproduc == 0) {
            if (S == 0)
                printf("0\n");
            else
                printf("-1\n");
        }
        else {
            if (S % Myproduc == 0)
                printf("%lld\n", S/ Myproduc);
            else
                printf("-1\n");
        }
    }

    return 0;
}
