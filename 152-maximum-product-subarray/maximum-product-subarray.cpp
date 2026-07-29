class Solution {
public:
    int maxProduct(vector<int>& v) 
    {
        int n = v.size();
        int maxpro = INT_MIN;
        int pre = 1, suff = 1;
        for(int i = 0; i < n; i++)
        {
            if(pre == 0)
                pre = 1;
            
            if(suff == 0)
                suff = 1;

            pre = pre * v[i];
            suff = suff * v[n-i-1];

            maxpro = max(maxpro, max(pre, suff));
        }
        return maxpro;
    }
};