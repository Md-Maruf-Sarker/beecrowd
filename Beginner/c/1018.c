// banknotes

#include <stdio.h>

int main() {
    int notes, ans;

    scanf("%d", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes / 100);
    ans = (notes % 100);
    printf("%d nota(s) de R$ 50,00\n", ans / 50);
    ans = (ans % 50);
    printf("%d nota(s) de R$ 20,00\n", ans /  20);                                              
    ans = (ans % 20);
    printf("%d nota(s) de R$ 10,00\n", ans / 10);
    ans = (ans % 10);
    printf("%d nota(s) de R$ 5,00\n", ans / 5);
    ans = (ans % 5);
    printf("%d nota(s) de R$ 2,00\n", ans / 2);
    ans = (ans % 2);
    printf("%d nota(s) de R$ 1,00\n", ans/1);

return 0;
}