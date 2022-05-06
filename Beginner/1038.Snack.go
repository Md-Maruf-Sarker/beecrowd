// https://www.beecrowd.com.br/judge/en/problems/view/1038

package main
import (
"fmt"
)
var price float32 = 0.00

func main() {
	var code, quantity int32

	fmt.Scanln(&code, &quantity)

	switch(code){
		case 1:
			price = (4.00 * float32(quantity))
		case 2:
			price = (4.50 * float32(quantity))
		case 3:
			price = (5.00 * float32(quantity))
		case 4:
			price = (2.00 * float32(quantity))
		case 5:
			price = (1.50 * float32(quantity))
	}
	fmt.Printf("Total: R$ %.2f\n", price)
}