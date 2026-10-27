#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    // Основной и временный баки каждого самолета.
    const double mainTank[2] = {300, 1000};
    const double extraTank[2] = {0, 100};

    // Строка - номер самолета, столбец - категория веса груза.
    const double weightLimits[2][3] = {
        {750, 1500, 2000},
        {1000, 2000, 3000}
    };
    const double fuelPerKm[2][3] = {
        {1, 4, 7},
        {2, 4, 6}
    };

    while (true)
    {
        std::cout << "\n=== АВИАПАРК ===\n";
        std::cout << "1. Самолет №1\n";
        std::cout << "2. Самолет №2\n";
        std::cout << "0. Выход\n";
        std::cout << "Выберите самолет: ";

        int choice = 0;
        if (!(std::cin >> choice))
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка ввода. Введите номер самолета.\n";
            continue;
        }
        if (choice == 0)
        {
            std::cout << "Выход из программы.\n";
            break;
        }
        if (choice < 1 || choice > 2)
        {
            std::cout << "Такого самолета нет!\n";
            continue;
        }

        int plane = choice - 1;
        double distance[2]{}; // distance[0] - А-В, distance[1] - В-С
        double cargoWeight = 0;

        std::cout << "Введите расстояние А-В (км): ";
        if (!(std::cin >> distance[0]))
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка ввода расстояния.\n";
            continue;
        }

        std::cout << "Введите расстояние В-С (км): ";
        if (!(std::cin >> distance[1]))
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка ввода расстояния.\n";
            continue;
        }

        std::cout << "Введите вес груза (кг): ";
        if (!(std::cin >> cargoWeight))
        {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Ошибка ввода веса.\n";
            continue;
        }

        if (distance[0] <= 0 || distance[1] <= 0 || cargoWeight < 0)
        {
            std::cout << "Расстояния должны быть больше 0, а вес не может быть отрицательным.\n";
            continue;
        }

        // Находим расход топлива по весу груза.
        double consumption = 0;
        for (int i = 0; i < 3; i++)
        {
            if (cargoWeight <= weightLimits[plane][i])
            {
                consumption = fuelPerKm[plane][i];
                break;
            }
        }

        if (consumption == 0)
        {
            std::cout << "Полет невозможен: самолет не поднимет такой груз.\n";
            continue;
        }

        double fuelAB = distance[0] * consumption;
        double fuelBC = distance[1] * consumption;

        // В пункте А оба бака полные. Временный бак используется первым.
        if (fuelAB > mainTank[plane] + extraTank[plane])
        {
            std::cout << "Полет невозможен: не хватает топлива на участке А-В.\n";
            continue;
        }

        // В пункте В временный бак сбрасывается, а основной можно заправить.
        if (fuelBC > mainTank[plane])
        {
            std::cout << "Полет невозможен: участок В-С слишком длинный даже с полным основным баком.\n";
            continue;
        }

        double fuelFromExtra = fuelAB;
        if (fuelFromExtra > extraTank[plane])
        {
            fuelFromExtra = extraTank[plane];
        }

        double fuelFromMain = fuelAB - fuelFromExtra;
        double fuelRemaining = mainTank[plane] - fuelFromMain;
        double refillInB = fuelBC - fuelRemaining;
        if (refillInB < 0)
        {
            refillInB = 0;
        }

        std::cout << "\n=== РЕЗУЛЬТАТ ===\n";
        std::cout << "Расход топлива: " << consumption << " л/км\n";
        std::cout << "Топливо на А-В: " << fuelAB << " л\n";
        std::cout << "Топливо на В-С: " << fuelBC << " л\n";
        if (plane == 1)
        {
            std::cout << "Из временного бака потрачено: " << fuelFromExtra << " л\n";
            std::cout << "Остаток временного бака сбрасывается в В: "
                      << extraTank[plane] - fuelFromExtra << " л\n";
        }
        std::cout << "В основном баке при прибытии в В: " << fuelRemaining << " л\n";
        std::cout << "Минимальная дозаправка в В: " << refillInB << " л\n";
    }

    return 0;
}
