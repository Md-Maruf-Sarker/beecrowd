// Write a program 

#include <stdio.h>

int main() {
    int t = 6, count = 0;
    double n, avg = 0, sum = 0;

    while(t--){
        scanf("%lf", &n);

        if(n > 0){
            count++;
            sum += n;
        }
    }
    avg = sum / count;
    printf("%d valores positivos\n", count);
    printf("%.1lf\n", avg);

return 0;
}