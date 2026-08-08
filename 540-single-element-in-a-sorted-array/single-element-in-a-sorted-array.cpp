class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int n = nums.size();

        // If numsay has only one element, return it
        if (n == 1) return nums[0];

        // Loop through the numsay
        for (int i = 0; i < n; i++) {

            // Check if it's the first element and not equal to the next
            if (i == 0) {
                if (nums[i] != nums[i + 1])
                    return nums[i];
            }

            // Check if it's the last element and not equal to the previous
            else if (i == n - 1) {
                if (nums[i] != nums[i - 1])
                    return nums[i];
            }

            // Check if the current element is not equal to both neighbors
            else {
                if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                    return nums[i];
            }
        }

        // Dummy return if no element found (problem guarantees there is one)
        return -1;  
    }
};