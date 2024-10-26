#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;

        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int firstMax = INT_MIN, secondMax = INT_MIN;
        int firstIndex = 0, secondIndex = 0;

        for (int i = 0; i < n; i++)
        {
            if (h[i] > firstMax)
            {
                secondMax = firstMax;
                secondIndex = firstIndex;
                firstMax = h[i];
                firstIndex = i;
            }
            else if (h[i] > secondMax && h[i] != firstMax)
            {
                secondMax = h[i];
                secondIndex = i;
            }

        }

        
        if( firstIndex < secondIndex)
        {
            cout << firstIndex  << " " << secondIndex  << endl;
        }
        else
        {
            cout << secondIndex  << " " << firstIndex  << endl;
        }  
         
    }

    return 0;
}