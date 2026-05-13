#include <iostream>
using namespace std;

int Fac(int x)
{

    // Base Case

    if (x == 1)
        return 1;

    return x * Fac(x - 1);
}
int main()
{

    int n;
    cin >> n;

    cout << "Factorial of " << n << " is: " << Fac(n) << endl;
}