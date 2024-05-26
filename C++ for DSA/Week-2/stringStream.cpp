#include<bits/stdc++.h>

using namespace std;

int main(){

    string s; 
    getline(cin, s); 
    //way 1 
    stringstream ss(s);

    //way 2 
    stringstream ss; 
    ss << s;
    // way 3
    string word; 
    int cnt = 0;
    while(ss >> word){
        cout << word << endl; 
        cnt++;
    }

    cout << s << endl;
    cout << cnt << endl;




    return 0;
}