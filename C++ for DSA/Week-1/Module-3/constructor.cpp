#include<bits/stdc++.h>

using namespace std;

class Student{
    public: 
        int roll; 
        int cls; 
        double cgpa; 

        // Constructor
        Student(int r, int c, double g){
            
            roll = r; 
            cls = c; 
            cgpa = g; 

        }

        Student(int roll, int cls, double cgpa){
            
            // (*this).roll = roll; 
            // (*this).cls = cls ;
            // (*this).cgpa = cgpa; 

            this->roll = roll;
            this->cls = cls;
            this->cgpa = cgpa;
        }
};


int main(){

// Student swarna; 

// swarna.roll = 20; 
// swarna.cls = 10;
// swarna.cgpa = 3.5; 

// Student mariam; 

// mariam.roll = 21;
// mariam.cls = 10;
// mariam.cgpa = 3.6; 


// instanciating the object of the class Student

Student swarna(20, 10, 3.5);
Student mariam(21, 10, 3.6);

cout << swarna.roll << " " << swarna.cls << " " << swarna.cgpa << endl; 

cout << mariam.roll << " " << mariam.cls << " " << mariam.cgpa << endl;

    




    return 0;
}