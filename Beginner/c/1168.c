#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        char s[2010];
        scanf("%s", s);

        int sum = 0;
        for(int i = 0; s[i] != '\0'; i++){
            if(s[i] == '1') sum += 2;
            if(s[i] == '2') sum += 5;
            if(s[i] == '3') sum += 5;
            if(s[i] == '4') sum += 4;
            if(s[i] == '5') sum += 5;
            if(s[i] == '6') sum += 6;
            if(s[i] == '7') sum += 3;
            if(s[i] == '8') sum += 7;
            if(s[i] == '9') sum += 6;
            if(s[i] == '0') sum += 6;
        }

        printf("%d leds\n", sum);
    }
}