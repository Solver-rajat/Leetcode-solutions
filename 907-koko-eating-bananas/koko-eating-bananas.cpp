class Solution {
public:
    long long totalhours(vector<int>& a, int h)
    {
        int n = a.size();
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += ((long long)a[i] + h - 1) / h;
        }

        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        int maxval = *max_element(piles.begin(), piles.end());

        int low = 1, high = maxval;
        int ans = maxval;

        while(low <= high)
        {
            int mid = low + (high-low)/2;

            long long k = totalhours(piles, mid);

            if(k <= h)
            {
                ans = mid;
                high = mid-1;
            }

            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};