// https://www.beecrowd.com.br/judge/en/problems/view/1011

#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159

int main()
{
    double R, volume;

    cin >> R;

    volume = (4.0 / 3) * PI * (R * R * R);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    
    return 0;
}
