#include <iostream>
#include <vector>
#include <array>
#include <random>

void Error()
{
	std::cout << "Ошибка" << std::endl;
}

// Размер массива
constexpr size_t array_size = 10;

// Функция сортировки по возрастанию (передан по значению)
void SortByValue(std::array<int, array_size> arr)
{
	std::sort(arr.begin(), arr.end());
	std::cout << "В функции (по значению): ";
	for (const auto& val : arr)
	{
		std::cout << val << " ";
	}
	std::cout << std::endl;
	// Изменения НЕ затронут исходный массив!
}

// Функция сортировки по убыванию (передан по ссылке)
void SortByReference(std::array<int, array_size>& arr)
{
	std::sort(arr.rbegin(), arr.rend());
	std::cout << "В функции (по ссылке): ";
	for (const auto& val : arr)
	{
		std::cout << val << " ";
	}
	std::cout << std::endl;
	// Изменения затронут исходный массив!
}

// Функция сортировки с указателем
void SortByPointer(std::array<int, array_size>* ptr) {
	std::sort(ptr->begin(), ptr->end());
	std::cout << "В функции (по указателю): ";
	for (const auto& val : *ptr) {
		std::cout << val << " ";
	}
	std::cout << std::endl;
	// Изменения затронут исходный массив!
}


int main()
{

	setlocale(LC_ALL, "Russian");

	//Массив
	int n = 0; //Колличество элементов в массиве
	std::cout << "Введите количество элементов: ";
	std::cin >> n;
	std::vector<int> vec(n);

	//Ввод
	std::cout << "Введите элементы: ";
	for (int i = 0; i < n; ++i)
	{
		std::cin >> vec[i];
	}

	//Консоль
	int console = 0;//Для выбора в консоле
	while (console < 7)
	{
		std::cout << "Меню:\n 0.Выход\n 1.Просмотр массива\n 2.Добавить элемент в начало\n 3.Добавить элемент в конец\n 4.Очистка всего массива\n 5.Поиск элемента в массиве\n 6.Преобразование массива\n" << std::endl;
		std::cin >> console;

		if (console == 0)
		{
			std::cout << "Выход\n" << std::endl;
			break;
		}

		if (console == 1)
		{
			std::cout << "Просмотр массива" << std::endl;

			//Вывод массива
			std::cout << "Массив: [";
			for (int value : vec)
			{
				std::cout << value << " ";
			}
			std::cout << "]\n" << std::endl;
		}

		if (console == 2)
		{
			std::cout << "Добавить элемент в начало" << std::endl;

			//Новый элемент
			std::cout << "Введите новый элемент: " << std::endl;
			int NewElement = 0;
			std::cin >> NewElement;
			vec.insert(vec.begin(), NewElement);

			// Выводим результат
			std::cout << "Массив: [";
			for (int value : vec)
			{
				std::cout << value << " ";
			}
			std::cout << "]\n" << std::endl;
		}

		if (console == 3)
		{
			std::cout << "Добавить элемент в конец" << std::endl;

			//Новый элемент
			std::cout << "Введите новый элемент: " << std::endl;
			int NewElement = 0;
			std::cin >> NewElement;
			vec.push_back(NewElement);

			// Выводим результат
			std::cout << "Массив: [";
			for (int value : vec)
			{
				std::cout << value << " ";
			}
			std::cout << "]\n" << std::endl;

		}

		if (console == 4)
		{
			std::cout << "Очистка всего массива" << std::endl;
			vec.clear(); //Удаляет все значения

			//Вывод
			std::cout << "Массив: [";
			for (int value : vec)
			{
				std::cout << value << " ";
			}
			std::cout << "]\n" << std::endl;
		}

		if (console == 5)
		{
			std::cout << "Поиск элемента в массиве" << std::endl;

			std::cout << "Введите индекс элемента" << std::endl;

			int element = 0; //индекс
			std::cin >> element;

			std::cout << "Элемент с индексом " << element << ": " << vec[element] << std::endl;
		}

		//В массиве после каждого нечетного числа стоящего на четной позиции вставить 0, если таких нет – добавить - 1 в начале и в конце.
		if (console == 6)
		{
			std::cout << "Преобразование массива\n" << std::endl;

			int i = 0; //индекс
			if (i % 2 == 0 and vec[i] % 2 != 0)
			{
				for (int i = n - 1; i >= 0; --i)
				{
					if (i % 2 == 0) // чётная позиция (индекс)
					{
						if (vec[i] % 2 != 0) // нечётное число
						{
							// Вставляем 0 после элемента с индексом i
							vec.insert(vec.begin() + i + 1, 0);
						}
					}
				}
				std::cout << "Массив: [";
				for (int value : vec)
				{
					std::cout << value << " ";
				}
				std::cout << "]\n" << std::endl;
			}
			else
			{
				std::cout << "Массив до: [";
				for (int value : vec)
				{
					std::cout << value << " ";
				}
				std::cout << "]" << std::endl;

				int NewElement = -1;
				vec.insert(vec.begin(), NewElement); //Начало
				vec.push_back(NewElement); //Конец

				//Вывод массива после
				std::cout << "Массив после: [";
				for (int value : vec)
				{
					std::cout << value << " ";
				}
				std::cout << "]\n" << std::endl;
			}
		}

		if (console >= 7)
		{
			Error();
		}
	}

	//Пункт 2
	// Создаём и заполняем массив случайными числами из [-10; 10]
	std::array<int, array_size> Array;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(-10, 10);

	for (auto& element : Array)
	{
		element = dist(gen);
	}

	std::cout << "Исходный массив: ";
	for (const auto& val : Array)
	{
		std::cout << val << " ";
	}
	std::cout << std::endl;

	// 1. Передача по значению
	std::cout << "\nПередача по значению:" << std::endl;
	SortByValue(Array);
	std::cout << "После функции (по значению): ";
	for (const auto& val : Array)
	{
		std::cout << val << " ";
	}
	std::cout << std::endl;

	// 2. Передача по ссылке
	std::cout << "\nПередача по ссылке:" << std::endl;
	SortByReference(Array);
	std::cout << "После функции (по ссылке): ";
	for (const auto& val : Array)
	{
		std::cout << val << " ";
	}
	std::cout << std::endl;

	// 3. Передача по указателю
	std::cout << "\nПередача по указателю:" << std::endl;
	SortByPointer(&Array);
	std::cout << "После функции (по указателю): ";
	for (const auto& val : Array)
	{
		std::cout << val << " ";
	}
	std::cout << std::endl;


}
