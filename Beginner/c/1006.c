// average 2

#include <stdio.h>

int main() {
    double A,B,C,avg;
    scanf("%lf %lf %lf",&A,&B,&C);
    avg = ((A * 2) + (B * 3) + (C * 5)) / 10.0;
    printf("MEDIA = %.1lf\n",avg);

return 0;
}