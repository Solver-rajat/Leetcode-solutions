class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) 
    {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            if(nums[mid] - (mid+1) < k) //nums[mid] - (mid+1) = no. of missing numbers till mid element
            {
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }

        return k + high + 1;
    }
};