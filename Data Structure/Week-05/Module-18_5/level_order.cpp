#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> v;
void level_order( BinaryTreeNode<int>* root ) {

    if ( root == NULL ) return;

    queue<BinaryTreeNode<int>*> q;
    q.push( root );

    while ( !q.empty( ) ) {

        //1. line theke ber kore ana

        BinaryTreeNode<int>* frnt = q.front( );
        q.pop( );

        // 2. jabotiyo kaj kora 
        v.push_back( frnt->val );

        // 3. children gulo ke line e dewa 

        if ( frnt->left ) q.push( frnt->left );
        if ( frnt->right ) q.push( frnt->right );

        }

    }
vector<int> getLevelOrder( BinaryTreeNode<int>* root )
    {
    //  Write your code here.
    v.clear( );
    level_order( root );
    return v;
    }