#include <stdio.h>

int main(){
    while(1){
        int n;
        scanf("%d", &n);

        if(n == 2002){
            printf("Acesso Permitido\n");
            break;
        }else{
            printf("Senha Invalida\n");
        }
    }
}