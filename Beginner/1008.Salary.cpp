#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int emp_num, work_hour, num;
    float amountperhour, salary;
    
    cin >> emp_num >> work_hour >> amountperhour;
    
    num = emp_num;
    salary = work_hour * amountperhour;
    
    cout << "NUMBER = " << emp_num << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}