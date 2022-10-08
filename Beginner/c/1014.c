// consumption

#include <stdio.h>

int main() {
    double X, Y, result;
    scanf("%lf %lf",&X,&Y);
	
	result = X / Y;
	
	printf("%.3lf km/l\n", result);

return 0;
}