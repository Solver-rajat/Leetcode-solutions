class Solution {
public:
    int countCommas(int n) 
    {
        int temp = n;
        int count = 0;
        while(temp > 0)
        {
            temp = temp/10;
            count++;
        }

        if(count < 4)
            return 0;

        else 
        {
            return (n - 999);
        }
    }
};