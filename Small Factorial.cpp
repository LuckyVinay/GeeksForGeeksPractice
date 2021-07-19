class Solution
{
	public:
		long long int find_fact(int n)
		{
		    // Code here.
		    long long int sum = 1;
		    for(int i =1; i<=n; i++)
		    {
		        sum = sum*i;
		    }
		    return sum;
		}
};
