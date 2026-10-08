#include <iostream>
#include <windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int CategoryChoice = 0;	//выбор категории
	int JuiceChoice = 0; //выбор товара из категории

	int TotalPrice = 0; //общая сумма покупки
	bool IsRunning = true; //работа цикла

	std::cout << "-----------------------------------\n";
	std::cout << "Добро пожаловать в Соки Александра.\n";
	std::cout << "-----------------------------------\n";
	
	while (IsRunning)
	{
		std::cout << "===============================\n";
		std::cout << "         Главное меню.\n";
		std::cout << "===============================\n";
		std::cout << "Выбрите категорию меню: \n";
		std::cout << "1. Фруктовые соки\n";
		std::cout << "2. Овощные соки\n";
		std::cout << "3. Чаи\n";
		std::cout << "4. Настойки\n";
		std::cout << "5. Посмотреть корзину и сделать заказ\n";
		std::cout << "6. Выход\n";
		std::cout << "\nВведите номер категории (1-6): ";
		std::cin >> CategoryChoice;
		std::cout << "\n";

		if (CategoryChoice == 1)
		{
			std::cout << "Вы выбрали Фруктовые соки.\n";
			std::cout << "\n";
			std::cout << "Выберите сок: \n";
			std::cout << "1. Яблочный (200 рублей)\n";
			std::cout << "2. Апельсиновый (150 рублей)\n";
			std::cout << "3. Абрикосовый (180 рублей)\n";
			std::cout << "4. Грушевый (160 рублей)\n";
			std::cout << "\n";
			std::cout << "Введите номер сока (1-4): ";
			std::cin >> JuiceChoice;
			std::cout << "\n";

			if (JuiceChoice == 1)
			{
				std::cout << "Вы заказали яблочный сок.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
				TotalPrice += 200;
			}

			else if (JuiceChoice == 2)
			{
				std::cout << "Вы заказали апельсиновый сок.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
				TotalPrice += 150;
			}

			else if (JuiceChoice == 3)
			{
				std::cout << "Вы заказали абрикосовый сок. \n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
				TotalPrice += 180;
			}

			else if (JuiceChoice == 4)
			{
				std::cout << "Вы заказали грушевый сок.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
				TotalPrice += 160;
			}

			else
			{
				std::cout << "Некорректный ввод. Пожалуйста, выберите номер сока от 1 до 4.\n";
				std::cout << "\n";
			}

		}

		else if (CategoryChoice == 2)
		{
			std::cout << "Вы выбрали Овощные соки.\n";
			std::cout << "1. Томатный\n";
			std::cout << "2. Луковый\n";
			std::cout << "3. Огуречный\n";
			std::cout << "\n";
			std::cout << "Введите номер сока (1-3): ";
			std::cin >> JuiceChoice;

			if (JuiceChoice == 1)
			{	
				std::cout << "\n";
				std::cout << "Вы заказали томатный сок.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
			}

			else if (JuiceChoice == 2)
			{	
				std::cout << "\n";
				std::cout << "Вы заказали луковый сок.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
			}

			else if (JuiceChoice == 3)
			{	
				std::cout << "\n";
				std::cout << "Вы заказали огуречный сок.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
			}

			else
			{	
				std::cout << "\n";
				std::cout << "Некорректный ввод. Пожалуйста, выберите номер сока от 1 до 3.\n";
				std::cout << "\n";
			}
		}

		else if (CategoryChoice == 3)
		{
			std::cout << "Вы выбрали Чаи.\n";
			std::cout << "1. Чесночный\n";
			std::cout << "2. Петрушевый\n";
			std::cout << "\n";
			std::cout << "Введите номер чая (1-2): ";
			std::cin >> JuiceChoice;

			if (JuiceChoice == 1)
			{	
				std::cout << "\n";
				std::cout << "Вы заказали Чесночный чай.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
			}

			else if (JuiceChoice == 2)
			{	
				std::cout << "\n";
				std::cout << "Вы заказали Петрушевый чай.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
			}

			else
			{	
				std::cout << "\n";
				std::cout << "Некорректный ввод. Пожалуйста, выберите номер сока от 1 до 3.\n";
				std::cout << "\n";
			}

		}

		else if (CategoryChoice == 4)
		{
			std::cout << "Вы выбрали Настойки.\n";
			std::cout << "1. Боярышник\n";
			std::cout << "\n";
			std::cout << "Введите номер настойки (1-1): ";
			std::cin >> JuiceChoice;
			if (JuiceChoice == 1)
			{	
				std::cout << "\n";
				std::cout << "Вы заказали настойку Боярышника.\n";
				std::cout << "Покупка добавлена в корзину.\n";
				std::cout << "\n";
			}
			else
			{	
				std::cout << "\n";
				std::cout << "Некорректный ввод. Пожалуйста, выберите номер сока от 1 до 3.\n";
				std::cout << "\n";
			}

		}

		else if (CategoryChoice == 5)
		{
			std::cout << "====================================\n";
			std::cout << "Ваш заказ успешно оформлен!\n";
			std::cout << "Итого к оплате: " << TotalPrice << " рублей.\n";
			std::cout << "Спасибо, что заглянули к Александру!\n";
			std::cout << "====================================\n";
			IsRunning = false; 
			}

			
		else if (CategoryChoice == 6)
		{
			std::cout << "До свидания! Ждем вас снова.\n";
			IsRunning = false;
		}

		else
		{
			std::cout << "Некорректный ввод. Пожалуйста, выберите номер категории от 1 до 6.\n";
			std::cout << "\n";
		}


	}
	return 0;
}





