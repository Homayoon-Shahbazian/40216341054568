#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;

    // Checking the conditions for a right-angled triangle
    if (a * a + b * b == c * c ||a * a + c * c == b * b|| b * b + c * c == a * a) {
        cout << "These numbers can form a right-angled triangle" << endl;
    } else {
        cout << "These numbers cannot form a right-angled triangle" << endl;
    }

    return 0;
}