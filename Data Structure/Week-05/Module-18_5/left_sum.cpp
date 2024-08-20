#include <bits/stdc++.h> 
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/



long long leftSum( BinaryTreeNode<int>* root )
    {

    long long int sum = 0;

    // Write your code here.
    if ( root == NULL ) return 0;



    if ( root->left ) {
        sum = sum + root->left->data;

        }
    sum = sum + leftSum( root->left );
    sum = sum + leftSum( root->right );

    return sum;




    }