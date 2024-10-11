#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double a;
    cout << "Enter a: ";
    cin >> a;

    double z1 = ((a + 2) / (sqrt(2 * a)) - (a / (sqrt(2 * a) + 2)) + 2. / (a - sqrt(2 * a))) * (sqrt(a) - sqrt(2)) / (a + 2);

    double z2 = 1. / (sqrt(a) + sqrt(2));


    cout << "z1 = " << z1 << std::endl;
    cout << "z2 = " << z2 << std::endl;

    return 0;
}

