#include<bits/stdc++.h>

using namespace std;

int main(){

        vector<int> v= {1, 2,2, 4, 1, 8, 9, 2, 4,5, 3, 4, 5,2};


        find(v.begin(), v.end(), 5); // returns iterator to first 2 in vector

    // vector <int> :: iterator it ;
    
    auto it =  find(v.begin(), v.end(), 5);
    // cout << *it; 

    if(it == v.end()){
        cout << "Element not found";
    }else{
        cout << "Element found at index: " << it - v.begin();
    }

    return 0;
}