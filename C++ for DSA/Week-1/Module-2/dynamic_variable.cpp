#include<bits/stdc++.h>

using namespace std;

int** fun (){
    int *a =  new int; // dynamic memory allocation

    cout << "fun: " << a << endl;

    *a = 100; //dereferencing  

    
    // return a;
    
    
    cout << "fun: " << &a << endl;
    return &a;
}

int main(){
    // int x =10; 

    // cout << x << endl;

    int *a =  new int; // dynamic memory allocation

    *a = 10; //dereferencing 


    cout << *a << endl;
    cout << a << endl;

    delete a; // deallocation of memory 


    int **p = fun();
    cout << "main: " << p << endl;

    // float *f = new float ;// dynamic memory allocation 

    // *f = 10.1067546 ;// dereferencing

    // cout << *f << endl;
    return 0;
}