#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int val;
        Node *next;


    Node(int val){
        this->val = val; 
        this->next =  NULL; 
    }
};

int main(){

    Node* head = new Node( 5 );
    Node* a = new Node( 7 );
    Node* b = new Node( 1 );

    Node* c = new Node( 14 );

    Node* d = new Node( 3 );
    Node* e = new Node( 11 );

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;


    cout << head->val << endl;
    cout << "value of ? - " << head->next->next->next->val <<" " << head->next->next->next << endl;

    cout << head->next->next->val << endl;

    Node* tmp = head;

    int sum = 0;

    cout << d->next << endl; 
    cout << c->next << endl; 

    while ( tmp->next != c->next  )
        {

        sum = sum + tmp->val;

        tmp = tmp->next; 

        }
    sum = sum - tmp->val; 
    cout << sum << endl;


    return 0;
}