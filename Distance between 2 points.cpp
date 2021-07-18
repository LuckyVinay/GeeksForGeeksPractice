class Solution
{
	public:
		int distance(int x1, int y1, int x2, int y2)
		{
		    // Code here
		    int dis = 0,n;
		    n = pow(x1-x2,2) + pow(y1-y2,2);
		    dis = round (sqrt (n) );
		    return dis;
		}
};
