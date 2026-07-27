class Solution 
{
public:
    void merge(vector<int>& nums, int low, int mid, int high)
    {
        vector<int> temp;
        int left = low;
        int right = mid+1;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            temp.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = temp[i - low];
        } 
    }

    int countPairs(vector<int>& nums, int low, int mid, int high) 
    {
        int right = mid + 1;
        int count = 0;

        for (int i = low; i <= mid; i++) 
        {
            while (right <= high && (long long)nums[i] > 2LL * nums[right]) 
            {
                right++;
            }
            count += (right - (mid + 1));
        }

        return count;
    }

    int merge_sort(vector<int>& v, int low, int high)
    {
        int count = 0;
        if(low >= high)
            return count;

        int mid = (low + high)/2;
        count += merge_sort(v, low, mid);
        count += merge_sort(v, mid+1, high);
        count += countPairs(v, low, mid, high);
        merge(v, low, mid, high);
        return count;
    }

    int reversePairs(vector<int>& v) 
    {
        int n = v.size();
        return merge_sort(v, 0, n-1);
    }
};