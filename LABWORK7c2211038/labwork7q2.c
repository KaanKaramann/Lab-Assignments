#include <stdio.h>

int main() {
    double a, b, result = 1;

    printf("Enter the base (a): ");
    scanf("%lf", &a);


    printf("Enter the exponent (b): ");
    scanf("%lf", &b);



    while (b > 0) {
        result *= a;
        b--;
    }


    printf("Result: %.2lf\n", result);

    return 0; 
}