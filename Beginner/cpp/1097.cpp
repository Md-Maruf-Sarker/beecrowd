#include<bits/stdc++.h>
using namespace std;
// I=1 J=7
// I=1 J=6
// I=1 J=5
// I=3 J=9
// I=3 J=8
// I=3 J=7
// ...
// I=9 J=15
// I=9 J=14
// I=9 J=13
int main(){
    int i=1,j=7;

    while(i<=9){
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        cout<<"I="<<i<<" J="<<j<<endl;
        j--;
        cout<<"I="<<i<<" J="<<j<<endl;
        j+=4;
        i+=2;
    }
    return 0;
}