#include <iostream>
using namespace std;

int main() {
    float A, B, C;

    cout << "Введіть розмір A: ";
    cin >> A;
    cout << "Введіть розмір B: ";
    cin >> B;
    cout << "Введіть розмір C: ";
    cin >> C;

    float surfaceArea = 2 * (A * B + A * C + B * C);
    float volume = A * B * C;

    cout << "S: " << surfaceArea << endl;
    cout << "V: " << volume << endl;

    return 0;
}
