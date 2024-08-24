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

void left_outer_tree( Node* root ) {
    if ( !root ) return;

    if ( root->left ) {
        left_outer_tree( root->left );
        cout << root->val << " ";

        }
    else if ( root->right ) {
        left_outer_tree( root->right );
        cout << root->val << " ";
        }
    else {
        cout << root->val << " ";
        }
    }
void right_outer_tree( Node* root ) {
    if ( !root ) return;

    if ( root->right ) {
        cout << root->val << " ";
        right_outer_tree( root->right );
        }
    else if ( root->left ) {
        cout << root->val << " ";
        right_outer_tree( root->left );
        }
    else {
        cout << root->val << " ";
        }
    }


void outer_tree( Node* root ) {
    if ( !root ) return;

    if ( root->left ) {

        left_outer_tree( root->left );
        }
    cout << root->val << " ";
    if ( root->right ) {

        right_outer_tree( root->right );
        }



    }


int main( ) {

    Node* root = inputLevelOrder( );

    outer_tree( root );


    return 0;
    }



