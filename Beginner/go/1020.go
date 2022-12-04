package main
 
import (
    "fmt"
)

func main() {
	var days, months, years int32;

	fmt.Scanln(&days);
	
	years = days / 365;
	months = (days % 365) / 30;
	days = (days % 365) % 30;
	
	fmt.Printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);
}
