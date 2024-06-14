// \     /
//  \   / 
//   \ /  
//    X   
//   / \  
//  /   \ 
// /     \


#include<bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;

    // int a[N][N]; 

    for(int i =0; i<N; i++ ){
        for(int j=0; j< N; j++){
            if(i == j && i +j == N-1){
                cout << "X";
                continue; 
            }
            if(i == j){

            cout << "\\";
            continue; 
            } 
            
             
            if(i + j == N-1){
                cout << "/";
            }
            else{
                cout << " ";
            }

        }
    cout << endl; 
    }

    return 0;
}

