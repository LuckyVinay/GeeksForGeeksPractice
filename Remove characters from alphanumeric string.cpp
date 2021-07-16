class Solution{
public:	

	string removeCharacters(string S) 
	{
	    string s2;
	    // Your code goes here
	    for(int i=0;i<S.size();i++)
	    { // to get only alphbet you just have to replace A and Z and put 0 and 9
	        if (S[i] < 'A' || S[i] > 'Z' &&  S[i] < 'a' || S[i] > 'z')
	        {

                s2 += S[i]; 
            }
	    }
	    return s2;
	    }
};
