#include <stdio.h>

int min(int a, int b){
    return a < b ? a : b;
}
int max(int a, int b){
    return a > b ? a : b;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int x, y;
        scanf("%d %d", &x, &y);

        int sum = 0;
        for(int i = min(x, y) + 1; i < max(x, y); i++)
            if(i % 2 != 0) sum += i;
        
        printf("%d\n", sum);
    }
}