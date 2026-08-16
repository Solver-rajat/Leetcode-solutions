class Solution {
public:
    bool possible(vector<int>& bloomday, int m, int k, int mid)
    {
        int n = bloomday.size(); 
        int flowers = 0, count = 0;
        for(int i = 0; i < n; i++)
        {
            if(bloomday[i] <= mid)
            {
                flowers++;
            }

            else
            {
                flowers = 0;
            }

            if(flowers == k)
            {
                count++;
                flowers = 0;
            }
        }

        return count >= m;
    }

    int minDays(vector<int>& bloomday, int m, int k) 
    {
        int n = bloomday.size();
        int low = *min_element(bloomday.begin(), bloomday.end());
        int high = *max_element(bloomday.begin(), bloomday.end());
        int ans = -1;

        if ((long long)m*k > n)
        {
            return -1;
        }

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if (possible(bloomday, m, k, mid) == 1)
            {
                ans = mid;
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