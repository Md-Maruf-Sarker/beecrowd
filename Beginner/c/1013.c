// the greatest

#include <stdio.h>

int main() {
    int a, b, c, maiorAB, major;
	scanf("%d %d %d", &a, &b, &c);
	
	maiorAB = (a + b + abs(a-b)) / 2;
	major = (maiorAB + c + abs(maiorAB -c)) / 2;
	
    printf("%d eh o maior\n", major);

return 0;
}