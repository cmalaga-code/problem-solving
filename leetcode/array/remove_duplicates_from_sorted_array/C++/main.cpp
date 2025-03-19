/*
Author: Cristian Malaga
Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/?envType=problem-list-v2&envId=array
*/
#include <vector>
#include <iostream>
#include <map>

using namespace std;


int removeDuplicates(vector<int> &nums) {
    map<int, int> r;
    vector<int> cache;
    for (int i = 0; i < nums.size(); i++) {
        if (r.count(nums[i]) > 0) {
            r[nums[i]] += 1;
        } else {
            r[nums[i]] = 0;
            cache.push_back(nums[i]);
        }
    }
    nums = cache;
    return r.size();
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(nums) << endl;
    for (auto e: nums) {
        cout << e << " ";
    }
    return 0;
}