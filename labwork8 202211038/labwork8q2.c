#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    printf("Triplets (a, b, c) satisfying a^2 + b^2 = c^2 for 1 <= a, b, c <= %d:\n", n);
    
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            for (int c = 1; c <= n; c++) {
                if (a * a + b * b == c * c) {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }

    return 0;
}