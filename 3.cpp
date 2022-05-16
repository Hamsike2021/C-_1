#include <string>
using namespace std;
int main()
{
    system("chcp 65001");
    int k;
    string apple = "яблок";
    cout<<"Введите число яблок:\n";
    cin >> k;
    {
        if ((k==1) || (k % 10 == 1)) {
            apple = apple +"о";
        }
        if ((k > 1 && k < 5) || (k % 10 > 1 && k % 10 < 5)) {
            apple = apple + "а";
        }
        if ((k >= 5 && k < 10) || (k % 10 >= 5 && k % 10 < 10) || (k % 100 > 10 && k % 100 < 15 )) {
            apple = "яблок";
        }

        cout << k << ' ' << apple << endl;

    }
}
