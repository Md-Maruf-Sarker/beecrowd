// Write a program 

#include <stdio.h>

int main() {
    // perfect number
    int t;
    scanf("%d", &t);

    while(t--){
        int n, sum = 0;
        scanf("%d", &n);

        for(int i = 1; i < n; i++){
            if(n % i == 0) sum += i;
        }
        if(sum == n) printf("%d eh perfeito\n", n);
        else printf("%d nao eh perfeito\n", n);
    }

return 0;
}