#include<bits/stdc++.h>

using namespace std;

int main(){

    string s; 
    cin >> s; 

    sort(s.begin(), s.end()); // sort the string in ascending order, it will not sort if the string exists capital letters or special characters.

    cout << s << endl;

    return 0;
}