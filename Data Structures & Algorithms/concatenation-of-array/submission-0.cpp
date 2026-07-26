class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        size_t size= nums.size();
        size_t result_size = size * 2;
        vector<int> result (result_size);
        for(size_t i = 0; i < size; ++i)
        {
            result[i] = nums[i];
            result[i + size] = nums[i];
        }
        
        return result;
    }
};