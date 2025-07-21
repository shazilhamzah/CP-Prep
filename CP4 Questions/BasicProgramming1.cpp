#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (t == 1)
    {
        printf("%d\n", 7);
        return 0;
    }
    else if (t == 2)
    {
        if (a[0] > a[1])
        {
            printf("%s\n", "Bigger");
            return 0;
        }
        else if (a[0] == a[1])
        {
            printf("%s\n", "Equal");
            return 0;
        }
        else
        {
            printf("%s\n", "Smaller");
            return 0;
        }
    }
    else if (t == 3)
    {
        int x = a[0], y = a[1], z = a[2];
        printf("%d\n", (x + y + z - min({x, y, z}) - max({x, y, z})));
        return 0;
    }
    else if (t == 4)
    {
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
        }
        printf("%d\n", sum);
        return 0;
    }
    else if (t == 5)
    {
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                sum += a[i];
        }
        printf("%d\n", sum);
        return 0;
    }
    else if (t == 6)
    {
        for (int i = 0; i < n; i++)
        {
            char x = (a[i] % 26) + 97;
            printf("%c", x);
        }
        return 0;
    }
    else if (t == 7)
    {
        vector<bool> v(n, false);
        int i = 0;
        while (true)
        {
            if (i >= n || i < 0)
            {
                printf("Out\n");
                return 0;
            }
            else if (i == n - 1)
            {
                printf("Done\n");
                return 0;
            }
            else if (v[i])
            {
                printf("Cyclic\n");
                return 0;
            }
            v[i] = true;
            i = a[i];
        }
    }
    return 0;
}