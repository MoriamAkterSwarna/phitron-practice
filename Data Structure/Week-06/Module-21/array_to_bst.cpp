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

Node* convert( int arr [ ] , int n , int l , int r ) {
    if ( l > r ) {
        return NULL;
        }
    int mid = ( l + r ) / 2;
    Node* root = new Node( arr [ mid ] );

    Node* leftNode = convert( arr , n , l , mid - 1 );
    Node* rightNode = convert( arr , n , mid + 1 , r );
    root->left = leftNode;
    root->right = rightNode;
    return root;

    //------------ way 2 -----------
    // root->left = convert( arr , n , l , mid - 1 );
    // root->right = convert ( arr, n, mid + 1, r );
    // return root;
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

int main( ) {

    int n;
    cin >> n;
    int arr [ n ];
    for ( int i = 0; i < n; i++ ) {
        cin >> arr [ i ];
        }
    Node* root = convert( arr , n , 0 , n - 1 ); // Function to convert array to BST 
    level_order( root ); // Function to print level order traversal of BST

    return 0;
    }