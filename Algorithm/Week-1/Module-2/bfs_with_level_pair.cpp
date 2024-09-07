#include<bits/stdc++.h>

using namespace std;

vector<int> v [ 1005 ];
bool vis [ 1005 ];

void bfs( int src,int des ) {

    queue < pair<int, int> > q;
    q.push( {src,0} );
    vis [ src ] = true;
    bool found = false; 
    while ( !q.empty( ) ) {
        pair<int,int> p = q.front( );
        q.pop( );
        int par = p.first;
        int lev = p.second;
        if(pa == des){
            cout << "Level of " << des << " is " << lev << endl;
            found = true; 
        }

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
                q.push({ child, lev+1} );
                vis [ child ] = true;
    
                }
            }



        }
    if ( !found ) {
        cout << "Node not found" << endl;
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
    int src;
    cin >> src;
    memset( vis , false , sizeof( vis ) );
  
    bfs( src,6 );

    

    return 0;
    }