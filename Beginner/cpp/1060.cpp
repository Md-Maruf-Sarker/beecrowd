// Write a program 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 6, count = 0;
    double n;

    while(t--){
        scanf("%lf", &n);
        if(n > 0) count++;
    }
    // printf("%d valores positivos\n", count);
    cout << count << " valores positivos\n";

return 0;
}