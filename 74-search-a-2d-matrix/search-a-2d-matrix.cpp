class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int rows = matrix.size();
        int columns = matrix[0].size();

        int low = 0, high = (rows*columns) - 1;
        while(low <= high)
        {
            int mid = low + (high - low) / 2;

            int m = mid / columns;
            int n = mid % columns;

            if(matrix[m][n] == target)
            {
                return 1;
            }

            else if(matrix[m][n] < target)
            {
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }
        return 0;
    }
};