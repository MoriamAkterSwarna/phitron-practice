#include<bits/stdc++.h>

using namespace std;

class Person {
    public:
    string name;
    int roll;
    int marks;

    Person( string name , int roll , int marks ) {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
        }
    };

class compare {
    public:
    bool operator()( Person a , Person b ) {
        if ( a.marks == b.marks ) {

            return a.roll > b.roll;
            }
        return a.marks < b.marks;
        }
    };


int main( ) {
    int n;
    cin >> n;
    priority_queue< Person , vector<Person> , compare> pq;

    for ( int i = 0; i < n; i++ ) {
        string name;
        int roll , marks;
        cin >> name >> roll >> marks;
        pq.push( { name , roll , marks } );
        }
    int q;
    cin >> q;
    while ( q-- ) {
        int x;
        cin >> x;
        if ( x == 0 ) {
            
            string name;
            int roll , marks;

            cin >> name >> roll >> marks;
            pq.push( { name , roll , marks } );
            cout << pq.top( ).name << " " << pq.top( ).roll << " " << pq.top( ).marks << endl;
            }

        else if ( x == 1 ) {
            if ( pq.empty( ) ) {
                cout << "Empty" << endl;
                }
            else {
                cout << pq.top( ).name << " " << pq.top( ).roll << " " << pq.top( ).marks << endl;
                }

            }
        else if ( x == 2 ) {
            if ( !pq.empty( ) ) {
                pq.pop( );
                }
            if ( pq.empty( ) ) {
                cout << "Empty" << endl;
                }
            else {
                cout << pq.top( ).name << " " << pq.top( ).roll << " " << pq.top( ).marks << endl;
                }
            }
        }



    return 0;
    }