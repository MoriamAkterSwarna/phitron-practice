
#include<bits/stdc++.h>

using namespace std;

const int  N = 1e5 + 5;
vector<int> v [ N ];

bool vis [ N ];

void dfs( int src ) {
    cout << src << " ";
    vis [ src ] = true;
    for ( int child : v [ src ] ) {

        if ( !vis [ child ] ) {
            dfs( child );
            }
        }
    }
int main( ) {
    int n , e;
    cin >> n >> e;
    while ( e-- ) {
        int x , y;
        cin >> x >> y;
        v [ x ].push_back( y );
        v [ y ].push_back( x );
        }

    memset( vis , false , sizeof( vis ) );

    int c = 0;
    for ( int i = 0; i < n; i++ ) {
        if ( !vis [ i ] ) {
            dfs( i );
            c++;
            }
        }

cout << " component: " << c << endl ; 
    return 0;
    }