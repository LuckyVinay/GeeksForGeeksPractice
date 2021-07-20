#include <bits/stdc++.h>
using namespace std;
int main() 
{
    //code
    int t = 0;
    cin>> t;
    while(t--)
    {
        int n = 0;
        cin >> n;
        int arr[n];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for(int i=n;i>0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
