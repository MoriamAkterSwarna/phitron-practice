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
int main(){

    
    // Student swarna(20, 10, 3.5); 

    Student * mariam = new Student(21, 10, 3.5); 


    cout << mariam->roll << " " << mariam->cls << " " << mariam->cgpa << endl;



    return 0;
}