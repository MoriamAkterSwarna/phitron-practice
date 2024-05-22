#include<bits/stdc++.h>

using namespace std;

class Student 
{
    public: 
        int roll; 
        int cls;
        double cgpa;


        Student(int roll, int cls, double cgpa){
            this->roll = roll; 
            this->cls = cls; 
            this->cgpa = cgpa; 
        } 
};
// Student fun(){
    Student *fun(){

    // Student* swarna(20, 10, 3.5); 


    // Student * p = &swarna;
    // return swarna;

    // return p; 

 Student* swarna = new Student(20, 10, 3.5); 

    return swarna;

}


int main(){


    // Student ans = fun(); 

     Student* ans = fun();

    // cout << ans.roll << " " << ans.cls << " " << ans.cgpa << endl;


    cout << ans->roll << " " << ans->cls << " " << ans->cgpa << endl;


    delete ans; 

    cout << ans->roll << " " << ans->cls << " " << ans->cgpa << endl;
    return 0;
}