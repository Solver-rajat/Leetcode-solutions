class Solution {
public:
    vector<int> rearrangeArray(vector<int>& a) 
    {
        int n = a.size();
        vector<int> pos;
        vector<int> neg;

        for(int i = 0; i < n; i++)
        {
            if (a[i] >= 0)
            {
                pos.push_back(a[i]);
            }

            else
            {
                neg.push_back(a[i]);
            }
        }

        for(int i = 0; i < (n/2); i++)
        {
            a[2*i] = pos[i];
            a[2*i+1] = neg[i];
        }

        return a;
    }
};