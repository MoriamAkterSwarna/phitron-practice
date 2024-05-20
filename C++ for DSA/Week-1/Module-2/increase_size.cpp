#include<bits/stdc++.h>

using namespace std;

int main(){


    int a[3] = {10,20,30}; 

    // increase the size of the array
    int * b = new int [3];
    int * c= new int [3];
    for (int i = 0; i < 3; i++){
        cin >> b[i];
        c[i] = b[i];
    }

    // for (int i = 0; i < 3; i++){
    //     cout << c[i] << " ";
    // }

    cout << endl;

    delete [] b; // deallocation of memory

     b = new int [5];  // increase memory
    for(int i = 0; i < 3; i++){
        // cout << c[i] << " ";

        b[i] = c[i];
    }

    // b = new int [5];  // increase memory 

    delete [] c; // deallocation of memory
    

    b[3] = 40;
    b[4] = 50;
    for(int i = 0; i < 5; i++){
        cout << b[i] << " ";
    }
    return 0;
}