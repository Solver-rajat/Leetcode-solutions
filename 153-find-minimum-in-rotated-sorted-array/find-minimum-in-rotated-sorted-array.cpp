class Solution {
public:
    int findMin(vector<int>& a) 
    {
        int n = a.size();
        int mini = INT_MAX;
        int low = 0, high = n-1;

        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(a[low] <= a[mid]) //Left half is sorted
            {
                mini = min(mini, a[low]);
                low = mid + 1;
            }
            
            else
            {
                mini = min(mini, a[mid]);
                high = mid - 1;
            }
        }  

        return mini;
    }
};