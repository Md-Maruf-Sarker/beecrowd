#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        long long sum = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0' or s[i] == '6' or s[i] == '9') sum += 6;
            else if(s[i] == '1') sum += 2;
            else if(s[i] == '2' or s[i] == '3' or s[i] == '5') sum += 5;
            else if(s[i] == '4') sum += 4;
            else if(s[i] == '7') sum += 3;
            else sum += 7;
        }

        cout << sum << " " << "leds\n";
    }
}