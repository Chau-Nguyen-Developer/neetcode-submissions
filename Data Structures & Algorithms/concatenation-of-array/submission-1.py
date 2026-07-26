class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        my_list = []
        length = len(nums)
        for i in range(length*2):
            my_list.append(nums[i%(length)])
        return my_list
