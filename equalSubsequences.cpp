#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testCases;
    cin >> testCases;
    for (int x = 0; x < testCases; x++)
    {
        int size, ones;
        cin >> size >> ones;
        int arr[size];
        int i = 0;
        while (i < ones)
        {
            arr[i] = 1;
            i++;
        }
        while (i < size)
        {
            arr[i] = 0;
            i++;
        }

        for (int j = 0; j < size; j++)
        {
            cout << arr[j];
        }
        cout << endl;
    }

    return 0;
}