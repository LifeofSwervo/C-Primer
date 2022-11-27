#include <iostream>

using namespace std;

int main () {
    int printNum = 10, count = 0;

    while(count <= 10) { //While count is less than or equal to 10
        cout << printNum << endl; //Print # (10)
        --printNum; //Take 1 away from Print #
        ++count; //Add 1 to count
    }

    return 0;
}