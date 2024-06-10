#include<bits/stdc++.h>

using namespace std;

int main(){

    int n; 

    cin >> n;
    cin.ignore(); // This is to ignore the newline character after the integer input


    vector<string> v(n);


    for(int i = 0; i < n; i++){
        getline(cin, v[i]);
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }

    return 0;
}