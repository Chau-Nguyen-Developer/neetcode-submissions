class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # create an empty dicitonary (hash table)
        tracking = {}
        for index, value in enumerate(nums):
            if value in tracking:
                return True
            else:
                tracking[value] = 1
        return False


        