#include <iostream>
using namespace std;

int main() {
    float R;
    const double PI = 3.14;

    cout << "Введіть радіус кола: ";
    cin >> R;

    float area = PI * R * R;
    float circumference = 2 * PI * R;

    cout << "Площа круга: " << area << endl;
    cout << "Довжина кола: " << circumference << endl;

    return 0;
}