// normal string word print 

// #include<bits/stdc++.h>

// using namespace std;

// int main(){

//     string s; 

//     getline(cin, s); 

//     stringstream ss(s); 

//     string word;

//     while(ss >> word){
//         cout << word << endl;
//     }




//     return 0;
// }

//------------------string with function in reference----------------
 
//  #include<bits/stdc++.h>
 
//  using namespace std;

//  void print(string & s){
//     s = "world"; 
//  }
 
//  int main(){
 
//         string s = "hello"; 
 
//         print(s); 

//         cout << s << endl;
 
 
//      return 0;
//  } 



// -------------------- Reverse order word print in a string -----------------


#include<bits/stdc++.h>

using namespace std;

void print(stringstream & ss){
    string word; 

    if(ss >> word){
        print(ss);
        cout << word << endl;
    }
}

int main(){

    string s; 
    getline(cin, s); 

    stringstream ss(s); 

    print(ss); 




    return 0;
}







