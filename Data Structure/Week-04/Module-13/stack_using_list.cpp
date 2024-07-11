#include<bits/stdc++.h>

using namespace std;



class myStack {
    public:
    list<int> l;

    void push( int val ) {  // O(1)
        l.push_back( val );
        }
    void pop( ) {// O(1)

        l.pop_back( );
        }
    int top( ) {// O(1)
        return l.back( );

        }
    int size( ) {// O(1)
        return l.size( );
        }
    bool isEmpty( ) {// O(1)
        if ( l.size( ) == 0 ) return true;
        return false;
        }

    }

int main( ) {

    myStack st;

    int n;
    cin >> n;
    for ( int i = 0; i < n; i++ )
        {
        int x;
        cin >> x;
        st.push( x );
        }
    while ( !st.isEmpty( ) )
        {
        cout << st.top( ) << " ";
        st.pop( );
        }

    return 0;
    }