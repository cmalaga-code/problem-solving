package main

import ("fmt")


func twoSum(nums []int, target int) []int {
	result := []int{}
	for i:= 0; i < len(nums); i++ {
		for j := i + 1; j < len(nums); j++ {
			if nums[i] + nums[j] == target {
				result = append(result, i, j)
			}
		}
	}
	return result
}


func main() {
	testOneNums := []int {2,7,11,15}
	testOneTarget := 9

	testTwoNums := []int {3,2,4}
	testTwoTarget := 6

	testThreeNums := []int {3, 3}
	testThreeTarget := 6

	fmt.Println(twoSum(testOneNums, testOneTarget));
	fmt.Println(twoSum(testTwoNums, testTwoTarget));
	fmt.Println(twoSum(testThreeNums, testThreeTarget));
}