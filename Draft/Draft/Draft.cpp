#include <iostream>
#include <cstdlib>

int main()
{
    setlocale(LC_ALL, "Russian");

    int rows = 2;
    int cols = 2;

    int A = 0; // + строк сверху rows
    int B = 0; // + столбцов слева cols
    int C = 0; // коэффициент для заполнения
    int D = 0; // коэффициент для заполнения

    // Выделяем память под массив указателей
    int** arr = (int**)malloc(rows * sizeof(int*));

    // Выделяем память
    for (int i = 0; i < rows; ++i) {
        arr[i] = (int*)malloc(cols * sizeof(int));
    }

    // Ввод чисел
    std::cout << "Введите A, B, C, D:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Элемент [" << i << "][" << j << "]: ";
            std::cin >> arr[i][j];

            //Проверка А
            if (arr[0][0] >= 0 and arr[0][1] >= 0)
            {
                continue;
                //break;
            }
            else if (arr[0][0] <= 0)
            {
                std::cout << "А > 0" << std::endl;
                std::cin >> arr[0][0];
            }
            else if (arr[0][1] <= 0)
            {
                std::cout << "B > 0" << std::endl;
                std::cin >> arr[0][1];
            }
            

            //Проверка В
            /*if (arr[0][1] >= 0)
            {
                continue;
            }
            else
            {
                std::cout << "B > 0" << std::endl;
                std::cin >> arr[0][1];
            }*/
        }
    }


    // Вывод массива
    std::cout << "\nВведённый массив:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Освобождение памяти
    for (int i = 0; i < rows; ++i) {
        free(arr[i]);
    }
    free(arr);

    /*arr[0][0] = A;
    arr[0][1] = B;
    arr[1][0] = C;
    arr[1][1] = D;*/
}
