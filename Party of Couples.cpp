class Solution
{ // using XOR  " ^ "
    public:
    int findSingle(int N, int arr[])
    {
        int num = 0;
        for(int i=0;i<N;i++)
        num = num^arr[i];
        return num;
    }
};
