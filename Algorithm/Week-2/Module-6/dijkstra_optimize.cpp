#include<bits/stdc++.h>

using namespace std;

const int N = 100;
vector<pair<int , int>> v [ N ];
int dis [ N ];


class cmp {
    public:
    bool operator()( pair<int , int> a , pair<int , int> b ) {
        return a.second < b.second;
        }
    }
void dijkstra( int src ) {

    
    priority_queue<pair<int,int> , vector<pair<int,int>>, cmp> pq; 
    pq.push( { src,0 } );
    dis [ src ] = 0;
    while ( !pq.empty( ) ) {
        pair<int , int> parent = pq.top( );
        pq.pop( );
        int node = parent.first;
        int cost = parent.second;

        // for ( int i = 0; i < v [ node ].size( ); i++ ) {
        //     pair<int,int> child = 
        //     }

        for ( pair<int , int> child : v [ node ] ) {
            int childNode = child.first;
            int childCost = child.second;

            if ( cost + childCost < dis [ childNode ] ) {

                //path relax 
                dis [ childNode ] = cost + childCost;
                pq.push( { childNode, dis [ childNode ] } )
                }
            }
        }


    }


int main( ) {

    int n , e;
    cin >> n >> e;
    while ( e-- ) {
        int a , b , c;
        v [ a ].push_back( { b,c } );
        v [ b ].push_back( { a,c } );
        }

    for ( int i = 0; i < n; i++ ) {
        dis [ i ] = INT_MAX;
        }
    // dijkstra( 0 );
    priority_queue<pair<int , int> , vector<pair<int , int>>> pq;

    pq.push( { 1,10 } );
    pq.push( { 3,7 } );
    pq.push( { 2,15 } );
    pq.push( { 4, 5 } );

    // for ( int i = 0; i < n; i++ ) {
    //     cout << i << "-> " << dis [ i ] << endl;
    //     }

    while ( !pq.empty( ) ) {
        cout << pq.top( ).first << " " << pq.top( ).second << endl;
        pq.pop( );
        }

    return 0;
    }