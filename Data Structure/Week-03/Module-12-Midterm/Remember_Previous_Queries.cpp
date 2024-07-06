#include<bits/stdc++.h>

using namespace std;

int main( ) {

    list <int> myList;

    int q;
    cin >> q;
    while ( q-- ) {
        int pos , val;
        cin >> pos >> val;

        if ( pos == 0 ) {
            myList.push_front( val );
            }
        else if ( pos == 1 ) {
            myList.push_back( val );
            }
        else if ( pos == 2 ) {
            if ( val < myList.size( ) ) {
                auto it = next( myList.begin( ) , val );
                myList.erase( it );
                }
            
            }


        cout << "L -> ";
        for ( int v : myList ) {
            cout << v << " ";
            }
        cout << endl;



        myList.reverse( );
        cout << "R -> ";
        for ( int v : myList ) {
            cout << v << " ";
            }
        cout << endl;
        myList.reverse( );

        }


    return 0;
    }