#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        size_t len1 = s.size();
        size_t len2 = t.size();

        if(len1 != len2)
        {
            return false;
        }

        std::unordered_map<int, int> map1;
        std::unordered_map<int, int> map2;

        for(size_t i = 0; i < len1; ++i)
        {
            if(map1.count(s[i]) == 0)
            {
                map1[s[i]] = 1;
            }
            else
            {
                map1[s[i]] = ++(map1[s[i]]);
            }
        }

        for(size_t i = 0; i < len2; ++i)
        {
            if(map2.count(t[i]) == 0)
            {
                map2[t[i]] = 1;
            }
            else
            {
                map2[t[i]] = ++(map2[t[i]]);
            }
        }

        if(map1 == map2)
        {
            return true;
        }
        return false;
    }
};

// Another cool solution online that uses the built-in sort function. Respect.
// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if(s.length()!=t.length()) return false;
       
//        sort(s.begin(),s.end());
//        sort(t.begin(),t.end());
//        if(t==s) return true;
//        return false;
        
//     }
// };