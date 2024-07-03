#include<bits/stdc++.h>

using namespace std;

int main( ) {

    list<int> myList = { 10, 20, 30,40,50,60,70,30 };
    // list<int> newList;
    list<int> newList={500,600,700};
    // newList = myList; 
    newList.assign( myList.begin( ) , myList.end( ) );

    // myList.pop_back( ); // it will remove 30 
    // myList.pop_back( ); // it will remove 20

    // myList.pop_front( );  // it will remove 1st element 10 


    // myList.insert( next( myList.begin( ) , 2 ) , 100 );  // O(n)
    myList.insert( next( myList.begin( ) , 0 ) , 100 );  // O(n)
    // myList.insert( next( myList.begin( ) , 3 ) , {100,200,300} );  // O(n)




    // for ( int val : newList ) {

    // myList.erase( next( myList.begin( ) , 2 ) );

    // myList.insert( next( myList.begin( ) , 3 ) , newList.begin( ) , newList.end( ) ); 

    // myList.erase( next( myList.begin( ) , 2 ) , next( myList.begin( ) , 5 ) ); 


    // replace( myList.begin( ) , myList.end( ) , 30 , 100 );


    for ( int val : myList ) {
        cout << val << endl;
        }

    auto it = find( myList.begin( ) , myList.end( ) , 60 );

    if ( it == myList.end( ) ) {
        cout << "not found"; 
        }
    else {
        cout << "found"; 
        }


    return 0;
    }