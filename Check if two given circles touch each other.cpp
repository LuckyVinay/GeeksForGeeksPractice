class Solution {
  public:
    int circleTouch(int X1, int Y1, int R1, int X2, int Y2, int R2) {
        // code here
        int sum = 0, rum =0;
        sum = sqrt (pow(X1-X2,2) + pow(Y1-Y2,2));
        rum = R1+R2;
        if(sum < rum)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
