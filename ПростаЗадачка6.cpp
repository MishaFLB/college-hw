#include <iostream>
using namespace std;

int main() {
    double P, R;
    int T;

    cout << "Введіть початкову суму (P): ";
    cin >> P;
    cout << "Введіть період позики в роках (T): ";
    cin >> T;
    cout << "Введіть річну процентну ставку (R): ";
    cin >> R;

    double I = (P * T * R) / 100;

    cout << "Прості відсотки (float): " << I << endl;
    cout << "Прості відсотки (int): " << static_cast<int>(I) << endl;

    return 0;
}