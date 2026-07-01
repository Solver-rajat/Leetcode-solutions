class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) 
    {
        int n = a.size();
        vector<int> ans(n, 0);
        int posIndex = 0;
        int negIndex = 1; 
        for(int i = 0; i < n; i++)
        {
            if(a[i] >= 0) 
            {
                ans[posIndex] = a[i];
                posIndex += 2; 
            }
            else 
            {
                ans[negIndex] = a[i];
                negIndex += 2; 
            }
        }
        return ans;
    }
};