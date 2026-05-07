//create a clg mgmt system in that in base class containing (name age) and two derived class student (course,rollno,class) and teacher(department,employee id) contain data then also create a virtual function in that by default they are the part of the clg otherwise they are part of the derived class.
#include <iostream>
using namespace std;
class college
{
public:
    string name;
    int age;
    string course;
    string rollno;
    string section;
    string department;
    int employeeId;
};
class student : public college
{ 
public:   
    void setName(string n)
    {
        name = n;
    }
    void setCourse(string c)
    {
        course = c;
    }
    void setRollno(string r)
    {
        rollno = r;
    }
    void setSection(string s)
    {
        section = s;
    }
    // void show1()
    // {
    //     cout << "Name: " << name << endl;
    //     cout << "Age: " << age << endl;
    //     cout << "Course: " << course << endl;
    //     cout << "Rollno: " << rollno << endl;
    //     cout << "Section: " << section << endl;
    // }
};
class teacher : public college
{    
public:
    void setDepartment(string d)
    {
        department = d;
    }
    void setId(int i){
        employeeId = i;
    }
    // void show2()
    // {
    //     cout << "Name: " << name << endl;
    //     cout << "Department: " << department << endl;
    //     cout << "EmployeeId: " << employeeId << endl;
    // }
    // virtual void show()
    // {
    //     cout << "I am a teacher of this college" << endl;
    // }
};
void show (string name,string course, string rollno, string section, int age, string department, int employeeId){
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Course: " << course << endl;
    cout << "Rollno: " << rollno << endl;
    cout << "Section: " << section << endl;
    cout << "Department: " << department << endl;
    cout << "EmployeeId: " << employeeId << endl;
}
int main()
{
    student s1;
    s1.name = "Vikalp";
    s1.age = 20;
    s1.course = "B.Tech";
    s1.rollno = "23bcon1005";
    s1.section = "I";
    show(s1.name, s1.course, s1.rollno, s1.section, s1.age, "", 0);

    teacher t1;
    t1.name = "Rohit";
    t1.age = 35;
    t1.department = "Computer Science";
    t1.employeeId = 12345;
    show("", "", "", "", t1.age, t1.department, t1.employeeId);
}