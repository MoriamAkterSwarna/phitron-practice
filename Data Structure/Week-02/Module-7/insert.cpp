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

void print_linked_list( Node* head ) {   // O(n)
    Node* tmp = head;
    while ( tmp != NULL )
        {
        cout << tmp->val << " ";
        tmp = tmp->next;
        }
    cout << endl;
    }

void insert( Node* head , int pos , int v ) {   // O(n)
    Node* newNode = new Node( v );
    Node* tmp = head;

    for ( int i = 1; i <= pos - 1; i++ ) {    // O(n)
        tmp = tmp->next;
        }
    // cout << tmp->val << endl; 

    // tmp = pos-1; here 

    newNode->next = tmp->next;
    tmp->next = newNode; 


    }

int size( Node* head ) {   // O(n)
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next; 
        }
    return count; 

    }

void insert_head( Node*& head, int v ) {    // O(1)

    Node* newNode = new Node( v );

    newNode->next = head;
    head = newNode; 
    }

void insert_tail( Node* &head , Node* &tail , int val ) {  // O(1)
    Node* newNode = new Node( val );
    if ( head == NULL ) {
        head = newNode;
        tail = newNode;
        return; 
        }

    tail->next = newNode;
    tail = newNode; 
    }
int main( ) {
    

    Node* head = new Node( 15 );
    Node* a = new Node( 25 );
    Node* b = new Node( 35 );
    Node* c = new Node( 45 );
    Node* d = new Node( 55 );
    Node* e = new Node( 65 );

    Node* tail = e; 
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;



    // print_linked_list( head );

    // insert( head , 3 , 100 );
    print_linked_list( head );

    int pos , val;
    cin >> pos >> val;

    if ( pos > size( head ) ) {
        cout << "Invalid Index... ";
        }
    else if(pos == 0){
        insert_head( head , val ); 
        }
    else if ( pos == size( head ) ) {
        insert_tail(head, tail, val); 
        }
    else {
        insert( head , pos , val ); 
        }
    print_linked_list( head );
    return 0;
    }