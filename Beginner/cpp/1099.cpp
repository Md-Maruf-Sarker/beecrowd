// In the name of Allah, Most Merciful
// Written by: Md. Maruf Sarker
// Problem Link: https://www.beecrowd.com.br/judge/en/problems/view/1099
// Language: cpp
// Date: 2023-03-18
// Difficulty Rating: 

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define pi 3.141592653589793238462
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define nn int n; cin >> n
#define ixy int x, y; cin >> x >> y
#define ixyz int x, y, z; cin >> x >> y >> z
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()
#define pii pair<int, int>
#define pll pair<ll, ll>
void maruf(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifdef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif
}

void solve(int t){
    int x, y;
    cin >> x >> y;

    int sum = 0;
    for(int i = min(x, y) + 1; i < max(x, y); i++)
        if(i % 2 != 0) sum += i;

    cout << sum << endl;

}
int main() {
    // maruf();
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
}