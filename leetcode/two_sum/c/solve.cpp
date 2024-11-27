#include <iostream>
#include <vector>


std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int i = 0;
    std::vector<int> result = {};
    while (i < nums.size()) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                result.push_back(i);
                result.push_back(j);
                break;
            };
        }
        i++;
    }
    return result;
}



int main() {
    std::vector<int> case_one = {2,7,11,15};
    int target_one = 9;

    std::vector<int> case_two = {3,2,4};
    int target_two = 6;

    std::vector<int> case_three = {3,3};
    int target_three = 6;

    
    const std::vector<int> result_one = twoSum(case_one, target_one);
    const std::vector<int> result_two = twoSum(case_two, target_two);
    const std::vector<int> result_three = twoSum(case_three, target_three);
    
   
    for (int num : result_one) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : result_two) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for (int num : result_three) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}