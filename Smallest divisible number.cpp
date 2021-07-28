class Solution{
public:
    long long getSmallestDivNum(long long n)
    {
        // code here
        long res = 1;
        for(long i = 2; i <= n; i++)
        {
            res = (res*i)/__gcd(res,i);
        }
        return res;
    }
};
