// 
package main

import "fmt"

func main() {
	var t, count int
	t = 5
	count = 0
	for i := 1; i <= t; i++ {
		var n int
		fmt.Scan(&n)
		if n % 2 == 0 {
			count++
		}
	}
	fmt.Printf("%d valores pares\n", count)
}