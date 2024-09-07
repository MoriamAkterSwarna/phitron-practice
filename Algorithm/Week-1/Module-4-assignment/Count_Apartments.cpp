#include<bits/stdc++.h>

using namespace std;

const int MAX = 1001;
char matrix [ MAX ][ MAX ];
bool visited [ MAX ][ MAX ];
int n , m;
vector<pair<int , int>> directions = { {0, 1}, {0, -1}, {-1, 0}, {1, 0} };

bool isValid( int si , int sj ) {
    if ( si < 0 || si >= n || sj < 0 || sj >= m || matrix [ si ][ sj ] == '#' ) {
        return false;
        }
    return true;
    }

void dfs( int si , int sj ) {
    visited [ si ][ sj ] = true;
    for ( int i = 0; i < 4; i++ ) {
        int ci = si + directions[i].first;
        int cj = sj + directions[i].second;
        if ( isValid( ci , cj ) && !visited [ ci ][ cj ] ) {
            visited [ ci ][ cj ] = true;
            dfs( ci , cj );
            }
        }
    }

int main( ) {

   
    cin >> n >> m;

    for ( int i = 0; i < n; ++i ) {
        for ( int j = 0; j < m; ++j ) {
            cin >> matrix [ i ][ j ];
            }
        }

    int count = 0;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 0; j < m; j++ ) {
            if ( matrix [ i ][ j ] == '.' && !visited [ i ][ j ] ) {
                dfs( i , j );
                count++;
                }
            }
        }

    cout << count << endl;


    return 0;
    }