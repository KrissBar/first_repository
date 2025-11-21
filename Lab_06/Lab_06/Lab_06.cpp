#include <iostream>
#include <cstdlib>


int main() 
{
	setlocale(LC_ALL, "Russian");

	const int rows = 2;
	const int cols = 2;

	int A = 0; // + строк сверху rows
	int B = 0; // + столбцов слева cols
	int C = 0; // коэффициент для заполнения
	int D = 0; // коэффициент для заполнения
	
    std::cout << "Введите А > 0" << std::endl;
    std::cin >> A;

    // Проверка А
    while (A >= 0)
    {
        break;
    }
    
    while (A <= 0)
    {
        std::cout << "Неверно" << std::endl;
        std::cin >> A;
    }

    // Проверка В
    std::cout << "Введите В > 0" << std::endl;
    std::cin >> B;

    while (B >= 0)
    {
        //std::cout << "A = " << A << std::endl;
        break;
    }

    while (B <= 0)
    {
        std::cout << "Неверно" << std::endl;
        std::cin >> B;
    }

    std::cout << "Введите C" << std::endl;
    std::cin >> C;

    std::cout << "Введите D" << std::endl;
    std::cin >> D;
    
    
    // Выделяем память 
    int* arrR = (int*)calloc(rows, sizeof(int));
    int* arrC = (int*)calloc(cols, sizeof(int));

    //Ввод элементов массива
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << A;
            std::cout << C;
            std::cout << B;
            std::cout << D;
        }
    }

    //Выводим заполненный массив
    std::cout << "\nМассив:\n";
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            std::cout << arrR[i] << " ";
            std::cout << arrC[j] << " ";

        }
        std::cout << std::endl;
    }

    // Освобождаем память
    free(arrR);
    free(arrC);
    


    //Пункт 2
    /*int a = 0;
    int b = 0;
    std::cout << "Введите значение a: " << std::endl;
    std::cin >> a;
    std::cout << "Введите значение b: " << std::endl;
    std::cin >> b;

    int* ptr_a = &a;
    int* ptr_b = &b;

    //Увеличение a
    *ptr_a = *ptr_a * 2;

    //Обмен значений a и b 
    int* temp = new int;  
    *temp = *ptr_a;       
    *ptr_a = *ptr_b;     
    *ptr_b = *temp;       
    delete temp;     // освобождаем выделенную память

    std::cout << "a = " << a << "\nb = " << b << std::endl;*/
}
