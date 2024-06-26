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

void print_linked_list( Node* head ) {
    Node* tmp = head;
    while (tmp !=NULL)
        {
        cout << tmp->val << " "; 
        tmp = tmp->next;
    }
    cout << endl; 
    }
int main( ) {
    // Node a , b;
    // a.val = 20;
    // b.val = 30;
    // a.next = &b;
    // b.next = NULL;

    Node* head = new Node( 15 );
    Node* a = new Node( 25 );
    Node* b = new Node( 35 );
    Node* c = new Node( 45 );
    Node* d = new Node( 55 );
    Node* e = new Node( 65 );

    head->next = a; 
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    // cout << a->val << endl;
    // cout << a->next << endl;
    // cout << a->next->val << endl; 

    // cout << b->val << endl;
    // cout << b->next << endl; 

    print_linked_list( head ); 
    return 0;
}