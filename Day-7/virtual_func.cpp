#include <iostream>
using namespace std;
class Player
{
public:
    virtual void show() // if it is written as virtual void show() = 0; it is null function
    {
        cout << "I am a player" << endl;
    }
};
class Cricketer : public Player
{
public:
    int a;
    void show()
    {
        cout << "I am a cricketer" << endl;
    }
};

int main(){
    Cricketer c1;
    c1.show();
    return 0;
}