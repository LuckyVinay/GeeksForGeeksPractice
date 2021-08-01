class Solution {
  public:
    int getAngle(int H , int M) {
        // code here
        float ma;
        float ha;
        ma = 6*M;
        if(M == 60)
        {
            ha = 30*H;
        }
        else 
        {
            ha = 30*H+0.5*M;
        }
        float angle = abs(ha - ma);
        if(180 - angle < 0)
        {
            return floor(360-angle);
        }
        else
        {
            return floor(angle);
        }
    }
};
