// https://www.beecrowd.com.br/judge/en/problems/view/1043

#include <bits/stdc++.h>
using namespace std;

int main() {
    float a, b, c;

    cin >> a >> b >> c;

    if(a + b > c && a + c > b && b + c > a) {
        // calc perimeter
        printf("Perimetro = %.1f\n", a + b + c );
    }else {
        // calc trapezium
        printf("Area = %.1f\n", ((a + b) * c) / 2);
    }

return 0;
}