#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

bool vis [ N ];

bool ans;

vector<int> adj [ n ];
int parA [ N ];

void dfs( int parent ) {
    vis [ parent ] = true;
    cout << parent << endl;
    for ( int child : adj [ parent ] ) {

        if ( vis [ child ] && child != parA [ parent ] )
            {
            ans = true;
            cout << parent << " " << child << " " << parA [ parent ] << " ";
            }
        if ( !vis [ child ] ) {
            dfs( child );
            parA [ child ] = parent;
            }
        }
    }


int main( ) {

    int n , e;
    cin >> n >> e;
    while ( e-- ) {
        int a , b;
        cin >> a >> b;
        adj [ a ].push_back( b );
        adj [ b ].push_back( a );


        }
    memset( vis , false , sizeof( vis ) );
    memset( parA , -1 , sizeof( parA ); )

        ans = false;
    for ( int i = 0; i < n; i++ ) {
        if ( !vis [ i ] )
            {
            dfs( i );
            }
        }

    for ( int i 0; i < n; i++ ) {
        cout << parA [ i ] << " ";
        }

    if ( ans ) {
        cout << "Cycle found" << endl;
        }
    else
        cout << "Cycle not found" << endl;

    return 0;
    }