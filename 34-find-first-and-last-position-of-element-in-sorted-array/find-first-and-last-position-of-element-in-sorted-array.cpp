class Solution {
public:
    int lowerbound(vector<int>& a, int n, int target)
    {
        int ans = n;
        int low = 0, high = n-1;

        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(a[mid] >= target)
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

    int upperbound(vector<int>& a, int n, int target)
    {
        int ans = n;
        int low = 0, high = n-1;

        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(a[mid] > target)
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

    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int lb = lowerbound(nums, n, target);

        if (lb == n || nums[lb] != target)
            return {-1, -1};

        int ub = upperbound(nums, n, target);

        return {lb, ub - 1};
    }
};