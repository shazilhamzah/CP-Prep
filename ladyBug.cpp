#include <bits/stdc++.h>
using namespace std;

int countZeros(vector<char> s, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    // fast_io;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int len;
        cin >> len;
        string s, t;
        cin >> s >> t;

        vector<char> v1;
        for (int j = 0; j + 1 < len; j += 2)
        {
            v1.push_back(s[j]);
            v1.push_back(t[j + 1]);
        }

        vector<char> v2;
        for (int j = 0; j + 1 < len; j += 2)
        {
            v2.push_back(t[j]);
            v2.push_back(s[j + 1]);
        }

        int group1 = countZeros(v1, v1.size());
        int group2 = countZeros(v2, v2.size());

        int half = ceil((len) / 2);
        if (group1 >= half && group2 >= half)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
