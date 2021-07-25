long long int product(int ar[], int n, long long int mod)
 {
    //code here
    ll sum = 1;
    for(int i=0; i < n; i++)
    {
        sum = ((sum * ar[i])%mod);
    }
    return sum;
 }
