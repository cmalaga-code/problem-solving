/*
Author: Cristian Malaga
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=array
*/

const removeDuplicates = function(nums) {
    const cache = [];
    const uniqueNumber = {};
    // 1. count number of unique values
    for (let i = 0; i < nums.length; i++) {
        if (String(nums[i]) in uniqueNumber) {
            uniqueNumber[nums[i]] += 1;
        } else {
            uniqueNumber[nums[i]] = 0;
            cache.push(nums[i]);
        }
    }
    const keys = Object.keys(uniqueNumber);
    const arrayLength = nums.length;
    for (let j = 0, k = 0; j < arrayLength; j++, k++) {
        if (k >= cache.length) {
            nums.splice(j, 1);
        } else {
            nums[j] = cache[k];
        }
    }
    console.log(nums);
    return keys.length;
}

const nums = [1,1,2];
console.log(removeDuplicates(nums));