#include<bits/stdc++.h>

using namespace std;

vector<int> v [ 1005 ];
bool vis [ 1005 ];
int level [ 1005 ]; 
void bfs( int src ) {

    queue < int > q;
    q.push( src );
    vis [ src ] = true;
    level [ src ] = 0;
    while ( !q.empty( ) ) {
        int par = q.front( );
        q.pop( );
        cout << par << " ";

        // for( int i = 0; i < v [ par ].size( ); i++ ) {
        //     int child = v [ par ][ i ];
        //     cout << child << " ";
        //     if ( vis [ child ] == false ) {
        //         q.push( child );
        //         vis [ child ] = true;
        //     }
        // }

        for ( int child : v [ par ] ) {
            cout << child << " ";
            if ( vis [ child ] == false ) {
                q.push( child );
                vis [ child ] = true;
                level [ child ] = level [ par ] + 1;
                }
            }



        }
    }
    int main( ) {

    int n,e; 
    cin >> n >> e; 
    while(e--){
        int u,v; 
        cin >> u >> v; 
        v [ u ].push_back( v );
        v [ v ].push_back( u );  
        }
    int src;
    cin >> src;
    memset( vis , false , sizeof( vis ) );
    memset( level , 0 , sizeof( level ) );
    bfs( src );

    for( int i = 1; i <= n; i++ ) {
        cout << "Level of " << i << " is " << level [ i ] << endl;
    }

    return 0;
}