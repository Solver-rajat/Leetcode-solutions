class Solution {
public:
    int maxDepth(string s) 
    {
        int n = s.size();
        int count = 0, maxDepth = 0;

        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                count++;
                maxDepth = max(count, maxDepth);
            }

            if(s[i] == ')')
                count--;
        }

        return maxDepth;
    }
};