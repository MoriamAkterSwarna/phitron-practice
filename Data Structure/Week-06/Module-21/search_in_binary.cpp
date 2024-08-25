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


void level_order( Node* root ) {

    queue<Node*> q;
    q.push( root );
    while ( !q.empty( ) ) {
        //step 1:  line theke ber kore ana 
        Node* f = q.front( );
        q.pop( );

        //step 2: jabotiyo ja kaj ache 
        cout << f->val << " ";

        // 3. tar children gulo ke rakha 

        // if(f->left != NULL ){q.push(f->left)}
        // if ( f->right != NULL ) { q.push( f->right ) }

        if ( f->left ) q.push( f->left );
        if ( f->right )q.push( f->right );

        }
    }

bool search( Node* root , int key ) {

    if ( root == NULL ) return false;

    if ( root->val == key ) return true;

    if ( key < root->val ) {
       
            
        // bool l = search( root->left , key );
        // if ( l ) return true;
        // else return false; 

        //-------------- or 
        // bool l = search( root->left , key );
        // return l; 

        return search( root->left , key ); 
        }
    else {
        return search( root->right , key );
        }

    }

int main( ) {

    Node* root = inputLevelOrder( );

    // level_order( root );

    // if(search(root, 6)) cout << "Found" << endl;
    if(search(root, 1)) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    return 0;
}