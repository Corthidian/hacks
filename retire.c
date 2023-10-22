#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc != 6) {
        printf("ERROR: Invalid number of command-line arguments.\n");
        printf("Usage: %s <initial_balance> <monthly_contribution> <annual_rate_of_return> <annual_rate_of_inflation> <years_until_retirement>\n", argv[0]);
        return 1;
    }

    double initial_balance = atof(argv[1]);
    double monthly_contribution = atof(argv[2]);
    double annual_rate_of_return = atof(argv[3);
    double annual_rate_of_inflation = atof(argv[4]);
    int years_until_retirement = atoi(argv[5]);

    if (initial_balance < 0 || monthly_contribution < 0 || annual_rate_of_return < 0 || annual_rate_of_inflation < 0 || years_until_retirement <= 0) {
        printf("ERROR: Invalid input values.\n");
        return 1;
    }
    double monthly_rate_of_return = (pow(1 + annual_rate_of_return, 1.0 / 12) - 1);
    double monthly_rate_of_inflation = (pow(1 + annual_rate_of_inflation, 1.0 / 12) - 1);
    double total_interest_earned = 0.0;

    printf("Month    Interest     Balance\n");
    for (int month = 1; month <= years_until_retirement * 12; month++) {
        double interest_earned = initial_balance * monthly_rate_of_return;
        double inflation_adjusted_interest = interest_earned / (1 + monthly_rate_of_inflation);
        double new_balance = initial_balance + inflation_adjusted_interest + monthly_contribution;

        printf("%5d $%9.2lf $%10.2lf\n", month, inflation_adjusted_interest, new_balance);

        total_interest_earned += inflation_adjusted_interest;
        initial_balance = new_balance;
    }

    printf("Total Interest Earned: $%9.2lf\n", total_interest_earned);
    printf("Total Nest Egg: $%9.2lf\n", initial_balance);

    return 0;
}
