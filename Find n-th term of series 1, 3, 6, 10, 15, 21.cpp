class Solution {
  public:
    int findNthTerm(int N) {
        // code here
        int sum = 0;
        for(int i=1;i<=N;i++)
        {
            sum = sum + i;
        }
        return sum;
    }
};
