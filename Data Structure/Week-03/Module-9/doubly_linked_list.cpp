#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;


    Node( int val ) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
        }
    };


// O(n)
void print_normal( Node* head ) {
    Node* tmp = head;
    while ( tmp != NULL )
        {
        cout << tmp->val << " ";
        tmp = tmp->next;
        }
    cout << endl;

    }


//O(n)
void print_reverse( Node* tail ) {
    Node* tmp = tail;

    while ( tmp != NULL )
        {
        cout << tmp->val << " ";
        tmp = tmp->prev;
        }

    cout << endl;

    }

// O(n)
void insert_at_position( Node* head , int pos , int val ) {
    Node* newNode = new Node( val );
    Node* tmp = head;
    for ( int i = 1; i <= pos - 1; i++ ) {
        tmp = tmp->next;
        }

    newNode->next = tmp->next;  // 100 -> 20 
    tmp->next = newNode; //20 -> 100

    newNode->next->prev = newNode;  // 100 <- 30 
    newNode->prev = tmp;  // 20 <-100
    }

// O(n)
int size( Node* head ) {
    int count = 0;
    Node* tmp = head;

    while ( tmp != NULL ) {
        count++;

        tmp = tmp->next;
        }

    return count;
    }


// O(1)
void insert_head( Node*& head , Node*& tail , int val ) {
    Node* newNode = new Node( val );

    if ( head == NULL ) {
        head = newNode;
        tail = newNode; 
        return; 
        }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    }
// O(1)
void insert_at_tail( Node * &head,  Node*& tail , int val ) {   // O(1)

    Node* newNode = new Node( val );

    if ( tail == NULL ) {
        head = newNode;
        tail = newNode;
        return; 
        }
    tail->next = newNode;
    newNode->prev = tail; 
    tail = tail->next; 
    
    }


int main( ) {

    Node* head = new Node( 10 );
    Node* a = new Node( 20 );
    Node* b = new Node( 30 );
    Node* c = new Node( 40 );
    Node* tail = c;


    //connection 

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;

    int pos , val;
    cin >> pos >> val;
    if ( pos >= size( head ) ) {
        cout << "Invalid" << endl;
        }
    else if ( pos == 0 ) {
        insert_head( head ,tail,  val );
        }

    else if ( pos = size( head ) ) {
        insert_at_tail(head,  tail, val ); 
        }
    
    else {

        insert_at_position( head , pos , val );
        }

    print_normal( head );
    print_reverse( tail );

    int sz = size( head );

    cout << sz;
    return 0;
    }