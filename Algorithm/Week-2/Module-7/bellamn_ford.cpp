#include<bits/stdc++.h>

using namespace std;

class Edge {
    public:
    int u , v , c;
    Edge( int u , int v , int c ) {
        this->u = u;
        this->v = v;
        this->c = c;
        }
    };

const int N = 1e5 + 10;
int dist [ N ];



int main( ) {

    int n , e;
    cin >> n >> e;

    vector<Edge> edgeList;
    while ( e-- ) {
        int u , v , c;
        cin >> u >> v >> c;

        edgeList.push_back( Edge( u , v , c ) );
        }
    // for(Edge ed: edgeList){
    //     cout << ed.u << " " << ed.v << " " << ed.c << endl;
    // }

    for ( int i = 0; i < n; i++ ) {
        dist [ i ] = INT_MAX;
        }

    dist [ 0 ] = 0;
    for ( int i = 0; i < n - 1; i++ ) {
        for ( Edge ed : edgeList ) {
            int u , v , c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if ( dist [ u ] < INT_MAX && dist [ u ] + c < dist [ v ] ) {
                dist [ v ] = dist [ u ] + c;
                }
            }
        }

    for ( int i = 0; i < n; i++ ) {
        cout << dist [ i ] << " ";
        }
    

    return 0;
    }