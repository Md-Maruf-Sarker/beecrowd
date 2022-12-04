// Write a program 

#include <stdio.h>

int main() {
    int t = 5, count = 0;

    while(t--){
        int n;
        scanf("%d", &n);

        if(n % 2 == 0) count++;
    }

    printf("%d valores pares\n", count);
return 0;
}