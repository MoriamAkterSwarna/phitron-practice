#include<bits/stdc++.h>

using namespace std;


class Student
{
    public: 
    string name;
    int roll; 
    int marks ; 
};

bool cmp(Student a, Student b){
    // if(a.marks <= b.marks){
    //     return true;
    // }
    // return false;
// return a.marks <= b.marks;


    //descending order 
    //  if(a.marks >= b.marks){
    //     return true;
    // }
    // return false;

    // return a.marks >= b.marks;


    // if(a.marks > b.marks){
    //     return true;
    // }
    // else if(a.marks == b.marks){
    //     if(a.roll < b.roll){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     } 
        
    // } 
    // else{
    //     return false;
    // }


// if(a.marks > b.marks){
//         return true;
//     }
//     else if(a.marks == b.marks){
//         return a.roll < b.roll;
        
//     } 
//     else{
//         return false;
//     }

if(a.marks == b.marks){
    return a.roll < b.roll;
}
return a.marks > b.marks;
}

int main(){

    int n; 
    cin >> n; 

    // Student a[n]; 

    //dynamic array 
    Student *a = new Student[n];

    for(int i = 0; i < n; i++){
        cin.ignore(); 
        getline(cin, a[i].name);
        
        cin >>  a[i].roll >> a[i].marks; 
        
    }

    sort(a, a+n, cmp );
   
    for(int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    return 0;
}