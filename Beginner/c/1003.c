// area of a circle

#include <stdio.h>

int main() {
    double A, R, pi;
    pi = 3.14159;
    scanf("%lf",&R);
    A = pi * R * R;
    printf("A=%.4f\n", A);

return 0;
}