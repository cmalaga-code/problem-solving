package main 

import (
	"fmt"
)

func twoSum(nums []int, target int) []int {
	var result []int
	var secondLoopStart int
	for i := 0; i < len(nums); i++ {
		secondLoopStart = i + 1
		for j := secondLoopStart; j < len(nums); j++ {
			if nums[i] + nums[j] == target {
				result = append(result, i, j)
				return result
			}
		}
	}
	return result
}


func main() {
	nums := []int {2, 7, 11, 15}
	target := 9
	fmt.Println(twoSum(nums, target))
}