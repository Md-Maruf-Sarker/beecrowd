#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    // print the roots of bhakara's formula
    double root = b * b - 4 * a * c;
    if(root < 0) cout << "Impossivel calcular\n";
    else{
        double r1 = (-b + sqrt(root)) / (2 * a);
        double r2 = (-b - sqrt(root)) / (2 * a);
        cout << fixed << setprecision(5);
        cout << "R1 = " << r1 << endl;
        cout << "R2 = " << r2 << endl;
    }
}