class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        int m = nums1.size();
        int n = nums2.size();
        
        int totalSize = m + n;

        int medianIndex1 = (totalSize - 1) / 2;
        int medianIndex2 = totalSize / 2;

        int i = 0, j = 0;
        int currentIndex = 0;
        int median1 = 0, median2 = 0;

        while(currentIndex <= medianIndex2)
        {
            int currentElement;
            if(i < m && (j >= n || nums1[i] <= nums2[j]))
            {
                currentElement = nums1[i];
                i++;
            }
            else
            {
                currentElement = nums2[j];
                j++;
            }

            if(currentIndex == medianIndex1)
            {
                median1 = currentElement;
            }
            if(currentIndex == medianIndex2)
            {
                median2 = currentElement;
            }

            currentIndex++;
        }
        return (median1 + median2) / 2.0;
    }
};