class Solution {
public:
    void setZeroes(vector<vector<int>>& a) 
    {
        int n = a.size();
        int m = a[0].size();
        int col0 = 1; // To mark if the first column needs to be set to 0
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] == 0)
                {
                    a[i][0] = 0; // Mark the i-th row

                    if( j != 0) // To avoid overwriting the first column marker
                    {
                        a[0][j] = 0; // Mark the j-th column
                    }

                    else
                    {
                        col0 = 0; // Mark that the first column needs to be set to 0
                    }
                }
            }
        }

        // Set the marked rows and columns to 0
        for (int i = 1; i < n; i++)
        {
            for (int j = 1; j < m; j++)
            {
                if (a[i][j] != 0)
                {
                    if (a[i][0] == 0 || a[0][j] == 0)
                    {
                        a[i][j] = 0;
                    }
                }
            }
        }
        
        if (a[0][0] == 0) // If the first row needs to be set to 0
        {
            for (int j = 0; j < m; j++)
            {
                a[0][j] = 0;
            }
        }

        if (col0 == 0) // If the first column needs to be set to 0
        {
            for (int i = 0; i < n; i++)
            {
                a[i][0] = 0;
            }
        }
    }
};