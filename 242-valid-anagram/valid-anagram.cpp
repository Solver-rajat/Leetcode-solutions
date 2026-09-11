class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.size() != t.size())
            return false;

        int fre[26] = {0};

        for(int i = 0; i < s.size(); i++)
        {
            fre[s[i] - 'a']++;
        }

        for(int i = 0; i < t.size(); i++)
        {
            fre[t[i] - 'a']--;
        }

        for(int i = 0; i < 26; i++)
        {
            if(fre[i] != 0)
                return false;
        }

        return true;  
    }
};