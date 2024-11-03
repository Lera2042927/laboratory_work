// Лабораторная 3 задание 3 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<cmath>
#include<iomanip>
#include <iostream>
#include<cmath>
using namespace std;
#define MAX_N 10
#define MIN_LIMIT -10
#define MAX_LIMIT 10


double numbers[MAX_N*MAX_N];
double matrix[MAX_N][MAX_N];

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №3 задание №3" << endl;
    cout << "Даны действительные числа a1,...an^2.Получить действительную квадратную матрицу, элементами которой являются числа" << endl;
    cout << "а1,...an^2, отсортированные по убыванию и расположенные в ней по схеме" << endl;

    unsigned int n;
    unsigned int numbers_count; //число элементов в последовательности
    do {
        cout << "Введите n \n";
        cin >> n;
        if (n > MAX_N )
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N );
    numbers_count = n * n;

   // Заполняем массив случайными элементами
    srand(time(0));
        
    for (unsigned int i = 0; i < numbers_count; i++)
    {
        numbers[i] = MIN_LIMIT + ((double)rand())/ RAND_MAX * (MAX_LIMIT - MIN_LIMIT); //диапазон
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Сортировка чисел по убыванию (вставками)
    for (unsigned int i = 1; i < numbers_count; i++) {
        double key = numbers[i];
        int j = i - 1;
        while (j >= 0 && numbers[j] < key) {
            numbers[j + 1] = numbers[j];
            j--;
        }
        numbers[j + 1] = key;
    }
    for (unsigned int i = 0; i < numbers_count; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;


   
   

    // Заполнение матрицы числами по схеме
// step +1 или -1 для смены направления движения
    unsigned int min_row = 0;
    unsigned int min_col = 0;
    int step = 1;
    int row = 0;
    int col = 0;
    for (unsigned int i = 0; i < numbers_count; i++)
    {
        //циклы по матрице
        if (row == min_row && step == 1) 
        { // Поднялись вверх слева направо
            matrix[row][col] = numbers[i];
            if (col < (n - 1))
                col += step;
            else
            {
                min_row++;
                row++;
            }
            step = -step;
        }
        else if (col == min_col && step == -1)
        { // Опустились вниз справа налево
            matrix[row][col] = numbers[i];
            if (row < (n - 1))
                row -= step;
            else
            {
                min_col++;
                col++;
            }
            step = -step;
        }
        else
        { //идём по диагонали
            matrix[row][col] = numbers[i];
            if (col == n-1)
            {
                min_row++;
                row++;
                continue;
            }
            col += step;
            if (row == n - 1)
            {
                min_col++;
                col++;
            }
            row -= step;
        }
    }

    // Вывод матрицы
    cout << "Матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
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
