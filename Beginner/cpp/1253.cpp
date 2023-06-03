#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;
        int n;
        cin >> n;

        // input = VQREQFGT
        // output = TOPCODER

        int len = str.length();
        int i = 0;
        while(i < len){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] = str[i] - n;
                if(str[i] < 'A'){
                    str[i] = str[i] + 26;
                }
            }
            i++;
        }
        cout << str << endl;
    }

return 0;
}