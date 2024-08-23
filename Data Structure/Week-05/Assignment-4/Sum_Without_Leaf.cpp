#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;

    Node( int val ) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
        }
    };

Node* inputLevelOrder( ) {

    int val;
    cin >> val;

    Node* root;

    if ( val == -1 ) root = NULL;
    else root = new Node( val );

    queue<Node*> q;
    if ( root )  q.push( root );

    while ( !q.empty( ) )
        {
        Node* fr = q.front( );
        q.pop( );

        int l , r;

        cin >> l >> r;
        Node* myLeft;
        Node* myRight;

        if ( l == -1 )
            myLeft = NULL;

        else
            myLeft = new Node( l );


        if ( r == -1 )
            myRight = NULL;
        else
            myRight = new Node( r );


        fr->left = myLeft;
        fr->right = myRight;


        if ( fr->left ) q.push( fr->left );
        if ( fr->right ) q.push( fr->right );
        }
    return root;

    }

int sumOfTree( Node* root ) {
    int sum = 0;

    if ( root == NULL ) return 0;
    if ( root->left == NULL && root->right == NULL ) return 0;

    sum = sum + root->val;

    sum = sum + sumOfTree( root->left );
    sum = sum + sumOfTree( root->right );

    return sum;

    }
int main( ) {

    Node* root = inputLevelOrder( );

    int val = sumOfTree( root );
    cout << val << endl; 
    return 0;
    }