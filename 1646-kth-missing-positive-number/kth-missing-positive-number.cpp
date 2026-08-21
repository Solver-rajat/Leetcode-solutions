class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) 
    {
        int missing = 0;
        int i = 1;

        while (true)
        {
            if(find(nums.begin(), nums.end(), i) == nums.end())
            {
                missing++;
            }

            if (missing == k)
            {
                return i;
            }

            i++;
        }
    }
};