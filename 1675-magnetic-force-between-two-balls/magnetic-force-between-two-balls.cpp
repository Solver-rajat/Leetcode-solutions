class Solution {
public:
    bool canPlace(vector<int>& v, int distance, int m)
    {
        int last = v[0];
        int count = 1;
        for(int i = 1; i < v.size(); i++)
        {
            if(v[i] - last >= distance)
            {
                last = v[i];
                count++;

                if(count == m)
                {
                    return true;
                }
            }
        }

        return false;
    }

    int maxDistance(vector<int>& position, int m) 
    {
        int n = position.size();
        sort(position.begin(), position.end());
        int low = 1;
        int high = position[n-1] - position[0];

        int ans = -1;

        while (low <= high)
        {
            int mid = low + (high - low) / 2;

            if(canPlace(position, mid, m))
            {
                ans = mid;
                low = mid + 1;
            }

            else
            {
                high = mid - 1;
            }
        }

        return ans;
    }
};