#include<bits/stdc++.h> 
using namespace std;
int main(){

    // int *a = new int[5]; // dynamic memory allocation of array of 5 integers


    int n; 
    cin >> n; 

    int *a = new int[n]; // dynamic memory allocation of array of n integers 

    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    } 


    return 0;
}