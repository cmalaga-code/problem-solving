class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        mapping = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000,
        }
        # go through each char in str
        result = 0
        skip = False
        for i, char in enumerate(s):
            if skip:
                skip = False
                continue
            if char in mapping.keys():
                if char == "I" and i + 1 < len(s) and s[i + 1] == "V":
                    result += 4
                    skip = True
                elif char == "I" and i + 1 < len(s) and s[i + 1] == "X":
                    result += 9
                    skip = True
                elif char == "X" and i + 1 < len(s) and s[i + 1] == "L":
                    result += 40
                    skip = True
                elif char == "X" and i + 1 < len(s) and s[i + 1] == "C":
                    result += 90
                    skip = True
                elif char == "C" and i + 1 < len(s) and s[i + 1] == "D":
                    result += 400
                    skip = True
                elif char == "C" and i + 1 < len(s) and s[i + 1] == "M":
                    result += 900
                    skip = True
                else:
                    result += mapping[char]
        return result


s = Solution()
print(s.romanToInt('III'))
print(s.romanToInt('LVIII'))
print(s.romanToInt('MCMXCIV'))
print(s.romanToInt('IVII'))
