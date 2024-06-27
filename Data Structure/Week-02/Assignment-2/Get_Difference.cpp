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
void insert_tail( Node*& head , Node*& tail , int value ) {

    Node* newNode = new Node( value );

    if ( head == NULL ) {
        head = newNode;
        tail = newNode;
        return;
        }
    tail->next = newNode;
    tail = newNode;
    }

void find_difference( Node* head ) {
    int max = INT_MIN;
    int min = INT_MAX;
    Node* tmp = head;

    while ( tmp != NULL )
        {
        if ( max < tmp->val ) {
            max = tmp->val;
            }
        if ( min > tmp->val ) {
            min = tmp->val;
            }

        tmp = tmp->next;
        }

    cout << max - min << endl;
    }


void print_linked_list( Node* head ) {
    Node* tmp = head;
    while ( tmp != NULL )
        {
        cout << tmp->val << " ";
        tmp = tmp->next;
        }
    cout << endl;
    }

int main( ) {

    Node* head = NULL;
    Node* tail = NULL;

    int value;
    while ( true )
        {

        cin >> value;
        if ( value == -1 ) {
            break;
            }
        insert_tail( head , tail , value );
        }


    // print_linked_list( head );
    find_difference( head );
    return 0;
    }