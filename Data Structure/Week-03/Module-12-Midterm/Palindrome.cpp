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

void insert_at_tail( Node*& head , Node*& tail , int val ) {   // O(1)

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

void print_normal( Node* head ) {
    Node* tmp = head;
    while ( tmp != NULL )
        {
        cout << tmp->val << " ";
        tmp = tmp->next;
        }
    cout << endl;

    }

void print_reverse( Node* tail ) {
    Node* tmp = tail;

    while ( tmp != NULL )
        {
        cout << tmp->val << " ";
        tmp = tmp->prev;
        }

    cout << endl;

    }

int main( ) {

    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while ( true ) {
        cin >> val;
        if ( val == -1 ) break;
        insert_at_tail( head , tail , val );
        }

    Node* tmp = head;
    Node* tmp2 = tail;

    // print_normal( head );
    // print_reverse( tail );

    bool flag = true;
    while ( tmp != NULL )
        {
        if ( tmp->val != tmp2->val ) {

            flag = false;
            break;
            }
        else flag = true;

        tmp = tmp->next;
        tmp2 = tmp2->prev;
        }

    if ( flag ) cout << "YES" << endl;
    else cout << "NO" << endl;


    return 0;
    }