#include<bits/stdc++.h>

using namespace std;

int main( ) {
    ios_base::sync_with_stdio( false );
    cin.tie( NULL );
    queue<string> q;
    int qr;
    cin >> qr;

    while ( qr-- ) {
        int n;
        cin >> n;
        string name;
        if ( n == 0 ) {
            cin >> name;
            q.push( name );
            }
       else if ( n == 1 ) {
            if ( !q.empty( ) ) {
                cout << q.front( ) << endl;
                q.pop( );
                }
            else {
                cout << "Invalid" << endl;
                }
            }
    


        }

    return 0;
    }