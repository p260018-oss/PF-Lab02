#include <stdio.h>
int main() {
    int a=20;
    char b='M';
    float c=1.134;
    double d=11.45671;
    printf("Type Name\tVariable Value\t Size in Memory\n");
    printf("--------------------------------------------\n");
    printf("Char \t \t '%c' \t  \t\t\t%dbyte(s)\n",b,sizeof(b));
    printf("Int \t \t  %d \t \t\t\t%dbyte(s)\n",a,sizeof(a));
    printf("Float \t \t  %f \t\t\t%dbyte(s)\n",c,sizeof(c));
    printf("Double \t \t  %f \t\t%dbyte(s)\n",d,sizeof(d));
    printf("--------------------------------------------\n");
    return 0;
}