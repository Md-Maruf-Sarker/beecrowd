#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;

    for(int i = 3; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }

    return true;
}

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);

        if(isPrime(n)){
            cout << n << " eh primo" << endl;
        }else{
            cout << n << " nao eh primo" << endl;
        }
    }
}