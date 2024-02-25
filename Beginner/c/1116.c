// write a c program 

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y;
        scanf("%d%d", &x, &y);

        if(y == 0) printf("divisao impossivel\n");
        else printf("%.1f\n", (float) x / y);
    }
    
    return 0;
}