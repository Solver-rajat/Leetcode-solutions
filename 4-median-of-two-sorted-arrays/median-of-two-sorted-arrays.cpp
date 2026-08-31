class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int m = nums1.size();
        int n = nums2.size();
        
        vector<int> mergedArray(m + n);
        for(int i = 0; i < m; i++)
        {
            mergedArray[i] = nums1[i];
        }

        for(int i = 0; i < n; i++)
        {
            mergedArray[m + i] = nums2[i];
        }

        int totalSize = m + n;
        sort(mergedArray.begin(), mergedArray.end());
        
        if(totalSize % 2 == 0)
        {
            return (mergedArray[totalSize / 2 - 1] + mergedArray[totalSize / 2]) / 2.0;
        }
        else
        {
            return mergedArray[totalSize / 2];
        }
    }
};