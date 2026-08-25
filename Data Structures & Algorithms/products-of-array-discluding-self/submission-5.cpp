#include <vector>
#include <iostream>
using namespace std;

class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
       //Approach: have prefix and suffix arrays
       size_t len = nums.size();
       vector<int> result(len);

       //create prefix array
       vector<int> prefix(len,1);
       for(size_t i = 1; i < len; ++i)
       {
          prefix[i] = nums[i-1] * prefix[i-1];
       }

       //create suffix array
       vector<int> suffix(len, 1);
       for(int i = len - 2; i >= 0; --i)
       {
          suffix[i] = nums[i+1] * suffix[i + 1];
       }
       
       //times prefix and suffix together
       for(size_t i = 0; i < len; ++i)
       {
          result[i] = prefix[i] * suffix[i];
       }
       return result;
    }
};


 