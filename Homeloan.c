#include <stdio.h>
#include <math.h>

int main(void) {
    double loanAmount, annualRate, monthlyRate, emi;
    int tenureYears, tenureMonths;

    printf("Enter loan amount: ");
    scanf("%lf", &loanAmount);

    printf("Enter annual interest rate (%%): ");
    scanf("%lf", &annualRate);

    printf("Enter loan tenure in years: ");
    scanf("%d", &tenureYears);

    monthlyRate = annualRate / 12.0 / 100.0;
    tenureMonths = tenureYears * 12;

    if (loanAmount <= 0 || annualRate < 0 || tenureYears <= 0) {
        printf("Invalid input.\n");
        return 1;
    }

    if (monthlyRate == 0) {
        emi = loanAmount / tenureMonths;
    } else {
        double factor = pow(1 + monthlyRate, tenureMonths);

        emi = (loanAmount * monthlyRate * factor) /
              (factor - 1);
    }

    printf("\nMonthly EMI = Rs. %.2f\n", emi);

    return 0;
}
