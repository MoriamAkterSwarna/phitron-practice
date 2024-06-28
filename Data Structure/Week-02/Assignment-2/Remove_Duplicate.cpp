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
    return;
    }

void remove_duplicates( Node*& head ) {
    Node* currentNode = head;
    while ( currentNode != NULL ) {
        Node* prevNode = currentNode;
        Node* nextNode = currentNode->next;
        while ( nextNode != NULL ) {
            if ( currentNode->val == nextNode->val ) {

                prevNode->next = nextNode->next;
                delete nextNode;
                nextNode = prevNode->next;
                }
            else {

                prevNode = nextNode;
                nextNode = nextNode->next;
                }
            }
        currentNode = currentNode->next;
        }
    }
void print_linked_list( Node* head ) {
    Node* tmp = head;
    while ( tmp != NULL ) {
        cout << tmp->val << " ";
        tmp = tmp->next;
        }
    cout << endl;
    return;
    }

int main( ) {

    Node* head = NULL;
    Node* tail = NULL;

    int val;

    while ( true ) {
        cin >> val;
        if ( val == -1 ) {
            break;
            }
        insert_at_tail( head , tail , val );



        }

    remove_duplicates( head );
    print_linked_list( head );
    return 0;
    }