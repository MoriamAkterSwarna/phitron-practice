#include<bits/stdc++.h>

using namespace std;

vector<int> v [ 1005 ];
bool vis [ 1005 ];
int level [ 1005 ];
int parent [ 1005 ]; 
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
                parent[ child ] = par; 
                }
            }



        }
    }
int main( ) {

    int n , e;
    cin >> n >> e;
    while ( e-- ) {
        int u , v;
        cin >> u >> v;
        v [ u ].push_back( v );
        v [ v ].push_back( u );
        }
    int src, des;
    cin >> src >> des;
    memset( vis , false , sizeof( vis ) );
    memset( level , 0 , sizeof( level ) );
    memset( par , -1 , sizeof( par ) ); 
    bfs( src );

    int x = des;
    vector<int> path; 
    while ( x != -1 ) {
        // cout << x << " ";
        path.push_back( x );
        x = parent [ x ];
        }
    reverse( path.begin( ) , path.end( ) );
    // for( int i = 0; i < path.size( ); i++ ) {
    //     cout << path [ i ] << " ";
    //     }

    for ( int val : path ) {
        cout << val << " ";
        }
    
    return 0;
    }