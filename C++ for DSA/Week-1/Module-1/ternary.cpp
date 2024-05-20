#include <iostream> 
using namespace std; 

int main() 
{ 
    int a =10; 
    //ternary operator 

    // (condition) ? statement1 : statement2; 


    (a > 5) ? cout << "a is greater than 5" << endl : cout << "a is less than 5" << endl;

    (a % 2 == 0) ? cout << "a is even" << endl : cout << "a is odd" << endl;

    return 0;

}