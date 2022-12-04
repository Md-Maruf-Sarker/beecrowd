// https://www.beecrowd.com.br/judge/en/problems/view/1052
package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	switch n {
		case 1:
			fmt.Println("January")
		case 2:
			fmt.Println("February")
		case 3:
			fmt.Println("March")
		case 4:
			fmt.Println("April")
		case 5:
			fmt.Println("May")
		case 6:
			fmt.Println("June")
		case 7:
			fmt.Println("July")
		case 8:
			fmt.Println("August")
		case 9:
			fmt.Println("September")
		case 10:
			fmt.Println("October")
		case 11:
			fmt.Println("November")
		case 12:
			fmt.Println("December")
	}
}