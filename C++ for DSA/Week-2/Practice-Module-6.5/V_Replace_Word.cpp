#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s); 

    while(s.find("EGYPT") != -1){
        int t = s.find("EGYPT");

    s = s.replace(t, 5, " ");

    
    }
    cout << s << endl;



    return 0;
}