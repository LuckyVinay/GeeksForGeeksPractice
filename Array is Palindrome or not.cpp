#include<bits/stdc++.h>
using namespace std;
int palindrone(int arr[] , int n)
{
    int flag = 0;
    for(int i =0;i <= n/2; i++)
    {
        if(arr[i] != arr[n-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag ==1)
    {
		cout<<"not palindrone";
    }
    else
        cout<<"palindrone";
}

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    cin>>arr[i];
    int n = sizeof(arr)/sizeof(arr[0]);
    palindrone(arr,n);
    return 0;
}
