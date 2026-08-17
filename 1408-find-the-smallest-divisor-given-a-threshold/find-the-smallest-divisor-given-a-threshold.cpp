class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) 
    {
        int n = nums.size();
        int low = 1, high = *max_element(nums.begin(), nums.end());

        int ans = high;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            long long sum = 0; // Use long long to avoid overflow

            for (int j = 0; j < n; j++) 
            {
                sum += ceil((double)nums[j] / mid);
            }

            if (sum <= threshold)
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