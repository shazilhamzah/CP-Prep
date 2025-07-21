#include <bits/stdc++.h>
using namespace std;


int main()
{
    int testCases;
    cin >> testCases;
    for (int x = 0; x < testCases; x++)
    {
        int n, s;
        cin >> n;
        cin >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int distance = min(abs(s - arr[0]), abs(s - arr[n - 1])) + (arr[n - 1] - arr[0]);
        cout << distance;
        cout << endl;
    }

    return 0;
}