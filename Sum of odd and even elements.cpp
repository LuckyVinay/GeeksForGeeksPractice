class Solution
{
public:
    vector<int> find_sum(int n)
    {
        int odd = n%2 + n/2;
        int even = n/2;
        vector<int> sum;
        sum.push_back(odd*odd);
        sum.push_back(even*(even + 1));
        return sum;
    }
};
