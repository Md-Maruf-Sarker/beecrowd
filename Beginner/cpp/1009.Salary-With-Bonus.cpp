#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    string name;
    double fixed_salary, total_sale, final_salary;

    getline(cin, name);
    cin >> fixed_salary >> total_sale;

    final_salary = fixed_salary + ((total_sale * 15) / 100);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << final_salary << endl;

    return 0;
}
