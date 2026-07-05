class Solution {
public:
    int longestConsecutive(vector<int>& a) 
    {   
        int n = a.size();

        if (n == 0)
        {
            return 0;
        }
        
        int longest = 1;
        int count; 
        unordered_set<int> s;

        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }

        for (auto it : s)
        {
            if(s.find(it-1) == s.end())
            {
                count = 1;

                while (s.find(it+1) != s.end())
                {
                    count++;
                    it++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};