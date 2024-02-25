// https://www.beecrowd.com.br/judge/en/problems/view/1072

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int in = 0, out = 0;
    while(t--){
        int x;
        scanf("%d", &x);

        if(x >= 10 && x <= 20) in++;
        else out++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    
    return 0;
}