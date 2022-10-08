#include <iostream>
#include<iomanip>

using namespace std;
 
int main() {
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double A,B,avg;
    cin >> A >> B;
    avg = ((A * 3.5) + (B * 7.5)) / 11.0;
    cout << "MEDIA = " << fixed << setprecision(5) << avg << endl;
 
    return 0;
}