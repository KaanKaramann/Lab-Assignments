#include <stdio.h>

int main(void) {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Multi Table 1 to %d:\n", a);

    for (int i = 1; i <= a; i++) {
        printf("\nMulti Table  %d:\n", i);

        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0; 
}