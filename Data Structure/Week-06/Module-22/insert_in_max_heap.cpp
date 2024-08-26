#include<bits/stdc++.h>

using namespace std;

int main( ) {

    //============ insert single element in max heap ================

    // vector<int> v = { 50, 40, 45, 30, 35, 42, 32, 25, 20, 10 };

    // int x;
    // cin >> x;
    // v.push_back( x );
    // int cur_idx = v.size( ) - 1;
    // cout << "cur_idx: " << cur_idx << endl;
    // int parent_idx = ( cur_idx - 1 ) / 2; // parent of cur_idx

    // cout << "parent_idx: " << parent_idx << endl;


    // while ( cur_idx != 0 )
    //     {
    //     int parent_idx = ( cur_idx - 1 ) / 2; // parent of cur_idx
    //     if ( v [ parent_idx ] < v [ cur_idx ] ) {
    //         swap( v [ parent_idx ] , v [ cur_idx ] );
    //         cur_idx = parent_idx;
    //         // parent_idx = ( cur_idx - 1 ) / 2;
    //         }
    //     else {
    //         break;
    //         }


    //     }

    // for(int val: v){
    //     cout << val << " ";
    // }

    //============ insert N number of elements in max heap ================
    vector<int> v;
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        v.push_back( x );
        int cur_idx = v.size( ) - 1;
        while ( cur_idx != 0 )
            {
            int parent_idx = ( cur_idx - 1 ) / 2; // parent of cur_idx
            if ( v [ parent_idx ] < v [ cur_idx ] ) {
                swap( v [ parent_idx ] , v [ cur_idx ] );

                // parent_idx = ( cur_idx - 1 ) / 2;
                }
            else
                break;

            cur_idx = parent_idx;


            }

        

        }
    for ( int val : v ) {
        cout << val << " ";
        }
    return 0;
    }