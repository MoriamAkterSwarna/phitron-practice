#include<bits/stdc++.h>

using namespace std;

int main(){

   // vector <int> v; // Empty vector // type 1 

    // vector <int> v(5); // vector of size 5 with all elements 0 // type 2   


    // vector <int> v(5, 10); // vector of size 5 with all elements 10 // type 3


    // vector <int> v2(5, 22); 
    // vector <int> v(v2); // copy of v2 // type 4


    // int a[6] = {1, 2, 3, 4, 5, 6};
    // vector <int> v(a, a+6); // type 5 

    vector <int> v = {1, 2, 3, 4, 5}; // type 6

for(int i=0; i<v.size(); i++){
    cout << v[i] << " ";
}

cout << endl;
    cout << "Size: " << v.size() << endl; // 0 




    return 0;
}