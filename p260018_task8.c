#include <stdio.h>
int main() {
    double principal_amount=250000; //in pkr
    float rate=8.5; //8.5%
    int time=3; //in years
    printf("========== BANK LOAN INTEREST SUMMARY ==========\n");
    printf("Principal Amount:    \t\tPKR %.2f \n",principal_amount);
    printf("Annual Interest rate:\t\t%.2f%%\n",rate);
    printf("Loan duration:       \t\t%d Years\n",time);
    printf("------------------------------------------------\n");
    double I=(principal_amount*rate*time)/100.00;
    printf("Total Accrued interest:\tPKR %.2f\n",I);
    printf("Total Payable Amount:  \tPKR %.2f\n",principal_amount+I);
    printf("Monthly Installment:  \tPKR %.2f\n",(principal_amount+I)/(time*12.0));
    printf("================================================");
    return 0;
}