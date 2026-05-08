#include <iostream>
using namespace std;

namespace Vikalp{
    void show(){
        cout << "I am Vikalp" << endl;
}
}
namespace Aniket{
    void show(){
        cout << "I am Aniket" << endl;
    }
}
int main()
{
    Vikalp::show();
    Aniket::show();   //if used only show() then it will give error because of ambiguity as both the namespace have same function name
    return 0;
}