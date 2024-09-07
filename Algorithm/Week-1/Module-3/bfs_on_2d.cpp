
#include<bits/stdc++.h>

using namespace std;

bool vis [ 20 ][ 20 ];
int dist [ 20 ][ 20 ];
vector<int> v [ 100 ];
int n , m;
vector <pair<int , int>  >  d = { {0,1},{0,-1}, {-1,0}, {1,0} };

bool valid( int ci , int cj ) {
    if ( ci < 0 || ci >= n || cj < 0 || cj >= m ) {
        return false;
        }
    return true;
    }
void bfs( int si , int sj ) {
    queue<pair<int , int> > q;
    q.push( { si , sj } );
    vis [ si ][ sj ] = true;
    dist [ si ][ sj ] = 0;

    while ( !q.empty( ) ) {
        pair<int , int> p = q.front( );
        q.pop( );
        cout << p.first << " " << p.second << endl;
        for ( int i = 0; i < 4; i++ ) {



            int ci = p.first + d [ i ].first;
            int cj = p.second + d [ i ].second;

            if ( valid( ci , cj ) == true && vis [ ci ][ cj ] == false ) {
                q.push( { ci , cj } );
                vis [ ci ][ cj ] = true;
                dist [ ci ][ cj ] = dist [ p.first ][ p.second ] + 1;
                }

            }


        }
    }
int main(){

    memset( vis , false , sizeof(vis) );
    memset( dist , -1 , sizeof(dist) );

    
    cin >> n >> m;
    char a [ 20 ][ 20 ]; 

    for( int i = 0; i < n; i++ ) {
        for( int j = 0; j < m; j++ ) {
            cin >> a [ i ][ j ];
            }
        } 

    int si , sj;
    cin >> si >> sj;

    bfs( si , sj );
    cout << dist [ 0 ][ 3 ] << endl;

    return 0;
}