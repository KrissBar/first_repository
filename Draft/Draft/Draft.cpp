#include <iostream>
using namespace std;

// Подсчёт количества цифр в числе
/*int CountDigits(int n)
{
    if (n == 0) return 0;  //без 0
    int cnt = 0;

    while (n != 0) 
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

// Склеивание двух чисел с учётом правила "0 = нет числа"
int Concatenate(int a, int b) 
{
    // Если оба числа 0 - результат 0
    if (a == 0 && b == 0) return 0;


    // Если первое число 0 - берём второе
    if (a == 0) return b;

    // Если второе число 0 - берём первое
    if (b == 0) return a;

    // Оба числа не 0
    int digits = CountDigits(b);
    int multiplier = 1;
    for (int i = 0; i < digits; ++i) 
    {
        multiplier *= 10;
    }
    return a * multiplier + b;
}

void Reverse(int x)
{
    int reverse = -x;
    std::cout << "Противоположное число:" << reverse << std::endl;
}*/


//Пункт 2
void Formula(int A = 0, int B = 0, int C = 0)
{
    float p = (A + B + C) / 2.0;
    float s = sqrt(p * ((p - A) * (p - B) * (p - C)));

    std::cout << "Значение p = " << p << std::endl;
    std::cout << "Значение s = " << s << std::endl;
}

void Limits()
{
    std::cout << "\nМинимальное значение int: " << -numeric_limits<int>::max() << std::endl;
    std::cout << "Максимальное значение int: " << numeric_limits<int>::max() << std::endl;
    std::cout << "Минимальное значение float: " << -numeric_limits<float>::max() << std::endl;
    std::cout << "Максимальное значение float: " << numeric_limits<float>::max() << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    /*int console = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    std::cout << "Выберите ввод:\n 1. Одно число\n 2. Два числа" << std::endl;
    std::cin >> console;

    if(console == 1)
    {
        std::cout << "Исп. функция записи противоположного числа\n" << std::endl;

        std::cout << "\nВведите C" << std::endl;
        std::cin >> C;

        Reverse(C);
    }

    if(console == 2)
    {
        std::cout << "Исп. функция склеивания 2х чисел\n" << std::endl;

        std::cout << "\nВведите А и В" << std::endl;
        std::cin >> A;
        std::cin >> B;

        int result = Concatenate(A, B);
        std::cout << "Склеенное число: " << result << std::endl;
    }

    if (console < 1 or console > 2)
    {
        std::cout << "Ошибка" << std::endl;
    }*/

    //Пункт 2
    int a = 0;
    int b = 0;
    int c = 0;
    std::cout << "Введите стороны треугольника\n" << std::endl;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c<< std::endl;

    Formula(a, b, c);

    Limits();
}
