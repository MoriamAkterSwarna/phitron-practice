#include<bits/stdc++.h>

using namespace std;

int main( ) {

    queue<int> q; // queue declaration 

    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        q.push( x );
        }
    cout << q.size( ) << endl;
    while ( !q.empty( ) ) {
        cout << q.front( ) << " ";
        q.pop( );
        }
    if ( !q.empty( ) ) {
        cout << q.front( ) << " ";
        }


    return 0;
    }