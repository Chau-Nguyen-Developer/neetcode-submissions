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
            ++s_dict[c];
        }

        for(const auto c: t)
        {
             ++t_dict[c];
        }
        //if not already has the character in there,insert in with integer 1. 
        //else, in ++s_dict[c];crease the number. 
        
        return s_dict == t_dict;
    }
};

//idea: use dictionary to store characters and the number they showing up for each string. 
//then compare those two dictionary together. 
