class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans;
        map<int, int> hash;

        for(int i = 0; i < n; i++)
        {
            hash[nums[i]]++;
        }    

        for(auto it : hash)
        {
            if(it.second > (n/3))
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};