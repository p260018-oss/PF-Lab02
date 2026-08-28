#include <stdio.h>
int main() {
    float radius=7.5;
    const float pi =3.14159;
    printf("========== CIRCLE GEOMETRY REPORT ==========\n");
    printf("Given Radius:             \t%.3f cm\n",radius);
    printf("Calculated Diameter:      \t%.3f cm\n",radius*2);
    printf("Calculated Circumference: \t%.3f cm\n",2*pi*radius);
    printf("Calculated Area:          \t%.3f sq.cm\n",pi*radius*radius);
    printf("============================================\n");

    return 0;
}