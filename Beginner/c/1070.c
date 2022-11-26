// https://www.beecrowd.com.br/judge/en/problems/view/1070

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	int count = 0;
	while(count < 6){
		if(n % 2 != 0){
			printf("%d\n", n);
			count++;
		}
		n++;
	}
	
	return 0;
}
