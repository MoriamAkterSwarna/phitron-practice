#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 

    cin >> n; 

    int *A = new int[n];

    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    int m; 
    cin >> m; 

    int *B = new int[m]; 

    for(int i = 0; i < m-n; i++){
        cin >> B[i];
    }  

    int *C = new int[m-n];

    for(int i = 0; i < m-n; i++){
        C[i] = B[i];
    }

    delete [] B; 

    B = new int[m]; 

    for(int i = 0; i < n; i++){
        B[i] = A[i];
    } 

    for(int i = n; i < m; i++){
        B[i] = C[i-n];
    } 

    for(int i = 0; i < m; i++){
        cout << B[i] << " ";
    }




    return 0;
}