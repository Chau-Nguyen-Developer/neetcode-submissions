class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        # Set = All elements have to be unique. 
        # if len of set is less than len of list, that means list has duplicate 
        # elements. Quá đỉnh. Đỉnh cao. Không biết ai nghĩ ra cái này hay vậy. 
        return len(set(nums)) < len(nums)