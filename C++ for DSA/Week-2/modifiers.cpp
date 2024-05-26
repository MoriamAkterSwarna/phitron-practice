#include<bits/stdc++.h>

using namespace std;

int main(){

    string a = "Hello";
    string b = "World";

    // a += b; 

    // a.append(b);
    // cout << a << endl; 
    // cout << b << endl; 


    // a[5] =  'A';   //didn't work 

    // a.push_back('A'); 

    // a.pop_back(); 
    // cout << a << endl;


        // a = 'gello'; 

        a.assign("Gelo");

        string c = "HelloWorld"; 
        // c.erase(4, 1);  // starting index, how many characters to erase 

        // c.replace(0, 5, "Gelo"); // starting index, how many characters to replace, what to replace with


        // a.insert(5, "swarna"); 

        a.replace(5, 0, "swarna"); 
        cout << c << endl;



    return 0;
}
