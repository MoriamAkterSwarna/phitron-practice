#include<bits/stdc++.h>

using namespace std;

int main( ) {

    list<int> myList = { 20, 50,10,30,100,40,10,50,20,60 };

    // myList.remove( 10 );

    // myList.sort( ); // O(n log n)
    // myList.sort(greater<int>() ); 

    // myList.unique( );  // O(n)

    // myList.reverse();
    for ( int val : myList ) {
        cout << val << endl;
        }
    return 0;
    }