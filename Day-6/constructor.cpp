#include <iostream>
#include <cstring>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    // Default constructor
    Student(){
        name = "Vikalp";
        rollno = 21;
    }
    //print
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Default constructor is called"<<endl;
    }
};
int main(){
    Student s1;
    s1.show();
    return 0;
}
