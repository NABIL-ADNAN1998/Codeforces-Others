class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        # kadens algorithm
        product1 = nums[0]
        product2 = nums[0]
        result = nums[0]
        l = len(nums)
        for j in range(1, l):

            temp = max(nums[j], product1*nums[j], product2*nums[j])
            product2 = min(nums[j], product2*nums[j], product1*nums[j])
            product1 = temp
            result = max(result, product1)

        return result
