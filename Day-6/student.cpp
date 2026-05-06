//wap student name roll no & registration number which is private in a class name college
#include <iostream>
#include <cstring>
using namespace std;
class Student{
    private:
    int regno = 100;
    public:
    //data members
    string name;
    int rollno;

    //member function
    void display(){
        std::cout << "Name:" <<name<< std::endl;
        std::cout << "Rollno: :" <<rollno<< std::endl;
        std::cout << "Regno: :" <<regno<< std::endl;
        regno++;
    };
};
int main() {
    Student s1;
    s1.name = "Vikalp";
    s1.rollno = 21;
    s1.display();
    return 0;
};