#include <unordered_map>
class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        std::unordered_map<char, int> s_dict;
        std::unordered_map<char, int> t_dict;

        //loop through the string,
        for(const auto &c: s) // c stands for character
        {
            //if found that the letter already exists in there, then increase the value
            if(s_dict.find(c) != s_dict.end())
            {
                ++s_dict[c];
            }
            else
            {
                s_dict.insert({c, 1});
            }
        }

        for(const auto c: t)
        {
             if(t_dict.find(c) != t_dict.end())
            {
                ++t_dict[c];
            }
            else
            {
                t_dict.insert({c, 1});
            }
        }
        //if not already has the character in there,insert in with integer 1. 
        //else, increase the number. 
        
        return s_dict == t_dict;
    }
};

//idea: use dictionary to store characters and the number they showing up for each string. 
//then compare those two dictionary together. 
