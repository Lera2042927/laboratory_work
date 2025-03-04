// Лабораторная 7 задание 4 от лр 5 задания 1 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*#include <iostream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10

// Функция для заполнения массива Y случайными значениями в диапазоне [MIN_Y_LIMIT, MAX_Y_LIMIT]
void fillYArray(int* Y, int n) 
{
    int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;
    for (int i = 0; i < n; i++) 
    {
        Y[i] = MIN_Y_LIMIT + rand() % delta;
    }
}

// Функция для заполнения массива X случайными вещественными числами в диапазоне [MIN_LIMIT, MAX_LIMIT]
void fillXArray(double* X, int n) 
{
    for (int i = 0; i < n; i++)
    {
        X[i] = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT);
    }
}

// Функция для расширения массива X на основе значений массива Y
void expandXArray(double* X, int* Y, double* expanded_X, int n, int& total_count) 
{
    int offset = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < Y[i]; j++)
        {
            expanded_X[offset] = X[i];
            offset++;
        }
    }
}


// Функция для освобождения памяти
void freeMemory(double* X, int* Y, double* expanded_X) 
{
    delete[] X;
    delete[] Y;
    delete[] expanded_X;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №5 задание №1" << endl;
    cout << "Заданы массивы: вещественных чисел X(N), натуральных чисел Y(N)." << endl;
    cout << "В массиве X каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива Y." << endl;

    int n;
    do {
        cout << "Введите n \n";
        cin >> n;
        if (n > MAX_N)
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N);

    int* Y = new int[n];
    int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;

    int total_count = 0; // максимальное количество элементов массива X
    double* X = new double[n]; // Массив X исходных вещественных чисел

    // Заполняем массив Y случайными элементами
    srand(time(0));
    fillYArray(Y, n);

    // Считаем количество элементов в итоговом массиве X
    for (int i = 0; i < n; i++) {
        total_count += Y[i];
    }

    // Заполняем массив X случайными вещественными числами
    fillXArray(X, n);

    // Создаем результирующий массив
    double* expanded_X = new double[total_count];

    // Расширяем массив X
    expandXArray(X, Y, expanded_X, n, total_count);

    // Вывод массивов X и Y
    cout << "Массив X (результирующий): ";
    for (int i = 0; i < total_count; ++i) {
        cout << expanded_X[i] << " ";
    }
    cout << endl;

    cout << "Массив Y: ";
    for (int i = 0; i < n; ++i) {
        cout << Y[i] << " ";
    }
    cout << endl;

    cout << "Исходный массив X: ";
    for (int i = 0; i < n; ++i) {
        cout << X[i] << " ";
    }
    cout << endl;

    // Освобождаем память
    freeMemory(X, Y, expanded_X);

    return 0;
}*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10

// Функция для заполнения массива Y случайными значениями в диапазоне [MIN_Y_LIMIT, MAX_Y_LIMIT]
int* fillYArray(int n)
{
    int* Y = new int[n]; // Динамический массив для Y
    int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;
    for (int i = 0; i < n; i++)
    {
        Y[i] = MIN_Y_LIMIT + rand() % delta;
    }
    return Y; // Возвращаем указатель на заполненный массив
}

// Функция для заполнения массива X случайными вещественными числами в диапазоне [MIN_LIMIT, MAX_LIMIT]
double* fillXArray(int n)
{
    double* X = new double[n]; // Динамический массив для X
    for (int i = 0; i < n; i++)
    {
        X[i] = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT);
    }
    return X; // Возвращаем указатель на заполненный массив
}

// Функция для расширения массива X на основе значений массива Y
double* expandXArray(double* X, int* Y, int n, int& total_count)
{
    // Считаем количество элементов в итоговом массиве X
    total_count = 0;
    for (int i = 0; i < n; i++) {
        total_count += Y[i];
    }

    double* expanded_X = new double[total_count]; // Динамический массив для расширенного X
    int offset = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < Y[i]; j++)
        {
            expanded_X[offset] = X[i];
            offset++;
        }
    }
    return expanded_X; // Возвращаем указатель на расширенный массив
}

// Функция для освобождения памяти
void freeMemory(double* X, int* Y, double* expanded_X)
{
    delete[] X;
    delete[] Y;
    delete[] expanded_X;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №5 задание №1" << endl;
    cout << "Заданы массивы: вещественных чисел X(N), натуральных чисел Y(N)." << endl;
    cout << "В массиве X каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива Y." << endl;

    int n;
    do {
        cout << "Введите n \n";
        cin >> n;
        if (n > MAX_N)
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N);

    srand(time(0)); // Инициализация генератора случайных чисел

    // Заполняем массив Y случайными элементами
    int* Y = fillYArray(n);

    // Заполняем массив X случайными вещественными числами
    double* X = fillXArray(n);

    // Расширяем массив X
    int total_count = 0;
    double* expanded_X = expandXArray(X, Y, n, total_count);

    // Вывод массивов X и Y
    cout << "Массив X (результирующий): ";
    for (int i = 0; i < total_count; ++i) {
        cout << expanded_X[i] << " ";
    }
    cout << endl;

    cout << "Массив Y: ";
    for (int i = 0; i < n; ++i) {
        cout << Y[i] << " ";
    }
    cout << endl;

    cout << "Исходный массив X: ";
    for (int i = 0; i < n; ++i) {
        cout << X[i] << " ";
    }
    cout << endl;

    // Освобождаем память
    freeMemory(X, Y, expanded_X);

    return 0;
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
