// this one done by converting in string


class Solution{
  public:
    /*you are required to complete this method*/
    int convertFive(int n)
    {
    //Your code here
    string str = to_string(n);// converting int to string
    int size = str.length();
    for(int i=0; i<size; i++)
    {
        if(str[i] == '0')
        {
            str[i] = '5';
        }
    }
    int num = 0;
    num = stoi(str);
    return num;
    }
};
