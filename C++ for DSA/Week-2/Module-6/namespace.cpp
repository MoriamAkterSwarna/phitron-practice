#include<bits/stdc++.h>

using namespace std;

namespace rakib
{
    int age = 23; 

    void print(){
        cout << "Hello from rakib namespace" << endl;
    }
}


namespace rahim
{
    int age2 = 24; 

    void print2(){
        cout << "Hello from rahim namespace" << endl;
    }
} 

//--way 2 using namespace 

using namespace rakib; 
using namespace rahim; 


int main(){

    //----way 1 ---- 
//     cout << rakib::age << endl; 
//     rakib::print(); 

 
//   cout << rahim::age2 << endl; 
//     rahim::print2(); 

    //----way 2 ---- 

    cout << age << endl; 
    print(); 
    cout << age2 << endl; 

    print2(); 




    return 0;
}