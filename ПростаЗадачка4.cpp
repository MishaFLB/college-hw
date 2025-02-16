#include <iostream>
using namespace std;

int main() {
    double A, B, C;

    cout << "Введіть розмір A: ";
    cin >> A;
    cout << "Введіть розмір B: ";
    cin >> B;
    cout << "Введіть розмір C: ";
    cin >> C;

    double surfaceArea = 2 * (A * B + A * C + B * C);
    double volume = A * B * C;

    cout << "S: " << surfaceArea << endl;
    cout << "V: " << volume << endl;

    return 0;
}