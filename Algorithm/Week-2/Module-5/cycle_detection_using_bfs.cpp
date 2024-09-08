#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5;

bool vis [ N ];

bool ans; 

vector<int> adj [ n ];
int parA [ N ]; 

void bfs( int s ) {
    queue<int> q;
    q.push( s );

    vis [ s ] = true;
    while ( !q.empty( ) ) {
        int parent = q.front( );

        cout << parent << endl; 
        q.pop( );

        for ( int child : adj [ parent ] ) {

            if ( vis [ child ] && parA[parent] != child) {
                ans = true; 
                }

            if ( !vis [ child ] ) {
                vis [ child ] = true;
                parA[child] = parent
                q.push( child );
                }
            }
        }
    }

int main(){

    int n, e; 
    cin >> n >> e; 
    while(e--){
        int a, b; 
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
                bfs( i ); 
                }
            }

        if ( ans ) {
            cout << "Cycle found" << endl;
            }
        else
            cout << "Cycle not found" << endl; 

    return 0;
}