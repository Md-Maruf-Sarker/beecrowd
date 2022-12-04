// Write a program 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 5, count = 0;

    while(t--){
        int n;
        cin >> n;

        if(n % 2 == 0) count++;
    }

    cout << count << " valores pares" << endl;
return 0;
}