#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    getline(cin, s); 

    int count = 0;

    bool flag = false; 
    for(char c: s){
        
            if(isalpha(c)){
                cout << c <<endl; 
            if(!flag){
                count++;
            }
            
        } else if(isspace(c)){
            flag = false; 
        }
        else {
            flag = false; 
        }
        
    }

    cout << count << endl;

    return 0;
}