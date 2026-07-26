class Solution {
public:
    bool hasDuplicate(vector<int>& nums) 
    {
        //Use dictionary 
        std::unordered_map<int, int> dictionary;
        size_t len = nums.size();
        int count;

        bool duplicate = false;
        int i = 0;

        while(!duplicate && i < len)
        {   //Searchig for a key.
            //If that key already exists, 
            //duplicate = true. Otherwise, 
            //add that key to the dictionary
            if(dictionary.find(nums[i]) != dictionary.end())
            {
                duplicate = true;
            }
            else
            {
                dictionary.insert({nums[i], 1});
            }
            i++;
        }
        return duplicate;
    }
};