//написать рекурсивную функцию, которая принимает два числа и возвращает их произведение. Нельяз использовать оператор *
/*
#include <iostream>
#include <Windows.h>

int RecMult(int one, int two)
{
	if (two == 0)
	{
		return 0;
	}

	return one + RecMult(one, two - 1);
}
*/




//рекурсивная функция
/*
int Fak(int num)
{
	if (num < 0)
	{
		return 0;
	}
	if (num == 0)
	{
		return 1;
	}
	return num * Fak(num - 1);

}
*/





//auto substract T1
/*
#include <iostream>
#include <Windows.h>

template <typename T1, typename Alex>
auto Substruct(T1 one, Alex two)
{
	return one - two;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	Substruct(10, 3);
	//Substruct("10.78", "3.123");

	return 0;
}
*/





//создать 3 массива на 4 ячейки типа int, double,char (a-z) 1251
//создать перегруженную функцию FillArray, которая принимает массив и размер массива.
//функция заполняет рандомными значениями через rand()
//по аналогии создать перегруженную функцию ShowArray (double)(rand() % ___)
/*
#include <iostream>
#include <Windows.h>

void FillArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand();
	}
}

void FillArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillArray(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 'a' + rand() % 26;
	}
}

void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void ShowArray(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

void ShowArray(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int size = 4;
	int arr1[size];
	double arr2[size];
	char arr3[size];

	FillArray(arr1, size);
	FillArray(arr2, size);
	FillArray(arr3, size);

	ShowArray(arr1, size);
	ShowArray(arr2, size);
	ShowArray(arr3, size);

	return 0;
}
*/





//перегруженная функция
/*
double Sum(double one, double two)
{
	return one + two;
}

int Sum(int one, int two)
{
	return one - two;
}

int main()
{
	Sum(3.1, 6.2);

}
*/





//написать простой калькулятор, где вычисления сложения, вычитания, умножения и деления
//будут происходить в отдельных функиях с возвратом (решение farita)
/*
#include <iostream>
#include <Windows.h>

double Sum(double one, double two)
{
	return one + two;

	//250
}

int main()
{	
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	double first = 10;
	double second = 15;

	int znak = 1;

	if (znak == 1)
	{
		std::cout << Sum(first, second);
	}

	return 0;


}
*/





//написать простой калькулятор, где вычисления сложения, вычитания, умножения и деления
//будут происходить в отдельных функиях с возвратом(мое решение)
/*
#include <iostream>
#include <Windows.h>

int Sum(int a, int b)
{
	return a + b;
}

int minus(int a, int b)
{
	return a - b;
}

int umnozhit(int a, int b)
{
	return a * b;
}

double delenie(double a, double b)
{
	return a / b;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a = 0, b = 0;

	std::cout << "Введите первое число: ";
	std::cin >> a;

	std::cout << "Введите второе число: ";
	std::cin >> b;

	std::cout << "Сложение: " << Sum(a, b) << "\n";
	std::cout << "Вычитание: " << minus(a, b) << "\n";
	std::cout << "Умножение: " << umnozhit(a, b) << "\n";

	if (b == 0)
	{
		std::cout << "Деление: на ноль делить нельзя\n";
	}
	else
	{
		std::cout << "Деление: " << delenie(a, b) << "\n";
	}

	return 0;
}
*/





