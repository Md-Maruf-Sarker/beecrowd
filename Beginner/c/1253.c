#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--){
        char str[100];
        scanf("%s", str);
        int n;
        scanf("%d", &n);

        int len = strlen(str);
        int i = 0;
        while(i < len){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] - n;
                if(str[i] < 'A'){
                    str[i] = str[i] + 26;
                }
            }
            i++;
        }
        printf("%s\n", str);
    }

return 0;
}