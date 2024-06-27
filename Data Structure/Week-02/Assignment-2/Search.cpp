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

void insert_at_tail( Node*& head , Node*& tail , int val ) {
    Node* newNode = new Node( val );

    if ( head == NULL ) {
        head = newNode;
        tail = newNode;
        return;
        }
    tail->next = newNode;
    tail = newNode;


    }

void search_index( Node* head , int x ) {
    Node* tmp = head;

    int index = 0;
    bool flag = false;
    while ( tmp != NULL )
        {
        if ( tmp->val == x ) {
            flag = true;
            break; 
            }
        index++;
        tmp = tmp->next;
        }


    if ( flag ) {
        cout << index << endl;
        }
    else {
        cout << "-1" << endl;
        }
    
    }

int main( ) {

    int t;
    cin >> t;

    while ( t-- ) {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while ( true ) {
            cin >> val;
            if ( val == -1 ) break;

            insert_at_tail( head , tail , val );
            }

        int x;
        cin >> x;

        search_index( head , x );

        }


    return 0;
    }