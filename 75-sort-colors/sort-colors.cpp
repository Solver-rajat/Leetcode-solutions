class Solution {
public:
    void sortColors(vector<int>& a) {
        int n  = a.size();

        int low = 0, mid = 0, high = n;

       int count0 = 0, count1 = 0, count2 = 0; // Initialize counters for 0s, 1s, and 2s
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            count0++; // Increment count of 0s
        }
        else if (a[i] == 1)
        {
            count1++; // Increment count of 1s
        }
        else
        {
            count2++; // Increment count of 2s
        }
    }
    int index = 0; // Initialize index to keep track of the position in the array
    for (int i = 0; i < count0; i++)
    {
        a[i] = 0;
    }

    for (int i = count0; i < count0+count1; i++)
    {
        a[i] = 1;

    }
    
    for (int i = count0+count1; i < n; i++)
    {
        a[i] = 2;
    }

   
}
    };