// Лаборараторная 1 задание 1 строки.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №1 задание №1" << endl;
    cout << "Дана строка, изображающая арифметическое выражение вида «<циф-ра>±<цифра>±…±<цифра>», где на месте знака операции «±» находится" << endl;
    cout << "символ «+» или «–» (например, «4+7–2–8»). Вывести значение данного выражения (целое число)." << endl;
    srand(static_cast<unsigned int>(time(0)));

    int numCount;
    cout << "Введите количество случайных чисел: ";
    cin >> numCount;
    //int numbers[numCount];
    //char operators[numCount - 1];

    //проверка на корректность ввода
    if (numCount <= 0)
    {
        cout << "Количество чисел долдно быть положительным " << endl;
        return 1;
    }

    //динамический массив для хранения чисел
    int* numbers = new int[numCount];

    //динамический массив для хранения операторов
    char* operators = new char[numCount - 1];

    for (int i = 0; i < numCount; i++) 
    {
        numbers[i] = rand() % 100; // Случайные числа от 0 до 9
        if (i < numCount - 1)
        {
            operators[i] = (rand() % 2 == 0) ? '+' : '-';
        }
    }

    cout << "Сгенерированное выражение: ";
    for (int i = 0; i < numCount; i++)
    {
        cout << numbers[i];
        if (i < numCount - 1) 
        {
            cout << operators[i];
        }
    }
    cout << std::endl;

    int result = numbers[0];
    for (int i = 0; i < numCount - 1; i++)
    {
        if (operators[i] == '+') 
        {
            result += numbers[i + 1];
        }
        else
        {
            result -= numbers[i + 1];
        }
    }

    cout << "Результат: " << result << endl;

    delete[] numbers;
    delete[] operators;


    return 0;
}

















/*#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функция для генерации случайного  выражения
string generate(int count) 
{
    string expression;
    srand(static_cast<unsigned int>(time(0))); // генератор случайных чисел

    // Генерируем первое число
    expression += to_string(rand() % 100); // Случайное число от 0 до 99

    for (int i = 1; i < count; ++i) 
    {
        // Генерируем случайный знак операции
        char operation = (rand() % 2) ? '+' : '-';
        expression += operation; // Добавляем операцию

        // Генерируем следующее число
        expression += to_string(rand() % 100); // Случайное число от 0 до 99
    }

    return expression;
}

// Функция для вычисления значения арифметического выражения
int calculatingValue(const string& expression) {
    int result = 0; //  результат
    char operation = '+'; // Начальная операция
    stringstream ss(expression); // Создаем поток для разбора строки
    int number;

    while (ss >> number) 
    { // Считываем число
        if (operation == '+')
        {
            result += number; // Если операция сложения, добавляем число
        }
        else if (operation == '-') 
        {
            result -= number; // Если операция вычитания, вычитаем число
        }

        // Считываем следующий символ (операцию)
        ss >> operation;
    }

    return result;
}

int main() 
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №1 задание №1" << endl;
    cout << "Дана строка, изображающая арифметического выражение вида <цифра>+-<цифра>+-...+-<цифра>:" << endl;
    cout << " где на месте знака операции +-находится символ + или -. Вывести значение данного выражения(целое число)" << endl;
    int count;
    cout << "Введите количество членов в выражении: ";
    cin >> count;

    // Генерируем случайное выражение
    string expression = generate(count);
    cout << "Сгенерированное выражение: " << expression << endl;

    
    int result = calculatingValue(expression);
    cout << "Результат выражения: " << result << endl;

    return 0;
}*/

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
