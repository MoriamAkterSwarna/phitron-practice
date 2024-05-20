#include<bits/stdc++.h>

using namespace std;

//    void fun (){
 int* fun (){
    // int a[5] = {10,20,30,40,50}; 

    // return a; // error: return type is void

    // return a; // warning: address of local variable 'a' returned
    int *a = new int[5];  // dynamic memory allocation 
    for(int i =0; i< 5; i++){
        cin >> a[i]; 
    }

    return a;

}


int main (){
int *a = fun(); 

for(int i = 0; i < 5; i++){
    cout << a[i] << " ";
}


    return 0;
}