#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, maiorAB, major;
	cin >> a >> b >> c;
	
	maiorAB = (a + b + abs(a-b)) / 2;
	major = (maiorAB + c + abs(maiorAB -c)) / 2;
	
	cout << major << " " << "eh o maior" << endl;
	
	
	return 0;
}
