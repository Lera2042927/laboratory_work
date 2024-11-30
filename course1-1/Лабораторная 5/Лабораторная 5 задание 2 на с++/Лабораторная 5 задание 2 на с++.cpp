// Лабораторная 5 задание 2 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iomanip>
#include <iostream>
using namespace std;
#define ARRAY_X_ROW_MAX 100
#define ARRAY_X_COL_MAX 100

/*
void createDifference(double** X, double** Y, double** result1, double** result2, int M1_row, int N1_colum, int M2_row, int N2_colum) 
{
    // Заполнение первого результирующего массива
    for (int i = 0; i < M2_Y_Row; ++i) {
        for (int j = 0; j < N2_Y_Colum; ++j) {
            result1[i][j] = X[i][j] - Y[i][j]; // Разность для элементов, где размеры совпадают
        }
    }

    // Заполнение второго результирующего массива
    for (int i = 0; i < M1_X_Row; ++i) {
        for (int j = 0; j < N1_X_Colum; ++j) {
            if (i < M2_Y_Row && j < N2_Y_Colum) {
                result2[i][j] = X[i][j] - Y[i][j]; // Разность для элементов, где размеры совпадают
            }
            else {
                result2[i][j] = X[i][j]; // Если индексы выходят за пределы Y, то копируем X
            }
        }
    }
}*/

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
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №5 задание №2" << endl;
    cout << "Заданы массивы X(M1,N1) и Y(M2,N2) (M1>M2, N1>N2). " << endl;
    cout << "Создать два новых двумерных массива, полученных как «разность» массивов X и Y." << endl;

    unsigned int x_row_count;
    unsigned int x_col_count;
    unsigned int y_row_count;
    unsigned int y_col_count;

    int min_limit;
    int max_limit;
    
    do {
        cout << "Введите количество строк двумерного массива X:\n";
        cin >> x_row_count;
        if (x_row_count > ARRAY_X_ROW_MAX)
            cout << "Количество строк не может быть больше " << ARRAY_X_ROW_MAX << endl << endl;
    } while (x_row_count > ARRAY_X_ROW_MAX);

    do {
        cout << "Введите количество столбцов двумерного массива X:\n";
        cin >> x_col_count;
        if (x_col_count > ARRAY_X_COL_MAX)
            cout << "Количество столбцов не может быть больше " << ARRAY_X_COL_MAX << endl << endl;
    } while (x_col_count > ARRAY_X_COL_MAX);

    // Массив Y должен быть размерностью меньше чем массив X
    do {
        cout << "Введите количество строк двумерного массива Y:\n";
        cin >> y_row_count;
        if (y_row_count >= x_row_count)
            cout << "Количество строк массива Y должно быть меньше " << x_row_count << endl << endl;
    } while (y_row_count >= x_row_count);

    do {
        cout << "Введите количество столбцов двумерного массива Y:\n";
        cin >> y_col_count;
        if (y_col_count >= x_col_count)
            cout << "Количество столбцов массива Y должно быть меньше " << x_col_count << endl << endl;
    } while (y_col_count >= x_col_count);

    do {
        cout << "Введите нижний предел двумерного массива:\n";
        cin >> min_limit;
        cout << "Введите верхний предел двумерного массива:\n";
        cin >> max_limit;
        if (min_limit >= max_limit)
            cout << "Минимальный лимит должен быть меньше максимального лимита\n\n";
    } while (min_limit >= max_limit);

    // Выделение памяти для массива X
    double** X = new double*[x_row_count];
    for (int i = 0; i < x_row_count; i++)
    {
        X[i] = new double[x_col_count];
    }

    // Выделение памяти для массива Y
    double** Y = new double*[y_row_count];
    for (int i = 0; i < y_row_count; i++) {
        Y[i] = new double[y_col_count];
    }

    srand(time(NULL));

    //Заполение массивов X Y
    fillArray(X, x_row_count, x_col_count, min_limit, max_limit);
    cout << "Массив X:\n";
    printArry(X, x_row_count, x_col_count);

    fillArray(Y, y_row_count, y_col_count, min_limit, max_limit);
    cout << "\nМассив Y:\n";
    printArry(Y, y_row_count, y_col_count);
    cout << endl;

    // Расчет двух результирующих массивов.
    // 
    // Вариант1.
    // +--------------+
    // | X - Y |  2   |
    // |--------------|
    // |              |
    // |      1       |
    // |              |
    // |--------------|
    // 
    // Вариант2.
    // +--------------+
    // | X - Y |  1   |
    // |-------+      |
    // |   2   |      |
    // |--------------|
    // 
    
    // Вариант 2
    // Расчет размерности массивов
    // 2
    unsigned int col_copy_from = y_col_count;

    // Результирующий массив 1 (result1)
    unsigned int r1_row_count = x_row_count;
    unsigned int r1_col_count = x_col_count - y_col_count;
    double** result1 = new double* [r1_row_count];

    for (unsigned int i = 0; i < r1_row_count; i++)
    {
        double* from = &X[i][col_copy_from];
        double* to = new double [r1_col_count];
        //memcpy(to, from, sizeof(double) * r1_col_count);
        for (unsigned int j = 0; j < r1_col_count; j++)
        {
            to[j] = from[j];
        }
        result1[i] = to;
    }

    // Результирующий массив 2 (result2)
    unsigned int row_copy_from = y_row_count;
    unsigned int r2_row_count = x_row_count - y_row_count;
    unsigned int r2_col_count = y_col_count;
    double** result2 = new double* [r2_row_count];

    for (unsigned int i = 0; i < r2_row_count; i++)
    {
        double* from = X[row_copy_from + i];
        double* to = new double[r2_col_count];
        //memcpy(to, from, sizeof(double) * r2_col_count);
        for (unsigned int j = 0; j < r2_col_count; j++)
        {
            to[j] = from[j];
        }
        result2[i] = to;
    }

    // Вывод результирующего массива 1
    cout << "\nРезультирующий массив 1 (разность X и Y):\n";
    printArry(result1, r1_row_count, r1_col_count);
    // Вывод результирующего массива 2
    cout << "\nРезультирующий массив 2 (разность X и Y):\n";
    printArry(result2, r2_row_count, r2_col_count);

    // Освобождение памяти
    freeArray(result1, r1_row_count);
    freeArray(result2, r2_row_count);
    freeArray(X, x_row_count);
    freeArray(Y, y_row_count);

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
