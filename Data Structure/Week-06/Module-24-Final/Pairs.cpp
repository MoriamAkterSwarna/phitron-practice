// #include<bits/stdc++.h>

// using namespace std;

// class Person
//     {
//         public:
//         string str;
//         int num;

//         Person( string str , int num )
//             {
//             this->str = str;
//             this->num = num;

//             }
//     };
// class  cmpr {
//     public:
//     bool operator()( Person a , Person b ) {
//         if ( a.str == b.str ) {
//             return a.num < b.num;
//             }
//         return a.str > b.str;
//         }
//     };
// int main( ) {

//     int n;
//     cin >> n;
//     priority_queue< Person , vector<Person> , cmpr> pq;
//     for ( int i = 0; i < n; i++ ) {
//         string s;
//         int x;
//         cin >> s >> x;
//         pq.push( { s, x } );
//         }
//     while ( !pq.empty( ) ) {
//         cout << pq.top( ).str << " " << pq.top( ).num << endl;
//         pq.pop( );
//         }

//     return 0;
//     }

#include<bits/stdc++.h>

using namespace std;

class compare {
    public:

    
    bool operator()( pair<string , int> a , pair<string , int> b ) {
        if ( a.first == b.first ) {
            return a.second < b.second;
            }
        return a.first > b.first;
        }
    };

int main( ) {
    int n;
    cin >> n;
    priority_queue<pair<string , int> , vector<pair<string , int>> , compare> pq;
    for ( int i = 0; i < n; i++ ) {
        string s;
        int x;
        cin >> s >> x;
        pq.push( { s, x } );
        }
    while ( !pq.empty( ) ) {
        cout << pq.top( ).first << " " << pq.top( ).second << "\n";
        pq.pop( );
        }
    return 0;
    }