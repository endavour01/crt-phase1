#include <iostream>
#include <cstring>
using namespace std;
class Area{
    public:
    int length;
    int width;
    Area(){
        length = 0;
        width = 0;
    }
    Area(int length, int width){
        this->length = length; //this is used because memeber and parameter have same name
        this->width = width;
    }
    Area(int s){
        length = s;
        width = s;
    }
    void show(){
        cout<<"Area is: "<<length * width<<endl;
    }
};
int main(){
    Area a1; //default constructor is called
    a1.show();
    Area a2(5, 10); //parameterized constructor is called
    a2.show();
    Area a3(7); //parameterized constructor is called
    a3.show();
    return 0;
}