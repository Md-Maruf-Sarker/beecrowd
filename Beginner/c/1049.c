// https://www.beecrowd.com.br/judge/en/problems/view/1049

#include <stdio.h>
#include <string.h>

int main() {
    char root[20], parent[20], child[20];
    scanf("%s %s %s", root, parent, child);

    if(strcmp(root, "vertebrado") == 0) {
        if(strcmp(parent, "ave") == 0) {
            if(strcmp(child, "carnivoro") == 0) {
                printf("aguia\n");
            } else {
                printf("pomba\n");
            }
        } else {
            if(strcmp(child, "onivoro") == 0) {
                printf("homem\n");
            } else {
                printf("vaca\n");
            }
        }
    } else {
        if(strcmp(parent, "inseto") == 0) {
            if(strcmp(child, "hematofago") == 0) {
                printf("pulga\n");
            } else {
                printf("lagarta\n");
            }
        } else {
            if(strcmp(child, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else {
                printf("minhoca\n");
            }
        }
    }

return 0;
}