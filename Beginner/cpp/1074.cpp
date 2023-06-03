// Written by: Md. Maruf Sarker
// Platform: beeCrowd
// Problem: https://www.beecrowd.com.br/judge/en/problems/view/1074
// Language: cpp / go / c / python
// Date: 2023-01-22
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
#define arr_input(n) int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i]
#define arr2_input(n, m) int arr[n][m]; for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> arr[i][j]
#define arr_output(n) for(int i = 0; i < n; i++) cout << arr[i] << endl
#define arr2_output(n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cout << arr[i][j] << endl
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()

int read(){static int x; cin >> x; return x;}
ll readll(){static ll x; cin >> x; return x;}
double readd(){static double x; cin >> x; return x;}
ld readld(){static ld x; cin >> x; return x;}
string reads(){static string x; cin >> x; return x;}
char readc(){static char x; cin >> x; return x;}
#define mms ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); cout.precision(2)

void solve(){
    nn;
    if(n > 0){
        if(n % 2 == 0) cout << "EVEN POSITIVE" << endl;
        else cout << "ODD POSITIVE" << endl;
    }else if(n < 0){
        if(n % 2 == 0) cout << "EVEN NEGATIVE" << endl;
        else cout << "ODD NEGATIVE" << endl;
    }else{
        cout << "NULL" << endl;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}