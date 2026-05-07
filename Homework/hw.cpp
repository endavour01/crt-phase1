//WAP C++ to create a student management system using parameterized constructor. The system should allow adding students, displaying student details,
//name, rollno, regno,email,phno,marks/grade
#include <iostream>
#include <cstring>
using namespace std;
class Students{
    public:
    string name;
    int rollno;
    string regno;
    string email;
    string phno;
    double marks;
    // Parameterized constructor
    Students(string n, int r, string reg, string e, string p, double m){
        name = n;
        rollno = r;
        regno = reg;
        email = e;
        phno = p;
        marks = m;
    }
    //print
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Reg No: "<<regno<<endl;
        cout<<"Email: "<<email<<endl;
        cout<<"Phone No: "<<phno<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    Students s1("Vikalp", 1005, "23bcon1005", "vikalp@gmail.com", "9588861697", 98);
    Students s2("Rahul", 1006, "23bcon1006", "rahul@gmail.com", "9876543210", 95);
    Students s3("Priya", 1007, "23bcon1007", "priya@gmail.com", "9876543211", 97);
    Students s4("Anjali", 1008, "23bcon1008", "anjali@gmail.com", "9876543212", 96);
    s1.show();
    s2.show();
    s3.show();
    s4.show();
    return 0;
}