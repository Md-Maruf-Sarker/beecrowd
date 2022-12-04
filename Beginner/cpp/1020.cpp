#include <iostream>
using namespace std;
 
int main() {
    int n, m, d, y;
    
    cin >> n;
    
    y = n / 365;
    m = n % 365 / 30;
    d = n % 365 % 30;
    
    // cout << y << " ano(s)\n";
    // cout << m << " mes(es)\n";
    // cout << d << " dia(s)\n";
    
    cout << y << " ano(s)\n" << m << " mes(es)\n" << d << " dia(s)\n";
 
    return 0;
}
