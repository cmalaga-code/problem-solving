/*
Author: Cristian Malaga
Link: https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array
*/



const twoSum = function(nums, target) {
    const result = [];
    let secondLoopStart;
    for (let i = 0; i < nums.length; i++) {
        secondLoopStart = i + 1;
        for (let j = secondLoopStart; j < nums.length; j++) {
            if (nums[i] + nums[j] === target) {
                result.push(i);
                result.push(j);
                return result;
            }
        }
    }
    return result;
}

const nums = [2, 7, 11, 15];
const target = 9;

console.log(twoSum(nums, target));