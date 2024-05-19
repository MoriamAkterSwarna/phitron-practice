#include <iostream> 

using namespace std; 

int main(){


    int x ;

    cin >> x; 

    switch(x % 2){
        case 0: 
            cout << "x is even" << endl; 
            break; 
        case 1: 
            cout << "x is odd" << endl; 
            break; 
        
    }
    return 0; 
}