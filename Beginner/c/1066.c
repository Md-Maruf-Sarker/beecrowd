// Write a program 

#include <stdio.h>

int main() {
    int t = 5;
    int even = 0, odd = 0, pos = 0, neg = 0;

    while(t--){
        int n;
        scanf("%d", &n);

        if(n % 2 == 0) even++;
        if(n % 2 != 0) odd++;
        if(n > 0) pos++;
        if(n < 0) neg++;
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
return 0;
}