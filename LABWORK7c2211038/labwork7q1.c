#include <stdio.h>

int main() {
    int num1, num2 = 0, num;

    printf("Enter a 5-digit integer: ");
    scanf("%d", &num1);

    if (num1 < 10000 || num1 > 99999) {
        printf("Please enter a valid 5-digit integer.\n");
        return 1; 
    }

    while (num1 != 0) {
        num = num1 % 10;
        num2 = num2 * 10 + num;
        num1 /= 10;
    }

    printf("Reversed number: %d\n", num2);

    return 0; 
}