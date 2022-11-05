// https://www.beecrowd.com.br/judge/en/problems/view/1050
package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)
	
	if n == 61 {
		fmt.Println("Brasilia")
	} else if n == 71 {
		fmt.Println("Salvador")
	} else if n == 11 {
		fmt.Println("Sao Paulo")
	} else if n == 21 {
		fmt.Println("Rio de Janeiro")
	} else if n == 32 {
		fmt.Println("Juiz de Fora")
	} else if n == 19 {
		fmt.Println("Campinas")
	} else if n == 27 {
		fmt.Println("Vitoria")
	} else if n == 31 {
		fmt.Println("Belo Horizonte")
	} else {
		fmt.Println("DDD nao cadastrado")
	}
}