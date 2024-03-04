package main

import "fmt"
import "strconv"

func main() {
	var input string
	var arr []int
	for input != "exit" {
		fmt.Print("Enter a number or type 'exit' to quit: ")
		fmt.Scanln(&input)
		a, err := strconv.Atoi(input)
		if err != nil {
			fmt.Println("Please enter a number or type 'exit' to quit: ")
			continue
		}
		arr = append(arr, a)
	}
	fmt.Println("Numbers: ", arr)
	for i := 0; i < len(arr); i++ {
		k := i
		for j := k; j > 0; j-- {
			if arr[j] < arr[j-1] {
				arr[j], arr[j-1] = arr[j-1], arr[j]
			}
		}
	}
	fmt.Println("Sorted: ", arr)

}
