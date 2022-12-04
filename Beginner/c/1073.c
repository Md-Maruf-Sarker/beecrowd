// Write a program 

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 2; i <= n; i += 2)
        printf("%d^%d = %d\n", i, 2, i * i);

return 0;
}