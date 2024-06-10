#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v= {1, 2, 3, 4, 5}; 
    
    // v.insert(v.begin()+2, 10); 
    vector <int> v2 = {11, 22, 33, 44, 55}; 
    v.insert(v.begin()+2, v2.begin(), v2.end()); // insert v2 in v at index 2
    for(int x: v){
        cout << x << " ";
    }




    return 0;
}