#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v= {1, 2, 3, 4, 5}; 
    
    
    vector <int> v2 = {11, 22, 33, 44, 55}; 
    //v.erase(v.begin()+3); // erase element at index 3

    // v.erase(v.begin()+1, v.begin()+4); // erase element from index 1 to 3

    v.erase(v.begin()+2, v.end()-1); // erase all elements from vector
    for(int x: v){
        cout << x << " ";
    }




    return 0;
}