
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a;  //принимает только целочисленные значение, стороны треугольника 
    int b;
    int c;
    cin >> a;
    cin >> b;
    cin >> c;

    float p = (a + b + c) / 2.0;
    float s = sqrt(p * ((p - a) * (p - b) * (p - c)));  //принимает вещественные числа, т.к в ходе решения может образоваться дробная часть

    std::cout << "Значение p = " << p << std::endl;
    std::cout << "Значение s = " << s << std::endl;

    cout << "Минимальное значение int: " << -numeric_limits<int>::max() << endl;
    cout << "Максимальное значение int: " << numeric_limits<int>::max() << endl;
    cout << "Минимальное значение float: " << -numeric_limits<float>::max() << endl;
    cout << "Максимальное значение float: " << numeric_limits<float>::max() << endl; 
}
