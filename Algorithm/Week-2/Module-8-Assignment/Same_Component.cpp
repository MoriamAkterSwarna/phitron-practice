#include <bits/stdc++.h>
using namespace std;


const int N = 1e3 + 1;
bool vis [ N ][ N ];
char a [ N ][ N ];
int n , m;

pair<int , int> s;
pair<int , int> e;
int dx [ 4 ] = { -1, 0, 1, 0 };
int dy [ 4 ] = { 0, 1, 0, -1 };

bool isValid( int x , int y ) {
    return x >= 0 && x < n && y >= 0 && y < m && a [ x ][ y ] == '.' && !vis [ x ][ y ];
    }

void dfs( int x , int y ) {
    vis [ x ][ y ] = true;
    for ( int i = 0; i < 4; i++ ) {
        int nx = x + dx [ i ];
        int ny = y + dy [ i ];
        if ( isValid( nx , ny ) ) {
            dfs( nx , ny );
            }
        }
    }

int main( ) {
    cin >> n >> m;

    memset( vis , false , sizeof( vis ) );
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) {
            cin >> a [ i ][ j ];
            }
        }
    int x1 , y1 , x2 , y2;
    cin >> x1 >> y1 >> x2 >> y2;
    s = { x1, y1 };
    e = { x2, y2 };

    dfs( x1 , y1 );
    if ( vis [ x2 ][ y2 ] ) {
        cout << "YES" << endl;
        }
    else {
        cout << "NO" << endl;
        }
    return 0;
    }