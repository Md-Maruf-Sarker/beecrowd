// https://www.beecrowd.com.br/judge/en/problems/view/1010

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int code1, unit1, code2, unit2;
    float price1, price2,  total;

    cin >> code1 >> unit1 >> price1;
    cin >> code2 >> unit2 >> price2;

    total = (unit1 * price1) + (unit2 * price2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