//функция
/*
#include <iostream>
#include <Windows.h>


//тип возврата Имя_Функии(аргументы_функцции, ...)
//{
//	тело_функции
//}


void PrintHello()
{
	std::cout << "Hello\n";
	//int a = 10;
	//std::cout << a;
}

//void PrintNum(int a)
void PrintNum(int a, double b)
{
	//std::cout << a << "\n";

	a += b;
	std::cout << a + b << "\n";
}

int Sum(int a, int b)
{
	return a + b;
}

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	int playerHP = 1;

	//PrintHello();

	//std::cout << a;

	//PrintNum(10);

	//PrintNum(playerHP, 100);
	//std::cout << playerHP;

	//Sum(5, 10); //15 //в консоль не вывелось ничего

	std::cout << Sum(5, 10); //вывелось 15

	//return 1;
	return 0;
}
*/





//заполнить двухмерный массив рандомными числами с помощью циклов и вывести на консоль
/*#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int row = 3, col = 4;
	int arr[row][col]{};


	for (int i = 0; i < row; i++)
	{
		for (int y = 0; y < col; y++)
		{
			arr[i][y] = rand() % 10;
			std::cout << arr[i][y] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}
*/





//многомерный массив
/*#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	//const int size = 3;
	//int arr[3]{};
	//std::cout << arr[3];
	//arr[0];
	//arr[size - 1];

	//const int row = 3, col = 4;
	//int arr[3][4]; //двухмерный массив 3 на 4

	const int row = 3, col = 4;
	int arr[row][col]{ {1,2,3,4},{3,2,1,1},{3,4,1,7} };//но такое будет редко

	return 0;
}
*/





//Переделать масив на 10 ячеек.
//Рандомайзер заполняет массив числами
//от -10 до 10.
// программа делает следующее:
//1) выводит содержимое массива
//2) выводит сумму всех положительных чисел 
//3) выводит сумму всех отрицательных чисел
//4) показывает среднее арифметическое массива
/*
#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	const int size = 10;
	int arr[size]{};

	int summ_polozhit = 0;
	int summ_otrizhat = 0;
	int srednee_orifmet = 0;


	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 21 - 10;
		std::cout << arr[i] << " ";
		if (arr[i] > 0)
		{
			summ_polozhit += arr[i];
		}
		else
		{
			summ_otrizhat += arr[i];
		}
	}

	std::cout << summ_polozhit << "\n" << summ_otrizhat << "\n" << (summ_polozhit + summ_otrizhat) / size;

	return 0;
}
*/





//массивы
/*
#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	//int a = 5;
	// тип данных_имя_массива[количество_ячеек]
	//int arr[3]{4, 5, 6, 1, 6}; //{} - заполнить нулями во всей ячейке
	//std::cout << arr;
	//arr[0] = 10;
	//arr[1] = 40;
	//arr[2] = 30;
	//int size = 5;

	const int size = 5;
	int arr[size]{ 1, 2, 5, 6, 4 };

	std::cout << arr[0] << "\n";
	std::cout << arr[1] << "\n";
	std::cout << arr[2] << "\n";
	std::cout << arr[3] << "\n";
	std::cout << arr[4] << "\n";

	return 0;
}
*/





//задание создать массив на 4 ячейки. 
// пользователь заполняет массив целыми числами. 
// после этого программа показывает содержимое массива в строчку через пробел. 
//std::cin можно написать 1 раз.
/*
#include <iostream>
#include <Windows.h>
int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	const int size = 4; //тут 4 ячейки
	//const int size = 40; //а тут 40
	int arr[size]{};

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		std::cout >> arr[i] << " ";
	}

	return 0;
}
*/





