class Solution {
public:
    int maxSubArray(vector<int>& a) 
    {
        int n = a.size();
        int maxSum = INT_MIN;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += a[i];

            maxSum = max(maxSum, sum);

            if (sum < 0)
            {
                sum = 0;
            }            
        }
        return maxSum;
    }
};