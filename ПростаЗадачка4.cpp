#include <iostream>
using namespace std;

int main() {
    int A, B, C;

    cout << "Введіть A: ";
    cin >> A;
    cout << "Введіть B: ";
    cin >> B;
    cout << "Введіть C: ";
    cin >> C;

    cout << "S:" << (2 * (A * B + A * C + B * C)) << endl;
    cout << "V:" << (A * B * C) << endl;

    return 0;
}
