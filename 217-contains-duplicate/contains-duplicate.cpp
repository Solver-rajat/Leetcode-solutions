class Solution {
public:
    bool containsDuplicate(vector<int>& a) 
    {
        int n = a.size();

        unordered_map<int, int> mpp;

        for(int i = 0; i < n; i++)
        {
            mpp[a[i]]++;
            if(mpp[a[i]] > 1)
            {
                return true;
            }
        }
        return false;
    }
};