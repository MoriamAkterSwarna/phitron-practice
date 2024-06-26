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


void print_recursion( Node* n ) {
    //base case 
    if ( n == NULL ) return;
    cout << n->val << " ";
    print_recursion( n->next ); 
    }
void print_recursionReverse( Node* n ) {
    //base case 
    if ( n == NULL ) return;
    print_recursionReverse( n->next ); 
    cout << n->val << " ";
    }

int main( ) {

    Node* head = new Node( 15 );
    Node* a = new Node( 25 );
    Node* b = new Node( 35 );
    Node* c = new Node( 45 );
    Node* d = new Node( 55 );
    Node* e = new Node( 65 );

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

     

    print_recursion( head );
    cout << endl; 
    print_recursionReverse( head );
    return 0;
    }