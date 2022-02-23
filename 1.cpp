#include <iostream>
using namespace std;

int main() {
    int a, b;
    double z;
    char c;

    cin >> a;
    cin >> b;
    cin >> c;

    switch (c) {
        case '+': z = a + b;
            break;
        case '-': z = a - b;
            break;
        case '*': z = a * b;
            break;
        case '/': z = a / b;
            break;
    }
    cout << z;
    return 0;
}
