package main

import (
	"fmt" 
	"strconv"
)


func isPalindrome(x int) bool {
    strX := strconv.Itoa(x)
	rev := []rune{}
	for i := len(strX) - 1; i >= 0; i-- {
		rev = append(rev, rune(strX[i]))
	} 
	newStr := string(rev)
	return strX == newStr
}

func main() {
	fmt.Println(isPalindrome(121))
	fmt.Println(isPalindrome(-121))
	fmt.Println(isPalindrome(10))
	fmt.Println(isPalindrome(101))
}