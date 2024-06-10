#include<bits/stdc++.h>

using namespace std;

int main(){

    // vector <int> x = {10, 20, 30};
    vector <int> x = {10, 20, 30,40};
    vector <int> y = {1,2,3};

    // if  size of 2 vector are same t
    // y = x; // copy of x  O(1)

    // if size of 2 vector are not same
    // y = x; // copy of x  O(n) 
    // for(int i=0; i<y.size(); i++){
    //     cout << y[i] << " ";
    // }


    x.pop_back(); // O(1) remove last element from vector 
    for(int i=0; i<x.size(); i++){
        cout << x[i] << " ";
    }

    return 0;
}