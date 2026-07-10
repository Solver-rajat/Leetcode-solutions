class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int n = nums.size();
        map<int, int> mpp;
        mpp[0] = 1;
        int presum = 0;
        int count = 0;     

        for(int i = 0; i < n; i++)
        {
            presum += nums[i];
            int rem = presum - k;

            count += mpp[rem];
            mpp[presum]++;
        }   
        return count;
    }
};