#include <iostream>

using namespace std;

int main () {
    unsigned u = 10, u2 = 42;
    cout << u2 - u << endl; //32
    cout << u - u2 << endl; //User Error

    int i = 10, i2 = 42;
    cout << "test I:" << i2 - i << endl; //32
    cout << "test I2: " << i - i2 << endl; //-32

    cout << "Mix: " << i - u << endl;
    cout << "Mix 2: " << u - i << endl;

}