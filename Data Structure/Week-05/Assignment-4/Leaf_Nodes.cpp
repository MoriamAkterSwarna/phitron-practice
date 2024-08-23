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
vector<int> v;
void leaf_Nodes( Node* root ) {

    if ( !root ) return;

    if ( !root->left && !root->right ) {
        v.push_back( root->val );
        }

    leaf_Nodes( root->left );
    leaf_Nodes( root->right );
    }

int main( ) {

    Node* root = inputLevelOrder( );

    leaf_Nodes( root );

    sort( v.begin( ) , v.end( ) , greater<int>( ) );

    for ( int value : v ) {
        cout << value << " ";
        }



    return 0;
    }