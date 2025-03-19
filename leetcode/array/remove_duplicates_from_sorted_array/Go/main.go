/*
Author: Cristian Malaga
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array
*/
package main

import ("fmt")


func removeDuplicates(nums []int) int {
	// count unique elements
	unique := make(map[int]int)
	cache := []int{}
	index := 0
	for index < len(nums) {
		_, exists := unique[nums[index]]
		if exists {
			unique[nums[index]] += 1
		} else {
			unique[nums[index]] = 0 
			cache = append(cache, nums[index])
		}
		index++
	}
	for i, e := range cache {
		fmt.Println(i)
		nums[i] = e
	}
	return len(unique)
}

func main() {
	nums := []int {1, 1, 2}
	fmt.Println(removeDuplicates(nums))
	fmt.Println(nums)
}