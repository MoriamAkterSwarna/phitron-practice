// Description: Shortest Distance between two nodes in a graph using Floyd Warshall Algorithm

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 100 + 1;
// const long long INF = 1e18;

// long long dist [ N ][ N ];

// void floyd( int n ) {

//     for ( int k = 1; k <= n; k++ ) {
//         for ( int i = 1; i <= n; i++ ) {
//             for ( int j = 1; j <= n; j++ ) {
//                 if ( dist [ i ][ k ] + dist [ k ][ j ] < dist [ i ][ j ] ) {

//                     dist [ i ][ j ] = dist [ i ][ k ] + dist [ k ][ j ];

//                     }
//                 }

//             }
//         }
//     }

// int main( ) {
//     int n , e;
//     cin >> n >> e;


//     for ( int i = 1; i <= n; i++ ) {
//         for ( int j = 1; j <= n; j++ ) {
//             dist [ i ][ j ] = INF;
//             if ( i == j ) {
//                 dist [ i ][ j ] = 0;
//                 }
//             }

//         }


//     while ( e-- ) {
//         int a , b , c;
//         cin >> a >> b >> c;
//         dist [ a ][ b ] = c;
//         }


//     floyd( n );


//     int q;
//     cin >> q;
//     while ( q-- ) {
//         int x , y;
//         cin >> x >> y;
//         if ( dist [ x ][ y ] == INT_MAX ) {
//             cout << -1 << endl;
//             }
//         else {
//             cout << dist [ x ][ y ] << endl;
//             }
//         }



//     return 0;
//     }


// #include<bits/stdc++.h>

// using namespace std;

// class Edge {
//     public:
//     int u , v , c;
//     Edge( int u , int v , int c ) {
//         this->u = u;
//         this->v = v;
//         this->c = c;
//         }
//     };

// const int N = 1e2 + 10;
// long long dist [ N ];


// int main( ) {

//     int n , e;
//     cin >> n >> e;

//     vector<Edge> edgeList;
//     while ( e-- ) {
//         int u , v , c;
//         cin >> u >> v >> c;
//         edgeList.push_back( Edge( u , v , c ) );
//         edgeList.push_back( Edge( v , u , c ) );
//         }

//     for ( int i = 0; i < n; i++ ) {
//         dist [ i ] = INT_MAX;
//         }

//     dist [ 0 ] = 0;

//     for ( int i = 0; i < n - 1; i++ ) {
//         for ( Edge ed : edgeList ) {
//             int u , v , c;
//             u = ed.u;
//             v = ed.v;
//             c = ed.c;
//             if ( dist [ u ] < INT_MAX && dist [ u ] + c < dist [ v ] ) {
//                 dist [ v ] = dist [ u ] + c;
//                 }

//             if( dist [ v ] < INT_MAX && dist [ v ] + c < dist [ u ] ) {
//                 dist [ u ] = dist [ v ] + c;
//                 }


//             }
//         }

//     int q;
//     cin >> q;
//     while ( q-- ) {
//         int x , y;
//         cin >> x >> y;

//         if( dist [ x ] == INT_MAX || dist [ y ] == INT_MAX ) {
//             cout << -1 << endl;
//             }
//         else {
//             cout << dist [ x ] + dist [ y ] << endl;
//             }
//         }


//     return 0;


//     }



// #include<bits/stdc++.h>

// using namespace std;

// #define ll long long int

// const int N = 105;
// vector<pair<int , int>> v [ N ];
// ll dis [ N ];
// int n , e;

// class cmp {
//     public:
//     bool operator()( pair<int , int> a , pair<int , int> b ) {
//         return a.second > b.second;
//         }
//     };

// void dijkstra( int src ) {
//     priority_queue<pair<int , int> , vector<pair<int , int>> , cmp> q;
//     q.push( { src, 0 } );
//     dis [ src ] = 0;

//     while ( !q.empty( ) ) {
//         pair<int , int> parent = q.top( );
//         q.pop( );
//         int node = parent.first;
//         int cost = parent.second;

//         for ( pair<int , int> child : v [ node ] ) {
//             int childNode = child.first;
//             int childCost = child.second;

//             if ( cost + childCost < dis [ childNode ] ) {
//                 dis [ childNode ] = cost + childCost;
//                 q.push( { childNode, dis [ childNode ] } );
//                 }
//             }
//         }
//     }

// int main( ) {
//     cin >> n >> e;

//     while ( e-- ) {
//         int a , b , w;
//         cin >> a >> b >> w;
//         v [ a ].push_back( { b, w } );
//         // v [ b ].push_back( { a, w } );
//         }

//     for ( int i = 1; i <= n; i++ ) {
//         dis [ i ] = LLONG_MAX;
//         }

//     int t;
//     cin >> t;

//     while ( t-- ) {
//         int x , y;
//         cin >> x >> y;

//         for ( int i = 1; i <= n; i++ ) {
//             dis [ i ] = LLONG_MAX;
//             }

//         dijkstra( x );

//         if ( dis [ y ] != LLONG_MAX ) {

//             cout << dis [ y ] << "\n";
//             }
//         else {
//             cout << "-1" << "\n";
//             }
//         }

//     return 0;
//     }


#include <bits/stdc++.h>
#define ll long long int
const long long int INF = 1e18 + 5;
using namespace std;
int main( )
    {
    ll n , e;
    cin >> n >> e;
    ll adj [ n + 5 ][ n + 5 ];
    for ( int i = 1; i <= n; i++ )
        {
        for ( int j = 1; j <= n; j++ )
            {
            adj [ i ][ j ] = INF;
            if ( i == j )
                adj [ i ][ j ] = 0;
            }
        }
    while ( e-- )
        {
        ll a , b , c;
        cin >> a >> b >> c;
        adj [ a ][ b ] = min( adj [ a ][ b ] , c );
        // adj [ b ][ a ] = min( adj [ b ][ a ] , c );
        }
    for ( int k = 1; k <= n; k++ )
        {
        for ( int i = 1; i <= n; i++ )
            {
            for ( int j = 1; j <= n; j++ )
                {
                if ( adj [ i ][ k ] + adj [ k ][ j ] < adj [ i ][ j ] )
                    {
                    adj [ i ][ j ] = adj [ i ][ k ] + adj [ k ][ j ];
                    }
                }
            }
        }

    int q;
    cin >> q;
    while ( q-- )
        {
        int s , d;
        cin >> s >> d;
        if ( adj [ s ][ d ] == INF )
            cout << -1 << endl;
        else
            cout << adj [ s ][ d ] << endl;
        }

    return 0;
    }