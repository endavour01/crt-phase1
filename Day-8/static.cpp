// #include <iostream>
// using namespace std;

// class Employee
// {
// public:
//     static int reg_no;
//     Employee(){
//         reg_no++;
//     }
//     static void show(){
//         cout << "Employee Registration Number: " << reg_no << endl;
//     }
// };
// int Employee::reg_no = 1000;  //:: is scope resoltion operator
// int main()
// {
//     Employee e1;
//     Employee e2;
//     Employee e3;
//     Employee e4;

//     // e1.reg_no = 1001;
//     // e2.reg_no = 1002;
//     // e3.reg_no = 1003;
//     // e4.reg_no = 1004;

//     Employee::show();

//     return 0;
// }

#include <iostream>
using namespace std;

class Employee
{
public:
    static int reg_no;
    Employee()
    {
        reg_no++;
    }
    static void show()
    {
        cout << "Employee Reg No is: " << reg_no << endl;
    }
};
int Employee ::reg_no = 100;
int main()
{
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee ::show();
}