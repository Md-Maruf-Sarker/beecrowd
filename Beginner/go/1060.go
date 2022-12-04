// 
package main

import "fmt"

func main() {
	var t, i, count int
	t = 6
	count = 0
	var n float32
	for i = 0; i < t; i++{
		fmt.Scan(&n)
		if n > 0{
			count++
		}
	}
	fmt.Printf("%d valores positivos\n", count)
}