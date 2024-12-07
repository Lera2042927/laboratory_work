﻿// Лабораторная 5  задание 1 га с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iomanip>
#include <iostream>
using namespace std;
#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №5 задание №1" << endl;
    cout << "Заданы массивы: вещественных чисел Х(N), натуральных чиселY(N)." << endl;
    cout << "В массиве X каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива Y. " << endl;

    int n; // Размер массивов
    do {
        cout << "Введите n \n";
        cin >> n;
        if (n > MAX_N)
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N);
   
    
    int* Y = new int[n];
    int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;
    // Заполняем массив случайными элементами
    srand(time(0));
    int total_count = 0; // максимальный количество элементов массива X
    for  (int i = 0; i < n; i++)
    {
        int y = MIN_Y_LIMIT+ rand() % delta; //диапазон
        Y[i] = y;
        total_count += y;
    }
    delta = MAX_LIMIT - MIN_LIMIT + 1;
    double* X = new double[total_count];
    int offset = 0; //смещение текущего вещественного числа в массеве Х (от начала массива)
    for  (int i = 0; i < n; i++)
    {
        double x = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); //диапазон

        for (int j = 0; j < Y[i]; j++) // дублируем столько раз, сколько указанно в Y[i]
        {
            X[offset] = x;
            offset++;
        }
        
    }
    cout << endl;

    // Вывод массивов X и Y
    cout << "Массив X: ";
    for (int i = 0; i < total_count; ++i) {
       cout << X[i] << " ";
    }
    cout << endl;

    cout << "Массив Y: ";
    for (int i = 0; i < n; ++i) {
        cout << Y[i] << " ";
    }
    cout << endl;

    // Освобождаем память
    delete[] X;
    delete[] Y;

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
