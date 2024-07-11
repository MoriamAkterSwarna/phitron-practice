#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int val;
    Node* next;


    Node( int val ) {
        this->val = val;
        this->next = NULL;
        }
    };

class myQueue {
    public:
    Node* head = NULL;
    Node* tail = NULL;

    int sz = 0;

    void push( int val ) {
        sz++;
        Node* newNode = new Node( val );
        if ( head == NULL ) {
            head = newNode;
            tail = newNode;
            return;
            }
        else {
            tail->next = newNode;
            tail = tail->next;
            }
        }

    void pop( ) {
        // if ( head == NULL ) {
        //     // cout << "Queue is empty" << endl;
        //     return;
        //     }
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if ( head == NULL ) {
            tail = NULL;
            }

        }

    int front( ) {
        return head->val;
        }

    int size( ) {
        return sz;
        }

    bool empty( ) {
        if ( sz == 0 ) {
            return true;
            }
        return false;
        }
    };

int main( ) {

    myQueue q;
    // q.push( 10 );
    // q.push( 20 );
    // q.pop( );
    // cout << q.front( ) << endl;
    // cout << q.size( ) << endl;
    // cout << q.empty( ) << endl;
    // q.pop( );
    // cout << q.empty( ) << endl;
    // cout << q.size( ) << endl;
    // cout << q.front( ) << endl; 
    // q.pop( );
    // cout << q.empty( ) << endl;
    // cout << q.size( ) << endl;
    // cout << q.front( ) << endl; // it will give garbage value 

    int n; 
    cin >> n;
    for( int i = 0; i < n; i++ ) {
        int x;
        cin >> x;
        q.push( x );
        } 

    while( !q.empty( ) ) {
        cout << q.front( ) << " ";
        q.pop( );
        }

    return 0;
    }