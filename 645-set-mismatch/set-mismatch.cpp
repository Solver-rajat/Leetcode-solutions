class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size();
        long long sum = 0, sum2 = 0;
        long long Sn = (1LL * n * (n+1)) / 2;
        long long S2n = (1LL * n * (n+1) * (2LL*n+1)) / 6;

        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            sum2 += (long long)nums[i] * (long long)nums[i];
        }    

        long long val1 = sum - Sn; // x(repeat)-y(missing)
        long long val2 = sum2 - S2n; // x+y
        val2 = val2 / val1;

        long long x = (val1 + val2) / 2;
        long long y = x - val1;

        return {(int)x, (int)y};
    }
};