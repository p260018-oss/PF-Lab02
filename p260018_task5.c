#include <stdio.h>
int main() {
    float Celsius=37.5;
    float Fahrenheit=(Celsius*9.0/5.0)+32.0;
    float Kelvin=Celsius+273.15;
    printf("========== TEMPERATURE CONVERSION ==========\n");
    printf("Temperature in celsius:   \t\t%.2f °C\n",Celsius);
    printf("Temperature in fahrenheit:\t\t%.2f °F\n",Fahrenheit);
    printf("Temperature in kelvin:    \t\t%.2f K\n",Kelvin);
    printf("============================================");
    return 0;
}