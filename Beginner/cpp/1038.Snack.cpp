// https://www.beecrowd.com.br/judge/en/problems/view/1038

#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int code, quantity;
    cin >> code >> quantity;
    
    float price = 0.00;
    switch(code){
        case 1:
            price = (float) (4.00 * quantity);
            break;
        case 2:
            price = (float) (4.50 * quantity);
            break;
        case 3:
            price = (float) (5.00 * quantity);
            break;
        case 4:
            price = (float) (2.00 * quantity);
            break;
        case 5:
            price = (float) (1.50 * quantity);
            break;
        default:
            cout << "Invalid Input\n";
    }
    printf("Total: R$ %.2f\n",price);
 
    return 0;
}