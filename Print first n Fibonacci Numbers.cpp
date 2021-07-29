class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> sum(n,0);
        sum[0] = 1;
        sum[1] = 1;
        for(long long i=2;i<n;i++)
        {
            sum[i] = sum[i-1] + sum[i-2];
        }
        return sum;
    }
};
