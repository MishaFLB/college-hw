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

    cout << "S:" << (2 * (A * B + A * C + B * C)) << std::endl;
    cout << "V:" << (A * B * C) << std::endl;

    return 0;
}
