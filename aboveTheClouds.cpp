#include <bits/stdc++.h>
using namespace std;

void bubbleSort(string &arr, int n)
{
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }
}

bool check(string s, int n)
{
    
    return false;
}

int main()
{
    int testCases;
    cin >> testCases;
    for (int x = 0; x < testCases; x++)
    {
        // INPUTS
        int n;
        cin >> n;
        string s;
        cin >> s;

        // SORTING
        bubbleSort(s, n);

        check(s, n) ? cout << "YES" : cout << "NO";

        cout << endl;
    }

    return 0;
}