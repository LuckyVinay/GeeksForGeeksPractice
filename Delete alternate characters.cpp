class Solution {
  public:
    string delAlternate(string S) {
        // code here
        string x = "";
        for (int i = 0; i < S.length(); i++)
        {
            if (i % 2 == 1)
            {
                continue;
            }
            x+= S[i];
        }
        return x;
    }
};
