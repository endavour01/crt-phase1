#include <iostream>
#include <cstring>
using namespace std;

    class Student{
      public:
      //data members
      string name;
      int rollno;
      //member function
      void display(){
        std::cout << "Name:" <<name<< std::endl;
        std::cout << "Rollno: :" <<rollno<< std::endl;
      };
      
    };
  int main() {
    Student s1;
    s1.name = "Vikalp";
    s1.rollno = 21;
    s1.display();
    return 0;
  };
//name roll no