#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
char matrix [ MAX ][ MAX ];
bool visited [ MAX ][ MAX ];
vector<pair<int , int>> directions = { {0, 1}, {0, -1}, {-1, 0}, {1, 0} };
int n , m;

bool isValid( int si , int sj ) {
    if ( si < 0 || si >= n || sj < 0 || sj >= m || matrix [ si ][ sj ] == '#' || visited [ si ][ sj ] ) {
        return false;
        }
    return true;
    }

void dfs( int si , int sj ) {
    visited [ si ][ sj ] = true;
    for ( auto val : directions ) {
        int ci = si + val.first;
        int cj = sj + val.second;
        if ( isValid( ci , cj ) ) {
            dfs( ci , cj );
            }
        }
    }

int main( ) {
    cin >> n >> m;
    pair<int , int> start , end;

    for ( int i = 0; i < n; ++i ) {
        for ( int j = 0; j < m; ++j ) {
            cin >> matrix [ i ][ j ];
            if ( matrix [ i ][ j ] == 'A' ) {
                start = { i, j };
                }
            else if ( matrix [ i ][ j ] == 'B' ) {
                end = { i, j };
                }
            }
        }

    memset( visited , false , sizeof( visited ) );

    dfs( start.first , start.second );

    if ( visited [ end.first ][ end.second ] ) {
        cout << "YES" << endl;
        }
    else {
        cout << "NO" << endl;
        }

    return 0;
    }
