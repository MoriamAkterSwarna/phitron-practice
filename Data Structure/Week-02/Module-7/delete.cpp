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


void delete_node( Node* head , int pos )  // o(n)
    {
    Node* tmp = head;
    for ( int i = 1; i <= pos - 1; i++ ) {
        tmp = tmp->next;
        }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    }

void delete_head( Node*& head ) {  // O(1)
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode; 
    }

void print_linked_list( Node* head ) {   // O(n)
    Node* tmp = head;
    while ( tmp != NULL )
        {
        cout << tmp->val << " ";
        tmp = tmp->next;
        }
    cout << endl;
    }

int size( Node* head ) {   // O(n)
    Node* tmp = head;
    int count = 0;
    while ( tmp != NULL )
        {
        count++;
        tmp = tmp->next;
        }
    return count;

    }

int main( ) {

    Node* head = new Node( 15 );
    Node* a = new Node( 25 );
    Node* b = new Node( 35 );
    Node* c = new Node( 45 );
    Node* d = new Node( 55 );
    Node* e = new Node( 65 );

    // Node* tail = e;
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_linked_list( head );

    int pos;
    cin >> pos;
    if ( pos >= size( head ) ) {
        cout << "Invalid Index.... ";
        }
    else if ( pos == 0 ) {
        delete_head( head ); 
        }
    else {
        delete_node( head , pos );

        }
    print_linked_list( head );

    return 0;
    }