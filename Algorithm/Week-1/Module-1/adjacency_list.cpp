#include<bits/stdc++.h>

using namespace std;

int main(){

    int n , e;
    cin >> n >> e;
    vector<int> mat [ n ];
    int a [ 5 ]

    while ( e-- ) {
        int a , b;
        cin >> a >> b;

        mat [ a ].push_back( b );
        mat [ b ].push_back( a ); // for undirected graph // we can remove this line for directed graph

        }

    vector<int> v; 
    // for ( int x : v ) {
    //     cout << x << " "; 
    //     }

    for(int i = 0; i < mat[0].size(); i++){
        cout << mat[0][i] << " ";
        }

    return 0;
}