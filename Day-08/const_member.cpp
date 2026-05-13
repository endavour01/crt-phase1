#include <iostream>
using namespace std;

class Car{
    private:
        int speed;
    public:
        Car(){
            speed = 200;
        }
        void showSpeed() const
        {
            //speed = 300;
            cout << "Speed is: " << speed << endl;
        }

};
int main(){
    Car c;
    c.showSpeed();
    return 0;
}