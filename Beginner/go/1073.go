// 
package main

import "fmt"

func main() {
	var n int
	fmt.Scan(&n)

	for i := 2; i <= n; i += 2{
		fmt.Printf("%d^2 = %d\n", i, i * i)
	}
}