#include<bits/stdc++.h>

using namespace std;

const long long int llong = 1e18;
const int N = 1005;
long long dist [ N ];
class Edge {
    public:
    int u , v , c;
    Edge( int u , int v , int c ) {
        this->u = u;
        this->v = v;
        this->c = c;
        }
    };



int main( ) {

    int n , e;
    cin >> n >> e;
    vector<Edge> edgeList;

    while ( e-- ) {
        int u , v , c;
        cin >> u >> v >> c;

        edgeList.push_back( Edge( u , v , c ) );


        }

    for ( int i = 1; i <= n; i++ ) {

        dist [ i ] = LLONG_MAX;
        }

    int src;
    cin >> src;
    dist [ src ] = 0;

    for ( int i = 1; i <= n; i++ ) {
        for ( Edge ed : edgeList ) {
            int u , v , c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if ( dist [ u ] < LLONG_MAX && dist [ u ] + c < dist [ v ] ) {
                dist [ v ] = dist [ u ] + c;

                }
            }
        }
    bool cycle = false;
    for ( int i = 1; i <= n; i++ ) {
        for ( Edge ed : edgeList ) {
            int u , v , c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if ( dist [ u ] < LLONG_MAX && dist [ u ] + c < dist [ v ] ) {
                cycle = true;
                break;
                }
            }
        }

    if ( cycle ) {
        cout << "Negative Cycle Detected" << endl;
        }
    else {
        int t;
        cin >> t;
        while ( t-- ) {
            int des;
            cin >> des;
            if ( dist [ des ] == LLONG_MAX ) {
                cout << "Not Possible" << endl;
                }
            else {
                cout << dist [ des ] << endl;
                }
            }

        }





    return 0;
    }