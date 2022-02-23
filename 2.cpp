#include <iostream>
#include "windows.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1 ; --i) {
        cout << i << endl;
        Sleep(1000);
    }
    return 0;
}
