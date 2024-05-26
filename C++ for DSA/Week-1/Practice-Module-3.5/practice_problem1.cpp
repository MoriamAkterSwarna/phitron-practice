#include<bits/stdc++.h>

using namespace std;

class Student {
    public: 
         char name[100]; 
         int roll; 
         char section; 
         int math_marks; 
         int cls;  


            Student(char *name, int roll, char section, int math_marks, int cls){
                strcpy(this->name, name); 
                this->roll = roll; 
                this->section = section; 
                this->math_marks = math_marks; 
                this->cls = cls; 
            }
            

};

int main(){

    // Student s1, s2, s3;  

    // cin.getline(s1.name, 100); 
    // cin >> s1.roll >> s1.section >> s1.math_marks >> s1.cls; 
    // getchar(); 

    // cin.getline(s2.name, 100); 
    // cin >> s2.roll >> s2.section >> s2.math_marks >> s2.cls; 
    // getchar(); 

    // cin.getline(s3.name, 100); 

    // cin >> s3.roll >> s3.section >> s3.math_marks >> s3.cls; 
    // getchar();  

    Student s1("Rahul", 1, 'A', 90, 10);
    Student s2("Rohit", 2, 'B', 80, 10); 
    Student s3("Raj", 3, 'C', 70, 10);
    


     int res = max({s1.math_marks, s2.math_marks, s3.math_marks}); 

        if(res == s1.math_marks){
            cout << s1.name << " " << s1.roll << " " << s1.section << " " << s1.math_marks << " " << s1.cls << endl; 
        }else if(res == s2.math_marks){
            cout << s2.name << " " << s2.roll << " " << s2.section << " " << s2.math_marks << " " << s2.cls << endl; 
        }else{
            cout << s3.name << " " << s3.roll << " " << s3.section << " " << s3.math_marks << " " << s3.cls << endl; 
        } 


    return 0;
}





