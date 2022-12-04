// https://www.beecrowd.com.br/judge/en/problems/view/1048

package main

import "fmt"

func main() {
	var parcents int16
	var salary, earnings float32
	// fmt.Print("Enter employee's salary: ")
	fmt.Scanf("%f", &salary)

	if salary >= 0 && salary <= 400.00 {
		salary = salary + (salary * 0.15)
		earnings = salary - (salary * 0.15)
		parcents = 15
	} else if salary >= 400.01 && salary <= 800.00 {
		salary = salary + (salary * 0.12)
		earnings = salary - (salary * 0.12)
		parcents = 12
	} else if salary >= 800.01 && salary <= 1200.00 {
		salary = salary + (salary * 0.10)
		earnings = salary - (salary * 0.10)
		parcents = 10
	} else if salary >= 1200.01 && salary <= 2000.00 {
		salary = salary + (salary * 0.07)
		earnings = salary - (salary * 0.07)
		parcents = 7
	} else if salary > 2000.00 {
		salary = salary + (salary * 0.04)
		earnings = salary - (salary * 0.04)
		parcents = 4
	} else {
		fmt.Println("Wrong Input")
	}
	fmt.Println("Novo salario: ", salary)
	fmt.Println("Reajuste ganho: ", earnings)
	fmt.Println("Em percentual: ", parcents, "%")
}
