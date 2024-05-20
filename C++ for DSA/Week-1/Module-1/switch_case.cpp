#include <iostream> 

using namespace std; 

int main(){


    int x = 3;

    switch(x){
        case 1: 
            cout << "x is 1" << endl; 
            break; 
        case 2: 
            cout << "x is 2" << endl; 
            break; 
        case 3: 
            cout << "x is 3" << endl; 
            break; 
        case 4: 
            cout << "x is 4" << endl; 
            break;
        default: 
            cout << "x is not 1, 2 or 3" << endl; 
    } 
    return 0; 
}