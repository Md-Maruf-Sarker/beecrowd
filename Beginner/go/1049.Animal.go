package main

import "fmt"

func main() {
	var (
		root   string
		parent string
		child  string
	)
	fmt.Scanln(&root)
	fmt.Scanln(&parent)
	fmt.Scanln(&child)

	if root == "vertebrado"{
		if parent == "ave"{
			if child == "carnivoro"{
				fmt.Println("aguia")
			}else{
				fmt.Println("pomba")
			}
		}else{
			if child == "onivoro"{
				fmt.Println("homem")
			}else{
				fmt.Println("vaca")
			}
		}
	}else{
		if parent == "inseto"{
			if child == "hematofago"{
				fmt.Println("pulga")
			}else{
				fmt.Println("lagarta")
			}
		}else{
			if child == "hematofago"{
				fmt.Println("sanguessuga")
			}else{
				fmt.Println("minhoca")
			}
		}
	}
}
