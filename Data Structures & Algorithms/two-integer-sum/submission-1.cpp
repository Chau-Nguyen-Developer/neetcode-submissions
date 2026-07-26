#include <unordered_map>
#include <iostream>
using namespace std;

class Solution 
{
    public:
        vector<int> twoSum(vector<int>& nums, int target) 
        {
            unordered_map<int, int> myDictionary={};
            vector<int> result;
            bool found = false;
            size_t len = nums.size();
            int i = 0; 
            int remain = 0;

            while(!found && i < len)
            {
                remain = target - nums[i];
                //Find remain value in dictionary. 
                //If found, return the value index of that key in dictionary as first
                //element. Second element is the current i.
                auto it = myDictionary.find(remain);
                if(it != myDictionary.end())
                {
                    //add the index of that element into result vector. 
                    result.push_back(it->second);
                    result.push_back(i);
                    found = true;
                }
                else
                {
                    myDictionary.insert({nums[i], i});
                }
                ++i;

            }
            return result;
        }
};
