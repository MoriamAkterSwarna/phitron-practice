/**
 * This C++ program takes input for the number of nodes and edges in a graph, creates an adjacency
 * matrix representing the graph, and then prints the adjacency matrix.
 * 
 * @return The main function in the code snippet is returning an integer value of 0. This is a common
 * practice in C++ programs to indicate that the program executed successfully without any errors.
 */



#include<bits/stdc++.h>

using namespace std;
int main(){

    int n, e; 
    cin >> n >> e; 

    int mat[n][n]; 
    for(int i = 0; i < n; i++){
       
        for(int j = 0; j < n; j++ )
        {
            mat[i][j] = -1; 
            if(i == j) mat[i][j]  =0; 
        }
    }
    while(e--){
        int a, b, c; 
        cin >> a >> b >> c; 
        mat[a][b] = c; 
        mat[b] [a] = c; 
    }

    for(int i = 0 ; i < n; i++){
        for( int j = 0 ; j < n; j++){
            cout << mat[i][j] << " "; 
        }
        cout << endl; 
    }

    return 0;
}