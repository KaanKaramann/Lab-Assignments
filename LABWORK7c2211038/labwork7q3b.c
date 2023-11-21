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

    int totalFemaleAge = 0, totalMaleAge = 0;
    int countFemale = 0, countMale = 0;

    for (i = 0; i < n; ++i) {
        if (genders[i] == 'F') {
            totalFemaleAge += ages[i];
            countFemale++;
        } else if (genders[i] == 'M') {
            totalMaleAge += ages[i];
            countMale++;
        }
    }

    if (countFemale > 0) {
        printf("Average age of female workers: %.2f\n", (float)totalFemaleAge / countFemale);
    } else {
        printf("No female workers in the data.\n");
    }

    if (countMale > 0) {
        printf("Average age of male workers: %.2f\n", (float)totalMaleAge / countMale);
    } else {
        printf("No male workers in the data.\n");
    }

    return 0;
}