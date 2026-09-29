class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        /* 
        Brute force Approach:
        Comparing each letter individually from s with each letter in t
        if letter from s is found in t, then continue, else return false

        return true at the end of nested loop
        */

       /*
       A significantly easier approach can be done using the sort function
       Sort both strings, then check if they are the same index by index
       */
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        //Edge case check: 
        //The strings cannot possibly be anagrams if length is not the same 
        if(s.length() != t.length())
        {
            return false;
        }

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == t[i])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};
