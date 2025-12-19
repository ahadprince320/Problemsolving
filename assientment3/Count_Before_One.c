#include <stdio.h>


int count_before_one(int arr[], int N) {
    int value = 0;

    for (int i = 0; i < N; i++) {
        if (arr[i] == 1) {
            break;  
        }
        value++;
    }

    return value;
}

int main() {
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }

    int myRes = count_before_one(arr, a);
    printf("%d\n", myRes);
    return 0;
}
