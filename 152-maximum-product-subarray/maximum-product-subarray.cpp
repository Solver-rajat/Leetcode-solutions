class Solution {
public:
    int maxProduct(vector<int>& v) 
    {
        int n = v.size();
        int maxpro = v[0];
        for(int i = 0; i < n; i++)
        {
            int pro = 1;
            for(int j = i; j < n; j++)
            {
                pro *= v[j];
                maxpro = max(maxpro, pro);
            }

        }
        return maxpro;
    }
};