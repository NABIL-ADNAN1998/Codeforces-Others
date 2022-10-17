class Solution:
    def romanToInt(self, s: str) -> int:

        my_values = {
            "I":  1,
            "V":  5,
            "X":  10,
            "L":  50,
            "C":  100,
            "D":  500,
            "M":  1000

        }

        #nums = input()
        count = 0
        for i in range(len(s)):
                count += my_values[s[i]]
                if (i > 0 and s[i-1] == 'I' and (s[i] == 'V' or s[i] == 'X')):
                    count -= 2
                if (i > 0 and (s[i] == 'L' or s[i] == 'C') and s[i-1] == 'X'):
                    count -= 20
                if (i > 0 and (s[i] == 'D' or s[i] == 'M') and s[i-1] == 'C'):
                    count -= 200

        print(count)
