#include <iostream>
#include <cstring>
using namespace std;
class Cricketers{
    public:
    string name;
    int runs;
    double average;
    // Parameterized constructor
    Cricketers(string n, int r, double avg){
        name = n;
        runs = r;
        this->average = avg;
    }
    //print
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
        cout<<"Average: "<<average<<endl;
        cout<<"Parameterized constructor is called"<<endl;
    }
};
int main(){
    Cricketers c1("Vikalp", 5000, 45.5);
    c1.show();
    return 0;
}