#include<bits/stdc++.h>

using namespace std;

int main(){

      string s; 
    getline(cin, s); 

    string word; 
   

    int flag = 0;
    stringstream ss(s);
    while(ss >> word){
        if(s == "Ratul"){
            flag = 1; 
            break; 
             
        }
        
    }

    if(flag == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }





    return 0;
}