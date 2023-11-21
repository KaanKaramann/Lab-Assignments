#include <stdio.h>
#include <math.h>

int main() {
    double number, result;

    printf("Enter a number: ");
    scanf("%lf", &number);

    if (number >= 0) {
        result = sqrt(number);
        printf("The square root of %.2lf is %.2lf\n", number, result);
    } else {
        printf("Error: Square root cannot be calculated for negative numbers\n");
    }

    return 0;
}