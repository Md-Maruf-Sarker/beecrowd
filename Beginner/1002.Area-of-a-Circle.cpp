#include <iostream>
#include<iomanip>
 
using namespace std;
 
int main() {
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A, R, pi;
    pi = 3.14159;
    cin >> R;
    A = pi * R * R;
    // printf("A=%.4f\n", A);
    cout << "A=" << fixed << setprecision(4) << A << "\n";
 
    return 0;
}