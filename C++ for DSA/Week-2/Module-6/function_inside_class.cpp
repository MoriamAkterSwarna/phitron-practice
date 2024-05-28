#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
        string name; 
        int age; 
        int mark1, mark2; 

        Person(string nm, int ag, int m1, int m2){
            name = nm; 
            age = ag; 
            mark1 = m1; 
            mark2 = m2; 
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