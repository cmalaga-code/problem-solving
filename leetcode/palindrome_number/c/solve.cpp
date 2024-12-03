#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
        std::string xStr = std::to_string(x);
        int lengthOfStr = xStr.length();

        for (int i = 0, r = lengthOfStr - 1; i < lengthOfStr; i++, r--) {
            if (xStr[i] != xStr[r]) return false;
        }
        return true;
    }
};


int main() {
    Solution s = Solution();
    // test
    std::cout << s.isPalindrome(121) << std::endl;
    std::cout << s.isPalindrome(-121) << std::endl;
    std::cout << s.isPalindrome(101) << std::endl;
    return 0;
}