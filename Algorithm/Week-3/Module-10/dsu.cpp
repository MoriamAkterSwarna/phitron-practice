#include<bits/stdc++.h>

using namespace std;

const int N = 1e5 + 5; 
int par[N]; 
void dsu_initialize(int n){
    for(int i = 0; i < n; i++) {
        par[i ] = -1; 
    }
    par[1 ]= 3; 
    par[2] = 1; 
}

int find(int node){
    if(par[node] == -1) return node; 
    // without path compression 
    // return find(par[node]);  // time complexity is O(n) 

    // path compression 
    // int leader = find(par[node]); 
    // par[node] = leader; 
    // return leader;

    // path compression in simple way 
    return par[node] = find(par[node]);  // time complexity is O(logn) 


}

int main(){
    
    dsu_initialize(4);
    cout << find(0) << endl;
    cout << find(1) << endl;  
    cout << find(2) << endl;
    cout << find(3) << endl;

    return 0;
}