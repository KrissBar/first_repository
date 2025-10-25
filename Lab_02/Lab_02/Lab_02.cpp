#include <iostream>
#include <bitset>

int main()
{
    setlocale(LC_ALL, "Russian");
    short A;
    int i = 7;

    std::cin >> A;
    std::cin >> i;

    std::bitset<8> b2 = A;
    std::cout << A << " = " << b2.to_string() << std::endl;

    if (i <= 7 and i >= 0)
    {
        std::cout << "Номер бита = " << i << std::endl;
    }
    else
    {
        std::cout << "Такое i Нельзя" << std::endl;
    }

    // Проверка i-го бита числа A
    if ((A & (1 << i)) == 0)
    {
        short a = A * A;
        std::cout << "Результат (A^2 с i-м битом = 0): " << a << std::endl;
    }
    else
    {
        int B = 125;
        int b = B & 0b01010101;
        std::cout << "Исходное число: " << B << std::endl;
        std::cout << "Результат (чётные биты обнулены): " << b << std::endl;
    }
    return 0;


    // 2 Point

    int N = 900;
    std::cin >> N;

    switch (N)
    {
    case 113: std::cout << "КАЛИНИНГРАД-ЧАПАЕВО" << std::endl; break;
    case 114: std::cout << "КАЛИНИНГРАД-ЗЕЛЕНОГРАДСК" << std::endl; break;
    case 117: std::cout << "КАЛИНИНГРАД-МАМОНОВО" << std::endl; break;
    case 118: std::cout << "КАЛИНИНГРАД-СВЕТЛОГОРСК" << std::endl; break;
    case 119: std::cout << "КАЛИНИНГРАД-ПИОНЕРСКИЙ" << std::endl; break;
    case 125: std::cout << "КАЛИНИНГРАД-ДОНСКОЕ" << std::endl; break;
    case 136: std::cout << "КАЛИНИНГРАД-ПАРТИЗАНСКОЕ" << std::endl; break;
    case 141: std::cout << "КАЛИНИНГРАД-ЗЕЛЕНОГРАДСК" << std::endl; break;
    case 148: std::cout << "КАЛИНИНГРАД-БАГРАТИОНОВСК" << std::endl; break;
    case 161: std::cout << "КАЛИНИНГРАД-СВЕТЛОЕ" << std::endl; break;
    case 191: std::cout << "КАЛИНИНГРАД-БАГРАТИОНОВСК" << std::endl; break;
    case 593: std::cout << "КАЛИНИНГРАД-МОРСКОЕ" << std::endl; break;
    case 802: std::cout << "КАЛИНИНГРАД-ГДАНЬСК" << std::endl; break;

    default: std::cout << "Неизвестный рейс" << std::endl;

    }
}