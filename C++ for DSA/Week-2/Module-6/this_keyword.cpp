#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
        string name; 
        int age; 
        int mark1, mark2; 

        // ---- way 1 ---- 
        // Person(string name, int age, int mark1, int mark2){
        //     (*this).name = name; 
        //     (*this).age = age; 
        //     (*this).mark1 = mark1; 
        //     (*this).mark2 = mark2; 
        // }

        // ---- way 2 ----
        Person(string name, int age, int mark1, int mark2){
            this->name = name; 
            this->age = age; 
            this->mark1 = mark1; 
            this->mark2 = mark2; 
        }
        
        void print(){
            cout << name << " " << age << endl;
        }

        int total_marks(){
            return mark1 + mark2; 
                 
        }

};

int main(){

    
    Person p("John", 23, 90, 80); 

    cout << p.total_marks() << endl; 



    return 0;
}