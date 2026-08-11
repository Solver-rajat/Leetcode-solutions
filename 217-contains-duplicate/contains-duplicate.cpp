class Solution {
public:
    bool containsDuplicate(vector<int>& a) 
    {
        int n = a.size();

        unordered_set<int> st;

        for(int i = 0; i < n; i++)
        {
            if(st.find(a[i]) != st.end())
            {
                return true;
            }

            st.insert(a[i]);
        }
        return false;
    }
};