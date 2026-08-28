#include <stdio.h>
int main() {
    float marks_PF=88.0;
    float credithours_PF=3.0;
    float marks_calc_AG=76.5;
    float credithours_calc_AG=3.0; 
    float marks_AP=82.0;
    float total_weighted_score=(88.0*3.0)+(76.5*3.0)+(82.0*2.0);
    float total_credit_hours=3.0+3.0+2.0;
    float avg_percentage=total_weighted_score/total_credit_hours;
    float credithours_AP=2;
    printf("=========== SEMESTER ACADEMIC REPORT ===========\n");
    printf("Course\t\tCredit Hours\t\tObtained Mars\n");
    printf("------------------------------------------------\n");
    printf("PF:\t\t\t%.2f\t\t\t\t%.2f\n",credithours_PF,marks_PF);
    printf("Calculus:\t%.2f\t\t\t\t%.2f\n",credithours_calc_AG,marks_calc_AG);
    printf("AP:\t\t\t%.2f\t\t\t\t%.2f\n",credithours_AP,marks_AP);
    printf("------------------------------------------------\n");
    printf("Total Credits:\t%.2f\tWeighted Average:\t%.2f%%\n",total_credit_hours,avg_percentage);
    printf("================================================");
    return 0;
}