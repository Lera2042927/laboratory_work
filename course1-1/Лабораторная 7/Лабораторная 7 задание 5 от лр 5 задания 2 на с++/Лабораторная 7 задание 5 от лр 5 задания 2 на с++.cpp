// Лабораторная 7 задание 5 от лр 5 задания 2 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iomanip>
#include <iostream>
using namespace std;
#define ARRAY_X_ROW_MAX 100
#define ARRAY_X_COL_MAX 100


// Функция заполнения массива случайными числами
void fillArray(double** arr, unsigned int row_count, unsigned int col_count, int min_limit, int max_limit)
{
    if (arr == nullptr)
        return;

    int delta = max_limit - min_limit + 1;
    for (unsigned int i = 0; i < row_count; i++)
    {
        double* row = arr[i];
        if (row)
        {
            for (unsigned int j = 0; j < col_count; j++)
            {
                double value = min_limit + rand() % delta; //диапазон
                row[j] = value;
            }
        }
    }
}
//Вывод массива
void printArry(double** arr, unsigned int row_count, unsigned int col_count)
{
    if (arr == nullptr)
        return;

    for (int i = 0; i < row_count; i++)
    {
        double* row = arr[i];
        if (row)
        {
            for (int j = 0; j < col_count; j++)
            {
                cout << row[j] << ",\t";
            }
            cout << endl;
        }
    }
}

void freeArray(double** arr, unsigned int row_count)
{
    if (arr)
    {
        for (int i = 0; i < row_count; i++)
        {
            double* row = arr[i];
            if (row)
            {
                delete[] row;
                // Если массив будет использоваться дальше, то освобожденный указаель надо обнулить
                //arr[i] = nullptr;
            }
        }
        delete arr;
    }
}



int main()
{
    std::cout << "Hello World!\n";
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
