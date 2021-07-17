class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
         int max1 = -1, max2 = -1, max3 = -1;
        
        for(int i = 0; i < n; i++)
        {
            if(a[i] > max1)
            {
                max3 = max2;
                max2 = max1;
                
                max1 = a[i];
            }
            else if(a[i] > max2)
            {
                max3 = max2;
                
                max2 = a[i];
            }
            else if(a[i] > max3)
            {
                max3 = a[i];
            }
        }
        
        return max3;
    }
};
