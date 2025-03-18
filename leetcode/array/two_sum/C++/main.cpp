/*
Author: Cristian Malaga
Link: https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
    int secondLoopPosition;
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        secondLoopPosition = i + 1;
        for (int j = secondLoopPosition; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    for (auto e: twoSum(nums, target)) {
        cout << e << endl;
    } 
    return 0;
}