class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int,int> hash;

        for(int i = 0; i < n; i++)
        {
            hash[nums[i]]++;
        }

        int duplicate = -1;
        int missing = -1;

        for(int i = 1; i <= n; i++)
        {
            if(hash[i] == 2)
                duplicate = i;

            if(hash[i] == 0)
                missing = i;
        }

        return {duplicate, missing};
    }
};