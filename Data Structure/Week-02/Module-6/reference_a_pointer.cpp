#include<bits/stdc++.h>

using namespace std;


// void fun( int * p ) {
void fun( int * &p ) {

    // p = NULL;   // now it will set the address as NULL or 0 

    // *p = 20;  // it will change the original value as it is de-referencing the original pointer 

    // p = NULL;  /// it just change the value not the original pointer. so it will not effect the original value. 

    // cout << &p << endl; /// this and the &ptr will print the same value as both are addressing the same pointer 

    
    cout << p << endl;

    }

int main(){

    int val = 10;

    int* ptr = &val;

    fun( ptr );

    // cout << *ptr << endl;
    // cout << val << endl;

    // cout << ptr << endl; // it will return 0 as we have set the address  as NULL 
    // cout << val << endl; 



    // cout << &ptr << endl; 

    cout << ptr << endl; 

    return 0;
}