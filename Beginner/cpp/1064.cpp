// Write a program 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 6, count = 0;
    double n, avg = 0, sum = 0;

    while(t--){
        cin >> n;

        if(n > 0){
            count++;
            sum += n;
        }
    }
    avg = sum / count;
    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << avg << endl;

return 0;
}