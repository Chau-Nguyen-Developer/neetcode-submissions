
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
                //check if element already exists in the hash container
                if(tracking.count(nums[i]) != 0)
                {
                    return true;
                }
                else
                {
                    tracking[nums[i]] = 1;
                }
            }
            return false;
        }
};
