#include<bits/stdc++.h>

using namespace std;

vector <int> concateArray(vector <int> a, vector <int> b){
    int sz = a.size() + b.size(); 
    vector <int> c(sz); 
    for(int i = 0; i < b.size(); i++){
        c[i] = b[i];
    } 

    for(int i = 0; i < a.size(); i++){
        c[b.size() + i] = a[i];
    }
    
    return c;
}

int main(){

    int n; 
    cin >> n; 
    vector <int> a(n); 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    } 

    vector <int> b(n); 
    for(int i = 0; i < n; i++){
        cin >> b[i];
    } 

    vector <int> c = concateArray(a, b);

    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }



    return 0;
}