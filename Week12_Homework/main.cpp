#define NOMINMAX
#include <iostream>
#include <Windows.h>

// Проверяем, является ли год високосным
bool IsLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    if (year % 4 == 0)
        return true;

    return false;
}

// Определяем количество дней в месяце
int DaysInMonth(int month, int year)
{
    int days[12]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    if (month == 2 && IsLeapYear(year))
        return 29;

    return days[month - 1];
}

// Проверяем правильность введенной даты
bool IsCorrectDate(int day, int month, int year)
{
    if (year < 1 || year > 9999 || month < 1 || month > 12)
        return false;

    if (day < 1 || day > DaysInMonth(month, year))
        return false;

    return true;
}

// Считаем количество дней от начала первого года
int DaysFromStart(int day, int month, int year)
{
    int total = 0;

    for (int i = 1; i < year; i++)
    {
        if (IsLeapYear(i))
            total += 366;
        else
            total += 365;
    }

    for (int i = 1; i < month; i++)
    {
        total += DaysInMonth(i, year);
    }

    total += day;
    return total;
}

// Задание 1. Функция принимает 6 параметров
int DateDifference(int day1, int month1, int year1,
                   int day2, int month2, int year2)
{
    int first = DaysFromStart(day1, month1, year1);
    int second = DaysFromStart(day2, month2, year2);
    int difference = second - first;

    if (difference < 0)
        difference = -difference;

    return difference;
}

// Задание 2. Среднее арифметическое массива
double Average(int arr[], int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum / size;
}

// Задание 3. Количество положительных, отрицательных и нулей
void CountElements(int arr[], int size, int& positive, int& negative, int& zeros)
{
    positive = 0;
    negative = 0;
    zeros = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            positive++;
        else if (arr[i] < 0)
            negative++;
        else
            zeros++;
    }
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int choice = 0;

    while (true)
    {
        std::cout << "\n===== ДОМАШНЕЕ ЗАДАНИЕ 1 =====\n";
        std::cout << "1. Разница между двумя датами\n";
        std::cout << "2. Среднее арифметическое массива\n";
        std::cout << "3. Количество положительных, отрицательных и нулей\n";
        std::cout << "0. Выход\n";
        std::cout << "Выберите задание: ";

        if (!(std::cin >> choice))
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Неверный ввод!\n";
            continue;
        }

        if (choice == 0)
        {
            std::cout << "Выход из программы.\n";
            break;
        }
        else if (choice == 1)
        {
            int day1, month1, year1;
            int day2, month2, year2;

            std::cout << "Введите первую дату (день месяц год): ";
            if (!(std::cin >> day1 >> month1 >> year1))
                break;

            std::cout << "Введите вторую дату (день месяц год): ";
            if (!(std::cin >> day2 >> month2 >> year2))
                break;

            if (!IsCorrectDate(day1, month1, year1) ||
                !IsCorrectDate(day2, month2, year2))
            {
                std::cout << "Ошибка! Введена неправильная дата.\n";
            }
            else
            {
                std::cout << "Разница между датами: "
                          << DateDifference(day1, month1, year1,
                                            day2, month2, year2)
                          << " дней.\n";
            }
        }
        else if (choice == 2 || choice == 3)
        {
            const int size = 10;
            int arr[size]{};

            std::cout << "Введите 10 целых чисел:\n";
            bool correctInput = true;
            for (int i = 0; i < size; i++)
            {
                std::cout << "Элемент " << i + 1 << ": ";
                if (!(std::cin >> arr[i]))
                {
                    correctInput = false;
                    break;
                }
            }

            if (!correctInput)
                break;

            if (choice == 2)
            {
                std::cout << "Среднее арифметическое: "
                          << Average(arr, size) << "\n";
            }
            else
            {
                int positive = 0, negative = 0, zeros = 0;
                CountElements(arr, size, positive, negative, zeros);

                std::cout << "Положительных: " << positive << "\n";
                std::cout << "Отрицательных: " << negative << "\n";
                std::cout << "Нулевых: " << zeros << "\n";
            }
        }
        else
        {
            std::cout << "Такого задания нет!\n";
        }
    }

    return 0;
}
