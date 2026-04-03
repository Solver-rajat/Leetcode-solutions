class Solution {
public:
    int majorityElement(vector<int>& a) 
    {
    int count = 0;
    int ele;
    int n = a.size();
    
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            ele = a[i];
        }
            
        else if (a[i] == ele)
        {
            count++;
        }

        else
        {
            count--;
        }

    }

        int count1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == ele)
                count1++;
        }

        if (count1 > (n/2))
            return ele;

        return -1;
    }
};