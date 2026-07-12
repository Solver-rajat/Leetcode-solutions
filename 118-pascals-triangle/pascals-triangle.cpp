class Solution {
public:
    int nCr(int row, int col)
    {
        if(col > row)
            return 0;

        if(col == 0 || col == row)
            return 1;

        long long res = 1;
        for(int i = 0; i < col; i++)
        {
            res *= (row-i);
            res /= (i+1);
        }
        return res;
    }
    vector<int> generaterow(int n)
    {
        vector<int> row;
        for(int i = 0; i < n; i++)
        {
            row.push_back(nCr(n-1, i));
        }
        return row;
    }

    vector<vector<int>> generate(int n) 
    {
        vector<vector<int>> ans;
        for(int i = 1; i <= n; i++)
        {
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};