//игра с рандомным числом
/*
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));


	int choose = 0, number = 0, hp = 0, randomnumber = 0;
	int maxhp = 25, maxhphard = 25, chance = 30;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n\t\tИгра \"Угадай число\"\n\n\n";
		std::cout << "1 - Начать игру\n";
		std::cout << "2 - Настройки\n";
		std::cout << "0 - Выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tИгра \"Выберите уровень сложности\"\n\n\n";
				std::cout << "1 - Легкий (1 - 500)\n";
				std::cout << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomnumber = rand() % 500 + 1;
					hp = maxhp;

					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500%: ";
						std::cin >> number;

						if (number == randomnumber)
						{
							std::cout << "\nВы угадали!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за диапозон\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "вы проиграли\n";
								std::cout << "Число было: " << randomnumber << "\n";
								system("pause");
								break;
							}

							std::cout << "\nНе угадали\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								hp--;
								if (hp <= 0)
								{
									std::cout << "вы проиграли\n";
									std::cout << "Число было: " << randomnumber << "\n";
									system("pause");
									break;
								}
								if (number < randomnumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(3000);
							}
							else
							{
								std::cout << "Отказ от подсказки\n ";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 2)
				{
					randomnumber = rand() % 500 + 1;
					hp = maxhphard;
					while (true)
					{
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000%: ";
						std::cin >> number;

						if (number == randomnumber)
						{
							std::cout << "\nВы угадали!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за диапозон\n";
							Sleep(1200);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << "вы проиграли\n";
								std::cout << "Число было: " << randomnumber << "\n";
								system("pause");
								break;
							}

							std::cout << "\nНе угадали\n";
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - нет\nВвод: ";
							std::cin >> choose;

							if (choose == 1)
							{
								if (true)
								{

								}
								else
								{

								}


								hp--;
								if (hp <= 0)
								{
									std::cout << "вы проиграли\n";
									std::cout << "Число было: " << randomnumber << "\n";
									system("pause");
									break;
								}
								if (number < randomnumber)
								{
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else
								{
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(3000);
							}
							else
							{
								std::cout << "Отказ от подсказки\n ";
								Sleep(500);
							}
						}
					}
				}
				else if (choose == 0)
				{

					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\t\tИгра \"Настройки игры\"\n\n\n";
				std::cout << "1 - Изменить количество жизней для легкой игры\n";
				std::cout << "2 - Изменить количество жизней для сложной игры\n";
				std::cout << "0 - Изменить шанс бесплатной подсказки для сложной игры\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						std::cout << "Введите количество жизней для легкой игры";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << "Допустимые лимиты от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << "Успешно\n";
							Sleep(1000);
							maxhp = choose;
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						system("cls");
						std::cout << "\n\n\n\t\tИгра \"Настройки игры\"\n\n\n";
						std::cout << "1 - Изменить количество жизней для легкой игры\n";
						std::cout << "2 - Изменить количество жизней для сложной игры\n";
						std::cout << "0 - Изменить шанс бесплатной подсказки для сложной игры\n\n";
						std::cout << "Ввод: ";
						std::cin >> choose;

						if (choose == 1)
						{
							while (true)
							{
								std::cout << "Введите количество жизней для легкой игры";
								std::cin >> choose;
								if (choose < 1 || choose > 100)
								{
									std::cout << "Допустимые лимиты от 1 до 100\n";
									Sleep(1500);
								}
								else
								{
									std::cout << "Успешно\n";
									Sleep(1000);
									maxhp = choose;
									break;
								}
							}
						}
						else if (choose == 2)
						{
							while (true)
							{
								std::cout << "Введите количество жизней для сложной игры";
								std::cin >> choose;
								if (choose < 1 || choose > 100)
								{
									std::cout << "Допустимые лимиты от 1 до 100\n";
									Sleep(1500);
								}
								else
								{
									std::cout << "Успешно\n";
									Sleep(1000);
									maxhphard = choose;
									break;
								}
							}
						}
						else if (choose == 3)
						{
							break;
						}
						else(choose == 0);
						{
							std::cout << "\nНекорректный ввод\n";
							Sleep(1500);

						}
					}
				}
				else if (choose == 0)
				{
					std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
					break;
				}
				else
				{
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
			return 0;
		}
		*/





		//дискриминант
		/*double a = 0, b = 0, c = 0, d = 0, x1 = 0, x2 = 0;



		std::cout << "Решение полного квадратного уравнения\n\n";
		std::cout << "ax^2 + bx + c = 0\n\n";
		std::cout << "Введите A: ";
		std::cin >> a;
		std::cout << "Введите B: ";
		std::cin >> b;
		std::cout << "Введите C: ";
		std::cin >> c;

		std::cout << a << "x^2 + " << b << "x + " << c << " = 0\n\n";

		d = std::pow(b, 2) - 4 * a * c;

		std::cout << "Дискриминант: " << d << "\n\n";

		if (d < 0)
		{
			std::cout << "Корней нет!\n";
		}
		else if (d == 0)
		{
			x1 = -b / (2 * a);
			std::cout << "Один корень: " << x1 << "\n";
		}
		else if (d > 0)
		{
			x1 = (-b + std::sqrt(d)) / (2 * a);
			x2 = (-b - std::sqrt(d)) / (2 * a);
			std::cout << "X1" << x1 << "\n";
			std::cout << "X2" << x2 << "\n";
		}*/





		//калькулятор
		/*
			double one = 0;
			char znak = 0;
			double two = 0;


			std::cout << "Введите первое число: ";
			std::cin >> one;
			std::cout << "Введите знак: ";
			std::cin >> znak;
			std::cout << "Введите второе число: ";
			std::cin >> two;

			if (znak == '/' && two == 0)
			{
				std::cout << "На ноль делить нельзя";
				if (two != 0)
				{
					std::cout << one / two;
				}
			}


			else if (znak == '+')
			{
				std::cout << one + two;
			}

			else if (znak == '-')
			{
				std::cout << one - two;
			}


			else if (znak == '*')
			{
				std::cout << one * two;
			}

			else
				std::cout << " error";




			return 0;
		}\*



		/*тип данных:
			bool			true/false	0 -- false
			char			'#'			43
			unsigned char	0 -- 255		0 -- 65535

			short			123			-32768 -- 32767
			unsigned short	123			0 -- 65535

			int				123456		-2147483648 -- 2147483647
			unsigned int	123456		0 -- 4294967295

			float			123.542		+- 3.4e-38...3.4e+38

			double		 123123.123123	+- 1.7e-308...1.7e
			long double  no comment		3.4-4932

			long long int	..............

			auto			???


			Оператор:

			математические: + - / * % () ++ -- += -= *= /= =
			сравнительные: < > == >= <= !=		<=>
			логические: && (и)		|| (или)	!(не)

			ТАБУ: goto			and or not		int номерОдин;
		*/





		//типы данных
		/*тип данных:
			bool			true/false	0 -- false
			char			'#'			43
			unsigned char	0 -- 255		0 -- 65535

			short			123			-32768 -- 32767
			unsigned short	123			0 -- 65535

			int				123456		-2147483648 -- 2147483647
			unsigned int	123456		0 -- 4294967295

			float			123.542		+- 3.4e-38...3.4e+38

			double		 123123.123123	+- 1.7e-308...1.7e
			long double  no comment		3.4-4932

			long long int	..............

			auto			???


			Оператор:

			математические: + - / * % () ++ -- += -= *= /= =
			сравнительные: < > == >= <= !=		<=>
			логические: && (и)		|| (или)	!(не)

			ТАБУ: goto			and or not		int номерОдин;
		*/





		//while
		/*	int a = 0;
			int sum = 0;

			while (true)
			{
				std::cout << "Введите число: ";
				std::cin >> a;

				if (a == 0)
				{
					std::cout << "Сумма всех чисел: " << sum;
					break;
				}
				else
				{
					sum += a;
				}

			}*/





			//do while
			/*do
				{
					std::cout << "1) Ларионов\n";
					std::cout << "2) Александр\n";
					std::cout << "3) Дмитриевич\n";
					std::cout << "Введи правильное число: ";
					std::cin >> a;



				} while (a < 1 || a > 3);
				{
					if (a == 1)
					{
						std::cout << "Ларионов\n ";

					}
					else if (a == 2)
					{
						std::cout << "Александр\n ";

					}
					else
					{
						std::cout << "Дмитриевич\n ";

					}
				}*/





				//switch
				/*int a = 0;
					std::cin >> a;

					switch (a)
					{
					case 1:

						break;
					case 2:

						break;
					case 3:
						std::cout << "asdqsadawd";
						break;
					default:
						std::cout << "a123123123";
						break;

					}*/










