// sphere

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    printf("VOLUME = %.3lf\n", (4 * 3.14159 * pow(n, 3)) / 3);
    
    return 0;
}