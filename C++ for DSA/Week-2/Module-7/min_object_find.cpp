#include<bits/stdc++.h>

using namespace std;


class Student
{
    public: 
    string name;
    int roll; 
    int marks ; 
};

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

    // int min_marks = INT_MAX; // get only minimum marks 
    Student mn; 
    mn.marks = INT_MAX;


    Student mx; 
    mx.marks = INT_MIN;
    for(int i = 0; i < n; i++){
        if(a[i].marks < mn.marks){
            // min_marks = a[i].marks;  
            mn = a[i];
        }
        if(a[i].marks > mx.marks){
            mx = a[i];
        }
    }

    cout << "Minimum marks: " << mn.name << " " << mn.roll << " " << mn.marks << endl;

    cout << "Maximum marks: " << mx.name << " " << mx.roll << " " << mx.marks << endl;

    // cout << "Minimum marks: " << min_marks << endl;


    return 0;
}