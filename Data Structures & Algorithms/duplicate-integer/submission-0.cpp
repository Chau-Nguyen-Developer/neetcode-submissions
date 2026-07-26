#include <iostream>
#include <string>
#include <unordered_map>

class Solution 
{
    public:
        bool hasDuplicate(vector<int>& nums) 
        {
            size_t len = nums.size();
            std::unordered_map<int, int> tracking;

            //if key not exist, insert. 
            for(size_t i = 0; i < len; ++i)
            {
                if(tracking.count(nums[i]) == 0)
                {
                    tracking[nums[i]] = 1;
                }
                else
                {
                    return true;
                }
            }
            return false;
        }
};
