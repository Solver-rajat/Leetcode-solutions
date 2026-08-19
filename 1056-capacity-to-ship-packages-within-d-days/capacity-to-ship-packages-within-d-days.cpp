class Solution {
public:
    int daysReq(vector<int>& weights, int cap)
    {
        int n = weights.size();
        int days = 1; // Start with one day
        int currentload = 0; // Current load of the ship

        for (int i = 0; i < n; i++)
        {
            if (weights[i] > cap) // If a single package exceeds capacity, it's impossible
                return INT_MAX;

            if (currentload + weights[i] > cap) // If adding this package exceeds capacity, increment days
            {
                days++;
                currentload = weights[i]; // Start new load with current package
            }

            else
            {
                currentload += weights[i]; // Add package to current load
            }
        }

        return days;
    }
    int shipWithinDays(vector<int>& weights, int D)
    {
        int n = weights.size();
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = high;

        while(low <= high)
        {
            int mid = low + (high - low)/2;
            int days = daysReq(weights, mid);

            if (days <= D)
            {
                ans = mid; // Update ans to the current mid
                high = mid - 1; // Try to find a smaller capacity
            }
            else
            {
                low = mid + 1; // Increase the capacity
            }
        }
        return ans;
    }
};