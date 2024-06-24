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

        return;

        }

    Node* tmp = head;

    while ( tmp->next != NULL )
        {
        tmp = tmp->next;
        }

    // tmp ekhon last node e 

    tmp->next = newNode;

    }

void print_linked_list( Node* head ) {



    cout << "Your Linked List: " << endl;

    Node* tmp = head;

    while ( tmp != NULL )
        {
        cout << "Value: " << tmp->val << " is at Address: " << tmp->next << endl;
        tmp = tmp->next;
        }

    }

int main( ) {

    Node* head = NULL;

    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Print the Linked List" << endl;
        cout << "Option 3: Terminate the Program" << endl;

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
            break;
            }
    }
    

    return 0;
    }