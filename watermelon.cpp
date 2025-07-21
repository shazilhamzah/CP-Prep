#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    for(int i=1;i<w;i++){
        for (int j = 1; j < w; j++)
        {
            if(i+j==w && i%2==0 && j%2==0){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}