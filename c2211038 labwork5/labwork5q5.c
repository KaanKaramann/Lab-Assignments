#include <stdio.h>
#include <math.h>

int main() {
    double x, result;

    printf("Enter a real number: ");
    scanf("%lf", &x);

    if (x >= 0) {
        result = pow(x, 6);
        result = ceil(result);

        printf("x^6 (rounded upward) is %.2lf\n", result);
    } else {
        printf("Error: The power cannot be calculated for negative numbers\n");
    }

    return 0;
}