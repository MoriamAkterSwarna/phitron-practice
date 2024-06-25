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

void insert_at_tail( Node*& head , int v ) {

    Node* newNode = new Node( v );

    if ( head == NULL ) {
        // head = newNode;  //it will not change the original value if we normally use it 

        head = newNode; // it will affect the original value as we have take parameter as address of head 

        cout << "Head inserted...... " << endl << endl;
        return;

        }

    Node* tmp = head;

    while ( tmp->next != NULL )
        {
        tmp = tmp->next;
        }

    // tmp ekhon last node e 

    tmp->next = newNode;

    cout << "Value Inserted at Tail............" << endl << endl;

    }

void print_linked_list( Node* head ) {



    cout << endl << "Your Linked List: " << endl;

    Node* tmp = head;

    while ( tmp != NULL )
        {
        // cout << "Value: " << tmp->val << " is at Address: " << tmp->next << endl;

        cout << tmp->val << " ";
        tmp = tmp->next;
        }

    cout << endl << endl;

    }

int main( ) {
    int val;
    Node* head = NULL; 
    while ( true )
    {
        cin >> val;
        if ( val == -1 ) break;
        insert_at_tail( head , val ); 
        }
    
    print_linked_list( head );
    return 0;
    }
