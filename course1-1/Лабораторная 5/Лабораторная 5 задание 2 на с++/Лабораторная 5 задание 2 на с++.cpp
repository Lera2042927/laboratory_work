// Лабораторная 5 задание 2 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<iomanip>
#include <iostream>
using namespace std;
#define M1_X_Row 1000
#define N1_X_Colum 1000
#define M2_Y_Row 1000
#define N2_Y_Colum 1000

int arr_X[M1_X_Row][N1_X_Colum];
int arr_Y[M2_Y_Row][N2_Y_Colum];



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
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №5 задание №2" << endl;
    cout << "Заданы массивы X(M1,N1) и Y(M2,N2) (M1>M2, N1>N2). " << endl;
    cout << "Создать два новых двумерных массива, полученных как «разность» массивов X и Y." << endl;

    unsigned int M1_row;
    unsigned int N1_colum;
    unsigned int M2_row;
    unsigned int N2_colum;

    int min_limit;
    int max_limit;
    
    do {
        cout << "Введите количество строк двумерного массива X \n";
        cin >> M1_row;
        if (M1_row > M1_X_Row)
            cout << "Количество строк не может быть больше " << M1_X_Row << endl << endl;
    } while (M1_row > M1_X_Row);

    do {
        cout << "Введите количество столбцов двумерного массива X \n ";
        cin >> N1_colum;
        if (N1_colum > N1_X_Colum)
            cout << "Количество столбцов не может быть больше " << N1_X_Colum << endl << endl;
    } while (N1_colum > N1_X_Colum);


    do {
        cout << "Введите количество строк двумерного массива Y \n";
        cin >> M2_row;
        if (M2_row > M2_Y_Row)
            cout << "Количество строк не может быть больше " << M2_Y_Row << endl << endl;
    } while (M2_row > M2_Y_Row);

    do {
        cout << "Введите количество столбцов двумерного массива Y \n ";
        cin >> N2_colum;
        if (N2_colum > N2_Y_Colum)
            cout << "Количество столбцов не может быть больше " << N2_Y_Colum << endl << endl;
    } while (N2_colum > N2_Y_Colum);

    // Выделение памяти для массивов X и Y
    double** X = new double* [M1_X_Row];
    double** Y = new double* [M2_Y_Row];
    for (int i = 0; i < M1_row; i++) {
        X[i] = new double[N1_X_Colum];
    }
    for (int i = 0; i < M2_row; i++) {
        Y[i] = new double[N2_Y_Colum];
    }

    do {
        cout << "Введите нижний предел двумерного массива \n";
        cin >> min_limit;
        cout << "Введите верхний предел двумерного массива \n";
        cin >> max_limit;
        if (min_limit >= max_limit)
            cout << "Минимальный лимит не может быть больше максимального лимита \n\n";
    } while (min_limit >= max_limit);

    int delta = max_limit - min_limit + 1;
    srand(time(NULL));
    for (unsigned int i = 0; i < M1_row; i++)
    {
        for (unsigned int j = 0; j < N1_colum; j++)
        {
            arr_X[i][j] = min_limit + rand() % delta; //диапазон
            cout << arr_X[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (unsigned int i = 0; i < M2_row; i++)
    {
        for (unsigned int j = 0; j < N2_colum; j++)
        {
            arr_Y[i][j] = min_limit + rand() % delta; //диапазон
            cout << arr_Y[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    // Выделение памяти для результирующих массивов
    double** result1 = new double* [M2_Y_Row];
    double** result2 = new double* [M1_X_Row];
    for (int i = 0; i < M2_row; i++) {
        result1[i] = new double[N2_Y_Colum];
    }
    for (int i = 0; i < M1_row; i++) {
        result2[i] = new double[N1_X_Colum];
    }
 
    // Создание разности массивов
    createDifference(X, Y, result1, result2, M1_row, N1_colum, M2_row, N2_colum);

    // Вывод результирующего массива 1
    cout << "Результирующий массив 1 (разность X и Y):" << endl;
    for (int i = 0; i < M2_row; i++) 
    {
        for (int j = 0; j < N2_colum; j++) 
        {
            cout << result1[i][j] << " ";
        }
        cout << endl;
    }

    // Вывод результирующего массива 2
    cout << "Результирующий массив 2 (разность X и Y):" << endl;
    for (int i = 0; i < M1_row; i++) 
    {
        for (int j = 0; j < N1_colum; j++) 
        {
            cout << result2[i][j] << " ";
        }
        cout << endl;
    }

    // Освобождение памяти
    for (unsigned int i = 0; i < M1_row; i++) 
    {
        delete[] X[i];
    }
    delete[] X;

    for (unsigned int i = 0; i < M2_row; i++) 
    {
        delete[] Y[i];
    }
    delete[] Y;

    for (unsigned int i = 0; i < M2_row; i++) 
    {
        delete[] result1[i];
    }
    delete[] result1;

    for (unsigned int i = 0; i < M1_row; i++) 
    {
        delete[] result2[i];
    }
    delete[] result2;

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
