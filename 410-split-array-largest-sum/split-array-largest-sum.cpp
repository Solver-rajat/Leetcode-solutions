class Solution 
{
public:
    bool canSplit(vector<int>& v, int mid, int k)
    {
        int sum = 0;
        int count = 1;

        for(int i = 0; i < v.size(); i++)
        {
            if(sum + v[i] <= mid)
            {
                sum += v[i];
            }
            else
            {
                sum = v[i];
                count++;

                if(count > k)
                {
                    return false;
                }
            }
        }

        return true;
    }

    int splitArray(vector<int>& v, int k) 
    {
        int n =v.size();
        int low = *max_element(v.begin(), v.end());
        int high = accumulate(v.begin(), v.end(), 0);
        int ans = INT_MAX;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(canSplit(v, mid, k))
            {
                ans = min(mid, ans);
                high = mid - 1;
            }

            else
            {
                low = mid + 1;
            }
        }  
        return ans;  
    }
};