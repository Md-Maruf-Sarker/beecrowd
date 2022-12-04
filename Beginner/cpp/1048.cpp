// https://www.beecrowd.com.br/judge/en/problems/view/1048
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    float salary, earnings, parcents;
    
    cin >> salary;
    
    if(salary >= 0 && salary <= 400.00){
		parcents = 0.15;
	}else if(salary >= 400.01 && salary <= 800.00){
		parcents = 0.12;
	}else if(salary >= 800.01 && salary <= 1200.00){
		parcents = 0.10;
	}else if(salary >= 1200.01 && salary <= 2000.00){
		parcents = 0.07;
	}else if(salary >= 2000.00){
		parcents = 0.04;
	}else{
		cout << "Invalid Salary\n";
	}
	
	earnings = salary * parcents;
	salary = earnings + salary;
	parcents = parcents * 100;
	
	// printf("Novo salario: %.2f\n", salary);
	// printf("Reajuste ganho: %.2f\n", earnings);
	// printf("Em percentual: %.0f %\n", parcents);
	
	cout << "Novo salario: " << fixed << setprecision(2) << salary << "\n";
	cout << "Reajuste ganho: " << fixed << setprecision(2) << earnings << "\n";
	cout << "Em percentual: " << fixed << setprecision(0) << parcents << " %\n";
 
    return 0;
}
