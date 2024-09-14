#include<bits/stdc++.h>

using namespace std;

#define ll long long int 

const int N = 1e3 + 1;
vector<pair<ll , ll>> v [ N ];
ll dis [ N ];
ll n , e;


class cmp {
    public:
    bool operator()( pair<ll , ll> a , pair<ll , ll> b ) {
        return a.second > b.second;
        }
    };

void dijkstra( ll src ) {
    priority_queue<pair<ll , ll> , vector<pair<ll , ll>> , cmp> q;
    q.push( { src, 0 } );
    dis [ src ] = 0;

    while ( !q.empty( ) ) {
        pair<ll , ll> parent = q.top( );
        q.pop( );
        ll node = parent.first;
        ll cost = parent.second;

        for ( pair<ll , ll> child : v [ node ] ) {
            ll childNode = child.first;
            ll childCost = child.second;

            if ( cost + childCost < dis [ childNode ] ) {
                dis [ childNode ] = cost + childCost;
                q.push( { childNode, dis [ childNode ] } );
                }
            }



        }

    }

void canGo(ll src,  ll d , ll dw ) {
    dijkstra( src );
    if ( dis [ d ] <= dw ) {
        cout << "YES\n";
        }
    else {
        cout << "NO\n" ;
        }
    }
int main( ) {


    cin >> n >> e;

    while ( e-- ) {
        ll a , b , w;
        cin >> a >> b >> w;
        v [ a ].push_back( { b,w } );

        }

    for ( ll i = 1; i <= n; i++ ) {
        dis [ i ] = LLONG_MAX;
        }


    ll src;
    cin >> src;

    ll t;
    cin >> t;

    while ( t-- ) {

        ll d , dw;
        cin >> d >> dw;

        canGo( src, d, dw );

        }


    return 0;
    }


