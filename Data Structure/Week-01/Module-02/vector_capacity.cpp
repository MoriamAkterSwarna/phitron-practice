#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v;

    // cout << v.capacity() << endl; // 0 

     cout << v.capacity() << endl; // 0

    v.push_back(10);
    // cout << v.capacity() << endl; // 1 

    v.push_back(20);
    // cout << v.capacity() << endl; // 2

    v.push_back(30);

    // cout << v.capacity() << endl; // 4 

    v.push_back(40);
    // cout << v.capacity() << endl; // 4

    v.push_back(50);

    cout << v.capacity() << endl; // 8

    // v.clear();  // it does not delete from memory but it just removes the elements from the vector


    // v.resize(2); 

    v.resize(7, 5);
    cout << v.size() << endl; // 5

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }


    // cout << v[0] << " "; // 10
    // cout << v[1] << " "; // 20 




    return 0;
}