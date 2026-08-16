#include <unordered_set>
class Solution 
{
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int totalProduct = 1;
        int totalProductWithoutZero = 1;
        size_t len = nums.size();
        if(len==0)
        {
            return{};
        }
        //Detect if zero exists, and if yes, where it is. 
        unordered_set<int> zeroIndices;
        for(size_t i = 0; i < len; ++i)
        {
            if(nums[i] == 0)
            {
                zeroIndices.insert(i);
                totalProduct = 0;
            }
            else
            {
                totalProductWithoutZero *= nums[i];
            }
        }

        vector<int> result(len, totalProduct);
        if(zeroIndices.size() > 1) //have more than one 
        {
            return result;
        }
        else if(zeroIndices.size() == 1)
        {
            //have exact only one zero.
            //Retrieve the location of that zero
            int index = *zeroIndices.begin();
            result[index] = totalProductWithoutZero;
            return result;
        }
        //the case where no zero exists;
        for(size_t i = 0; i < len; ++i)
        {
            result[i] = totalProductWithoutZero / nums[i];
        }
        
        return result;
        //What special about this question: zero times anything will return zero, and if divide by zero will yield errors. 
        //detect if zero exists in the array. 
        //if yes, detect location. When doing totalProduct, skip it. 
        //the rest, will have zero. only at index where zero located will have the full total product of other elements. 
        //in the case where no zero locate
        //when detect zero, do the multiplication as well. 

    }
};
