// Selection Test

package main

import "fmt"

func main() {
	var a, b, c, d int16

	fmt.Printf("Enter 4 int value: ")
	fmt.Scanf("%d %d %d %d", &a, &b, &c, &d)

	if (b > c) && (d > a) && (c+d > a+b) && (c > 0 && d > 0) && (a%2 == 0) {
		fmt.Println("valores aceitos")
	} else {
		fmt.Println("valores nao aceitos")
	}
}
