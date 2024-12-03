class Solution:
    def isPalindrome(self, x: int) -> bool:
        str_x = str(x)
        reverse = str_x[::-1]
        if str_x == reverse:
            return True
        return False

if __name__ == "__main__":
    s = Solution()
    # test
    print(s.isPalindrome(121))
    print(s.isPalindrome(-121))
    print(s.isPalindrome(10))
    print(s.isPalindrome(101))