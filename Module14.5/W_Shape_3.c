#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int res = 1;
    int val = N - 1;
    int resl;

    for (int i = 0; i < N; i++) {
        for (int k = 0; k < val; k++) {
            printf(" ");
        }

        for (int j = 0; j < res; j++) {
            printf("*");
        }

        printf("\n");
        resl = res += 2;
        val--;
    }

    for (int j = 0; j < resl - 2; j++) {
        printf("*");
    }
    printf("\n");

    int spaces = 1;
    int stars = resl - 4;

    for (int i = 0; i < N - 1; i++) {
        for (int k = 0; k < spaces; k++) {
            printf(" ");
        }

        for (int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
        spaces++;
        stars -= 2;
    }

    return 0;
}
