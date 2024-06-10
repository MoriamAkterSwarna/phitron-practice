#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v = {1, 2, 3, 4, 5}; 

    cout << v[v.size()-1] << endl; // 5 
    cout << v.at(v.size()-1) << endl; // 5
    cout << v.front() << endl; // 1
    cout << v.back() << endl; // 5
    cout << v[0] << endl; // 1
    cout << v.at(0) << endl; // 1

    // vector <int> :: iterator it; 

    for(auto it = v.begin(); it <= v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}