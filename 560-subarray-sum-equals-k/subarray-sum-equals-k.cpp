class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n = a.size();
        map<int, int>presum;
        presum[0] = 1;

        int sum = 0, count = 0;
        for(int i=0; i<n; i++)
        {
            sum += a[i];
            
            if(presum.find(sum-k) != presum.end())
            {
                count += presum[sum - k];
            }
            presum[sum]++;
        }
        return count;
    }
};