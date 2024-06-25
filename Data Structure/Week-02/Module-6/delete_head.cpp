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

void insert_at_position( Node* head , int pos , int v ) {
    Node* newNode = new Node( v );

    Node* tmp = head;

    for ( int i = 1; i <= pos - 1; i++ ) {
        tmp = tmp->next;

        }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << "Insert at Position: " << pos << endl << endl;
    }

void insert_at_head( Node*& head , int v ) {
    Node* newNode = new Node( v );

    newNode->next = head;
    head = newNode;

    cout << endl << "Inserted at Head .........." << endl << endl;
    return;
    }

// ===============Delete ======================= 

void delete_from_postion( Node* head , int pos ) {

    Node* tmp = head;
    for ( int i = 1; i <= pos - 1; i++ ) {
        tmp = tmp->next;
        }

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;

    cout << endl << "Deleted node from postion: " << pos << endl << endl;
    }


void delete_head( Node*& head ) {
    Node* deleteNode = head;

    head = head->next;
    delete deleteNode;

    cout << endl << "Head deleted............." << endl << endl;
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

    Node* head = NULL;

    while ( true )
        {
        cout << "Option 1: Insert at Tail..." << endl;
        cout << "Option 2: Print the Linked List..." << endl;
        cout << "Option 3: Insert at Position..." << endl;
        cout << "Option 4: Insert at Head..." << endl;
        cout << "Option 5: Delete from Position..." << endl;
        cout << "Option 6: Delete Head..." << endl;
        cout << "Option 7: Terminate the Program..." << endl;

        int op;

        cin >> op;

        if ( op == 1 ) {

            int v;
            cout << "Enter a value you want to add: ";
            cin >> v;
            insert_at_tail( head , v );
            }
        else if ( op == 2 ) {
            print_linked_list( head );
            }
        else if ( op == 3 ) {
            int pos , v;

            cout << "Enter position at you want to insert: ";
            cin >> pos;

            cout << "Enter the value you want to insert: ";
            cin >> v;
            if ( pos == 0 ) {
                insert_at_head( head , v );
                }

            else {
                insert_at_position( head , pos , v );
                }

            }
        else if ( op == 4 ) {
            int v;
            cout << "Enter value: ";

            cin >> v;

            insert_at_head( head , v );
            }

        else if ( op == 5 ) {

            int pos;
            cout << "Enter the position you want to delete: ";
            cin >> pos;
            if ( pos == 0 ) {
                delete_head( head );
                }
            else {
                delete_from_postion( head , pos );
                }

            }

        else if ( op == 6 ) {
            delete_head( head );
            }

        else if ( op == 7 ) {
            break;
            }
        }
    return 0;

    }