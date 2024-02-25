// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: 
// Date: 2024-02-25

#include <bits/stdc++.h>
// #include <debug.h>
using namespace std;

#define ll long long
#define endl "\n"
#define sp " "
#define Maruf ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

class Solution {
public:
    
};

void solve(int t){
    int n;
    cin >> n;
    cout << "0 1";
    ll prev = 0, curr = 1, next;

    for(int i = 2; i < n; i++){
        next = prev + curr;
        cout << sp << next;
        prev = curr;
        curr = next;
    }
    cout << endl;
}

int main() {
    Maruf
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
}