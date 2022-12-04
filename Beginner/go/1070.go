// https://www.beecrowd.com.br/judge/en/problems/view/1070

package main

import "fmt"

func main(){
	var n int
	fmt.Scan(&n)
	
	var count = 0
	for i := 0; i < 6 * 2; i++{
		if n % 2 != 0 {
			fmt.Println(n);
			count++;
		}
		n++;
	}
}
