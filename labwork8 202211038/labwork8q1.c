#include <stdio.h>

int main(void) {
    int n;

    printf("chessboard size (positive integer): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("positive integer.\n");
        return 1; 
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            char symbol = (i + j) % 2 == 0 ? 'X' : 'O';
            printf("%c ", symbol);
        }
        printf("\n");
    }

    return 0;
}