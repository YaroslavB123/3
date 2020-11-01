// Lab_03_3.cpp
// < Бойчук Ярослав >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 0.3
#include <iostream>
#include <cmath>;

using namespace std;
int main()
{
    double x; // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;
    if (x <= -7 - R)
        y = R;
    else
        if (-7 - R < x <= -7)
            y = R - sqrt(R * R - x * x);
        else
            if (-7 < x <= R)
                y = R - sqrt(R * R - x * x);
            else
                if (-7 + R < x <= -4)
                    y = ((-7 + R / 4) * x);
                else
                    if (-4 < x < 0)
                        y = (R + (-R / 4) * (x + 4));
                    else
                        if (0 < x <= (4 * atan(1.0) / 2))
                            y = sqrt(R * R - x * x - 1);
                        else
                            if ((4 * atan(1.0)) / 2 < x <= (4 * atan(1.0)))
                                y = sqrt(R * R - 1 - (x - (4 * atan(1.0)) * (4 * atan(1.0))));
                            else
                                if ((4 * atan(1.0) < x))
                                    y = (x - (4 * atan(1.0) / -(4 * atan(1.0))));
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}