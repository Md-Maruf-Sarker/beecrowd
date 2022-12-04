// https://www.beecrowd.com.br/judge/en/problems/view/1070

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int count = 0;
	while(count < 6){
		if(n % 2 != 0){
			cout << n << endl;
			count++;
		}
		n++;
	}
	
	return 0;
}
