#include <stdio.h>
int main() {
    double basic_salary=85000.00;
    printf("========== MONTHLY SALARY SLIP ==========\n");
    printf("Basic Salary:           \tPKR %.2f\n",basic_salary);
    printf("House Rent Allowance:   \tPKR %.2f\n",0.20*basic_salary);
    printf("Medical Allowane:       \tPKR %.2f\n",0.10*basic_salary);
    printf("------------------------------------------------\n");
    double gross_salary=basic_salary+(0.20*basic_salary)+(0.10*basic_salary);
    printf("Gross salary: \t\t\t\tPKR %.2f\n",gross_salary);
    printf("Tax Deduction:\t\t\t\tPKR %.2f\n",0.05*gross_salary);
    printf("------------------------------------------------\n");
    printf("Net Payable salary\t\t\tPKR %.2f\n",gross_salary-(0.05*gross_salary));
    printf("================================================");
    return 0;
}