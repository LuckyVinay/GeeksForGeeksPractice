class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int sum = 0;
        int x = n;
        while(n>0)
        {
            int t = n%10;
            sum = sum + (t*t*t);
            n = n/10;
        }
        if(sum == x)
        {
            return "Yes";
        }
        else
            return "No";
    }
};
