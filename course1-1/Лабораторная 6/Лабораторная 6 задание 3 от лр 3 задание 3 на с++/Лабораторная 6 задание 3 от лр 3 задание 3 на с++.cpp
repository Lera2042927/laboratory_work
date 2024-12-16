// Лабораторная 6 задание 3 от лр 3 задание 3 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <iomanip> 
using namespace std;

#define MAX_N 10
#define MIN_LIMIT 10
#define MAX_LIMIT 80


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №6 задание №3" << endl;
    cout << "Даны действительные числа a1,...an^2.Получить действительную квадратную матрицу, элементами которой являются числа" << endl;
    cout << "а1,...an^2, отсортированные по убыванию и расположенные в ней по схеме" << endl;

    int n;
    unsigned int numbers_count; //число элементов в последовательности
    do {
        cout << "Введите n \n";
        cin >> n;
        if (n > MAX_N)
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N);
    numbers_count = n * n;

    // Вектор для хранения чисел
    vector<double> numbers(numbers_count);

    // Заполняем массив случайными элементами
    srand(time(0));

    for (unsigned int i = 0; i < numbers_count; i++)
    {
        numbers.at(i) = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); //диапазон
        cout << numbers.at(i) << " ";
    }
    cout << endl;

    // Сортировка чисел по убыванию (вставками)
    for (unsigned int i = 1; i < numbers_count; i++) {
        double key = numbers.at(i);
        int j = i - 1;
        while (j >= 0 && numbers.at(j) < key)
        {
            numbers.at(j + 1) = numbers.at(j);
            j--;
        }
        numbers.at(j + 1) = key;
    }
    for (unsigned int i = 0; i < numbers_count; i++)
    {
        cout << numbers.at(i) << " ";
    }
    cout << endl;

    // Заполнение матрицы числами по схеме
    unsigned int min_row = 0;
    unsigned int min_col = 0;
    int step = 1;
    int row = 0;
    int col = 0;

    // Вектор для хранения матрицы
    vector<vector<double>>matrix(n, vector<double>(n));
    
    for (unsigned int i = 0; i < numbers_count; i++) {
        matrix.at(row).at(col) = numbers.at(i); // Заполняем матрицу значениями из numbers
        col += step;
        row -= step;

        if (col >= n) {
            col--;
            row += 2;
            step = -step;
        }
        else if (row >= n) {
            row--;
            col += 2;
            step = -step;
        }
        else if (col < 0) {
            col = 0;
            step = -step;
        }
        else if (row < 0) {
            row = 0;
            step = -step;
        }
    }

    // Вывод матрицы
    cout << "Матрица:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) 
        {
            cout << matrix.at(i).at(j) << "\t";
        }
        cout << endl;
    }

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
