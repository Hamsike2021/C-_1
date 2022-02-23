#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c;

    cin >> a;
    cin >> b;
    cin >> c;

    switch (c) {
        case '+':
            cout << a + b;
        case '-':
            cout << a - b;
        case '*':
            cout << a * b;
        case '/':
            cout << a / b;
    }
    return 0;
}
