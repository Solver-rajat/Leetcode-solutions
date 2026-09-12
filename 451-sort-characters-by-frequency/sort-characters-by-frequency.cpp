class Solution {
public:
    string frequencySort(string s) 
    {
        int n = s.length();
        string ans = "";
        unordered_map<char, int> mpp;

        for(int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }

        priority_queue<pair<int, char>> pq;

        for(auto it : mpp)
        {
            pq.push({it.second, it.first});
        }

        while(!pq.empty())
        {
            auto top = pq.top();
            int freq = top.first;
            char ch = top.second;
            
            ans += string(freq, ch);

            pq.pop();
        }

        return ans;
    }
};