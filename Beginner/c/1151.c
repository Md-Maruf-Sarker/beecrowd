#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    printf("0 1");
    long long prev = 0, curr = 1, next;

    for(int i = 2; i < n; i++){
        next = prev + curr;
        printf(" %lld", next);
        prev = curr;
        curr = next;
    }
    printf("\n");
}