#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
        string name; 
        int age; 
        int mark1, mark2; 

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

    
    Person * p = new Person("John", 23, 90, 80); 
    Person * q = new Person("Jane", 22, 85, 90);

    //---- way 1 ---- 

    // p-> name = q -> name; 
    // p-> age = q -> age; 

    //---- way 2 ---- 
    *p = *q; 

    delete q; 

    cout << p->name << " " << p->age << endl;



    return 0;
}