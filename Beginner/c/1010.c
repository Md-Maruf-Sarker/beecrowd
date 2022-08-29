// simple calculate

#include <stdio.h>

int main() {
    int a, b;
    double c, d;
    scanf("%d %d %lf", &a, &b, &c);
    d = b * c;
    scanf("%d %d %lf", &a, &b, &c);
    d += b * c;
    printf("VALOR A PAGAR: R$ %.2lf\n", d);

return 0;
}