#include<bits/stdc++.h>

using namespace std;

vector<int> v [ 1005 ];
bool vis [ 1005 ];
void bfs( int src ) {

    queue < int > q;
    q.push( src );
    vis [ src ] = true;
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
    memset( vis, false, sizeof( vis ) );
    bfs( src );



    return 0;
}