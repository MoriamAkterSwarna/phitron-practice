#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 
    cin >> n; 
    while ( n-- ) {

        set<int> s;
        int num;
        cin >> num;
        while ( num-- )
            {
            int x;
            cin >> x;
            s.insert( x ); // O(logN)
            }
       
        for (auto it = s.begin(); it != s.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        }

    return 0;
}