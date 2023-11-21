#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    char genders[n];
    int ages[n];

    for (i = 0; i < n; ++i) {
        printf("Enter gender code (F/M) for employee %d: ", i + 1);
        scanf(" %c", &genders[i]);
        printf("Enter age for employee %d: ", i + 1);
        scanf("%d", &ages[i]);
    }

    int female35 = 0;
    int male45 = 0;

    for (i = 0; i < n; ++i) {
        if (genders[i] == 'F' && ages[i] > 35) {
            female35++;
        } else if (genders[i] == 'M' && ages[i] < 45) {
            male45++;
        }
    }

    printf("\nNumber of female workers older than 35: %d\n", female35);
    printf("Number of male workers younger than 45: %d\n", male45);

    return 0;
}

