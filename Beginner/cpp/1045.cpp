// Written by: Md. Maruf Sarker
// Platform: URI
// Problem: https://www.beecrowd.com.br/judge/en/problems/view/1045
// Language: cpp / go / c / python
// Date: 2022-09-29
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

#define pb push_back
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);  cout.tie(NULL);

double a, b, c;
cin >> a >> b >> c;

double x = max(a, max(b, c));
double y = min(a, min(b, c));
double z = a + b + c - x - y;

if(x >= y + z) cout << "NAO FORMA TRIANGULO" << endl;
else{
    if(x * x == y * y + z * z) cout << "TRIANGULO RETANGULO" << endl;
    if(x * x > y * y + z * z) cout << "TRIANGULO OBTUSANGULO" << endl;
    if(x * x < y * y + z * z) cout << "TRIANGULO ACUTANGULO" << endl;
    if(x == y && y == z) cout << "TRIANGULO EQUILATERO" << endl;
    if((x == y && y != z) || (x == z && z != y) || (y == z && z != x)) cout << "TRIANGULO ISOSCELES" << endl;
}

return 0;
}