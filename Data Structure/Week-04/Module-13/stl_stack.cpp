#include<bits/stdc++.h>

using namespace std;

int main(){

    stack<int> st; 
    // st.push( 10 );
    // st.push( 20 );
     

    // cout << st.top( ) << endl; // 20
    // st.pop( );
    // cout << st.top( ) << endl; // 10
    // cout << st.size( ) << endl; // 1
    // st.pop( ); // it will delete the last element
    // cout << st.size( ) << endl; // 0
    // cout << st.empty( ) << endl; // 1
    // cout << st.top( ) << endl; // it will give garbage value

    // if( st.empty( ) ) cout << "Stack is empty" << endl;
    // else cout << "Stack is not empty" << endl;

    
    int n; 
    cin >> n;
    for( int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        st.push( x );
        }

    while ( !st.empty( ) ) {
        cout << st.top( ) << " ";
        st.pop( );
        }
    cout << endl;
    return 0;
}