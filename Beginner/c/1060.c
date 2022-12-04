// Write a program 

#include <stdio.h>

int main() {
    int t = 6, count = 0;
    float n;

    while(t--){
        scanf("%f", &n);
        if(n > 0) count++;
    }
    printf("%d valores positivos\n", count);

return 0;
}