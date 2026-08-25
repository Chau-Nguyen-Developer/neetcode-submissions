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

// -1 0 1 2 3 | -1 0 1 2 3 
//  0 1 2 3 4    5 6 7 8 9
//  len = 5
//  (i + k) % len 
//  k chạy từ 0 đến len - 1, tại không muốn lấy bản thân nó.
//  Chẳng hạn, với index 3
//  (3 + 0)%5 = 3
//  (3 + 1) % 5 = 4 % 5 = 4
//  (3 + 2) % 5 = 5 % 5 = 0
//  (3 + 3) % 5 = 6 % 5 = 1
//  (3 + 4) % 5 = 7 % 5 = 2

 //nhưng nếu làm cách này thì sẽ là phải hai lần loop. Nếu double array thì chỉ loop một lần thôi. 

//-1 
// wow, bài này có quá nhiều cách giải. Quá hay!! 

//  example 
//  result[3] 
//  (3+5 + k)/ len

 