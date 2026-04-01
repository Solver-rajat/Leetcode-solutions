class Solution {
public:
    int majorityElement(vector<int>& a) 
    {
        int n = a.size();
        map<int, int> hash;
        for (int i = 0; i < n; i++)
        {
            hash[a[i]]++;
        }

        for (auto it: hash)
        {
            if (it.second > (n/2))
            {
                return it.first;
            }
        }
        return -1;
    }
};