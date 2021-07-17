class Solution {
  public:
    int mean(int N , int A[]) {
        // code here
        int sum = 0 , mean =0;
        for(int i=0;i<N;i++)
        {
            sum = sum + A[i];
        }
        mean = sum / N ;
        return abs (mean);
    }
};
