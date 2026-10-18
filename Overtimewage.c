#include <stdio.h>

int main(void) {
    float dailyWage, normalHourly, overtimeWage, totalWage;
    int overtimeHours;

    printf("Enter daily wage: ");
    scanf("%f", &dailyWage);

    printf("Enter overtime hours: ");
    scanf("%d", &overtimeHours);

    normalHourly = dailyWage / 8;
    overtimeWage = overtimeHours * normalHourly * 1.5f;
    totalWage = dailyWage + overtimeWage;

    printf("\nNormal hourly wage = Rs. %.2f\n", normalHourly);
    printf("Overtime wage = Rs. %.2f\n", overtimeWage);
    printf("Total daily wage = Rs. %.2f\n", totalWage);

    return 0;
}
