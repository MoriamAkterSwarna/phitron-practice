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

void printLevelOrder( Node* root , int level ) {
    if ( root == NULL || level < 0 )
        return;

    queue<Node*> q;
    q.push( root );

    int crntLevel = 0;
    while ( !q.empty( ) ) {
        int sz = q.size( );
        while ( sz-- ) {
            Node* node = q.front( );
            q.pop( );

            if ( crntLevel == level ) {
                cout << node->val << " ";
                }

            if ( node->left ) {
                q.push( node->left );
                }
            if ( node->right ) {
                q.push( node->right );
                }
            }
        crntLevel++;
        }

    if ( crntLevel <= level ) {
        cout << "Invalid" << endl;
        }
    }
int main( ) {
    Node* root = inputLevelOrder( );

    int l;
    cin >> l;

    printLevelOrder( root , l );



    return 0;
    }