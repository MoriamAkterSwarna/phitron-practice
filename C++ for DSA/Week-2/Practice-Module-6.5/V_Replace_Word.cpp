#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s); 

    while(s.find('EGYPT', 5) != -1){
        int t = s.find("EGYPT", 5);

    s = s.replace(t, 5, " ");

    
    }
cout << s << endl;



    return 0;
}