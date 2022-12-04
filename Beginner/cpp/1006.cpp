#include <iostream>
#include<iomanip>

using namespace std;
 
int main() {
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A,B,C,avg;
    cin >> A >> B >> C;
    avg = ((A * 2) + (B * 3) + (C * 5)) / 10.0;
    cout << "MEDIA = " << fixed << setprecision(1) << avg << endl;
 
    return 0;
}