#include<bits/stdc++.h>

using namespace std;

int main( ) {

    int n , e;
    cin >> n >> e;

    vector<int> matrix [ n ];

    while ( e-- ) {
        int a , b;
        cin >> a >> b;
        matrix [ a ].push_back( b );
        matrix [ b ].push_back( a );
        }

    int q;
    cin >> q;

    while ( q-- ) {
        int p;
        cin >> p;
        if ( !matrix [ p ].empty( ) ) {

            sort( matrix [ p ].begin( ) , matrix [ p ].end( ) , greater<int>( ) );
            for ( int val : matrix [ p ] ) {
                cout << val << " ";
                }

            cout << endl;

            }
        else {
            cout << -1 << endl;
            }


        }




    return 0;
    }