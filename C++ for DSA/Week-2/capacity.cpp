#include<bits/stdc++.h>

using namespace std;

int main(){

    string s = "Hello world"; 
    cout << s << endl; 

    cout << s.size() << endl; 
    cout << s.capacity() << endl; 

    s = "fafljaljfdjjjjjjkk dja;lfjaflhajllfahfjaj lkalkjfhajjlkjll";
    cout << s.capacity() << endl;
    cout << s.max_size() << endl; 
    

    cout << s << endl;   
    s.clear(); 

    cout << s << endl; 
    cout << s.size() << endl; 


    string a; 
    if(a.empty() == true){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not empty" << endl; 
    } 

    string b; 
    cin >> b; 

    b.resize(5); 
    b.resize(10, 'a');
    cout<< b.size() << endl; 




    return 0;
}