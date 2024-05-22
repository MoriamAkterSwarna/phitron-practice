#include<bits/stdc++.h>

using namespace std;


class Student{

    public:
        char name[100];
        int roll; 
        double cgpa; 

};

int main(){

    // Class and Object


    Student a,b; // Object of Student class 


    // cin >> a.name >> a.roll >> a.cgpa;
    // cin >> b.name >> b.roll >> b.cgpa;


cin.getline(a.name, 100) ;
cin >> a.roll >> a.cgpa;

    getchar();
    cin.getline(b.name, 100);
    cin  >> b.roll >> b.cgpa;

    // a.roll = 20;
    // a.cgpa = 3.5;

    //  char tmp[100] = "Swarna";
    // strcpy(a.name, tmp); 

    cout << "Name: " << a.name << endl;  

    cout << "Roll: " << a.roll << endl; 

    cout << "CGPA: " << a.cgpa << endl;

    cout << "Name: " << b.name << endl;  

    cout << "Roll: " << b.roll << endl; 

    cout << "CGPA: " << b.cgpa << endl;


    return 0;
}