#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testCases, size;
    cin >> testCases;
    int arr[100];

    while (testCases--)
    {
        cin >> size;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int MAX = arr[0], MIN = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] >= MAX)
            {
                MAX = arr[i];
            }
            else if (arr[i] <= MIN)
            {
                MIN = arr[i];
            }
        }
        cout << MAX << " " << MIN << endl;
    }
    return 0;
}
