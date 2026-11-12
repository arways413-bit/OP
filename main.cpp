#include <iostream>

using namespace std;

int main() {
    double M;
    
    cout << "Введіть масу M у кілограмах: ";
    cin >> M;

    int tons_c = (int)(M / 1000.0);

    int tons_cpp = static_cast<int>(M / 1000.0);

    cout << "\nРезультат:" << endl;
    cout << "Кількість повних тонн (стиль C): " << tons_c << endl;
    cout << "Кількість повних тонн (стиль C++ static_cast): " << tons_cpp << endl;

    return 0;
}
// Lab 6 test commit