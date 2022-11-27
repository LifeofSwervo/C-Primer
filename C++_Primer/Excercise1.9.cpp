#include <iostream>

using namespace std;

int main () {
    int sum = 50, val = 1;

    while(val <= 100) { //While val is less than or equal to 100
        sum += val; //sum + val = sum
        ++val; // add 1 to val
    }

    cout << "Sum of 50 to 100 inclusive is " << sum << endl;
    return 0;
    
}