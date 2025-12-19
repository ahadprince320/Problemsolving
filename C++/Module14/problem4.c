#include <stdio.h>

// আর্গুমেন্ট আছে, রিটার্নও আছে
int evenOdd4(int n) {
    if (n % 2 == 0)
        return 0; 
    else
        return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = evenOdd4(num); // ফাংশন আর্গুমেন্ট নিচ্ছে এবং রিটার্ন করছে
    if (result == 0){
        printf("%d is Even\n", num);

    }
    else{
        printf("%d is Odd\n", num);

    }

    return 0;
}
