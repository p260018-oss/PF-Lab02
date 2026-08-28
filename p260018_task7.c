#include <stdio.h>
int main() {
    float vi=12.5;
    float a=3.2;
    float t=6.0;
    printf("========== KINEMATICS MOTION REPORT ==========\n");
    printf("Initial velocity (vi):\t\t%.2f m/s\n",vi);
    printf("Acceleration (a):     \t\t%.2f m/s^2\n",a);
    printf("Time Elapsed (t):     \t\t%.2f s\n",t);
    printf("----------------------------------------------\n");
    printf("Calculated Final Velocity (vf): %.2f m/s \n",vi+(a*t));
    printf("Calculated Distance (S):        %.2f m \n",(vi*t)+(0.5*a*t*t));
    printf("==============================================");
    return 0;
}