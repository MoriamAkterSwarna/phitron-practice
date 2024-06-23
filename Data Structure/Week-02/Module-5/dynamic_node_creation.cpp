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

    Node *head = new Node(15);
    Node *a = new Node(25);

    head->next = a; 

    cout << head->val << endl; 
    cout << a->val << endl; 
    cout << head->next << endl; 
    cout << a->next << endl; 

    cout << head->next->val << endl; 
    cout << (*(*head).next).val << endl; 


    return 0;
}