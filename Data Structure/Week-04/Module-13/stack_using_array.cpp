#include<bits/stdc++.h>

using namespace std;

class myStack {
    public:
    vector<int> v;


    void push( int val ) {  // O(1)
        v.push_back( val );
        }

    void pop( ) {// O(1)

        v.pop_back( );
        }
    int top( ) {// O(1)
        return v.back( );
        }
    int size( ) {// O(1)
        return v.size( );
        }
    bool isEmpty( ) {// O(1)
        if ( v.size( ) == 0 ) return true;
        return false;
        }

    }

int main( ) {


    myStack st;
    // st.push( 10 );
    // st.push( 20 );

    // cout << st.top( ) << endl;

    // st.pop( );
    // cout << st.top( ) << endl; 

    // st.pop( );
    // cout << st.top( ) << endl; // it will return garbage value or error because stack is empty
    // cout << st.isEmpty( ) << endl;

    // if ( st.isEmpty( ) == false ) {
    //     cout << st.top( ) << endl;
    //     }

    int n;
    cin >> n; 
    for ( int i = 0; i < n; i++ )
        {
        int x;
        cin >> x; 
        st.push( x );
        }
    while (!st.isEmpty( ) )
    {
        cout << st.top( ) << endl;
        }
 

    return 0;
    }