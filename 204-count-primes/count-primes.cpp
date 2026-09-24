class Solution {
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;

       
        int size = n / 2;

        vector<bool> isPrime(size, true);

        // Index i represents number 2*i + 1
        // index 0 -> 1
        isPrime[0] = false;

        for (int i = 3; i * i < n; i += 2)
        {
            if (isPrime[i / 2])
            {
                for (int j = i * i; j < n; j += 2 * i)
                {
                    isPrime[j / 2] = false;
                }
            }
        }

        // 2 itself + all remaining odd primes
        int count = 1;

        for (int i = 1; i < size; i++)
        {
            if (isPrime[i])
                count++;
        }

        return count;
    }
};