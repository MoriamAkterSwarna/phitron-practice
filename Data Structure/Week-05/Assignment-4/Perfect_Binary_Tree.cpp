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

int count_depth( Node* root ) {
    if ( root == NULL ) return 0;

    int l = count_depth( root->left );
    int r = count_depth( root->right );

    return max( l , r ) + 1;
    }
int count_node( Node* root ) {

    if ( root == NULL ) return 0;
    int l = count_node( root->left );
    int r = count_node( root->right );
    return l + r + 1;
    }




int main( ) {

    Node* root = inputLevelOrder( );

    if ( root == NULL )
        cout << "NO";
    int d = count_depth( root );

    int n = count_node( root );

    int res = pow( 2 , d ) - 1;

    if ( n == res ) {
        cout << "YES";
        }

    else
        cout << "NO";

    return 0;
    }