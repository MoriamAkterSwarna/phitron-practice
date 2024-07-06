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

int size( Node* head ) {
    int count = 0;
    Node* tmp = head;

    while ( tmp != NULL ) {
        count++;

        tmp = tmp->next;
        }

    return count;
    }
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
void insert_at_tail( Node*& head , Node*& tail , int val ) {
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
void insert_at_position( Node* head , int pos , int val ) {
    Node* newNode = new Node( val );

    Node* tmp = head;
    for ( int i = 1; i < pos; i++ ) {
        tmp = tmp->next;
        }

    newNode->next = tmp->next;
    if ( tmp->next != NULL ) { 
        newNode->next->prev = newNode;
        }
    tmp->next = newNode;
    newNode->prev = tmp;
    }

void print_normal( Node* head ) {
    if ( head == NULL ) {
        return;
        }
    cout << "L -> ";
    Node* temp = head;
    while ( temp != NULL ) {
        cout << temp->val << " ";
        temp = temp->next;
        }
    cout << endl;
    }

void print_reverse( Node* tail ) {
    if ( tail == NULL ) {
        return;
        }
    cout << "R -> ";
    Node* temp = tail;
    while ( temp != NULL ) {
        cout << temp->val << " ";
        temp = temp->prev;
        }
    cout << endl;
    }


int main( ) {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;
    while ( q-- ) {
        int pos , val;
        cin >> pos >> val;
        if ( pos < 0 || pos > size( head ) ) { 
            cout << "Invalid" << endl;
            continue;
            }
        else if ( pos == 0 ) {
            insert_head( head , tail , val );
            }
        else if ( pos == size( head ) ) {
            insert_at_tail( head , tail , val );
            }

        else {
            insert_at_position( head , pos , val );
            }



        print_normal( head );
        print_reverse( tail );
        }

    return 0;
    }