class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
    #kadens algorithm
    
        current_sum = 0
        max_sum = 0
        for j in nums:
            current_sum += j
            if (current_sum > max_sum):
                max_sum = current_sum
            if (current_sum < 0):
                current_sum = 0
               
        return max_sum
