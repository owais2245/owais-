#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Entered no. is -ve\n");
    } else {
        printf("Entered no. is +ve or zero\n");
    }

    return 0;
}