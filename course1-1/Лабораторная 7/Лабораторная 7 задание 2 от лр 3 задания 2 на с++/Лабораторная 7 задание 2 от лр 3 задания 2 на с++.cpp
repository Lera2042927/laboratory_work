// Лабораторная 7 задание 2 от лр 3 задания 2 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAX_K_row 1000
#define MAX_L_column 1000

// Функция для генерации двумерного массива
/*void generateMatrix(int** arr_A, unsigned int k_row, unsigned int l_col, int min_limit, int max_limit) {
    int delta = max_limit - min_limit + 1;
    srand(time(NULL));
    for (unsigned int i = 0; i < k_row; i++) {
        for (unsigned int j = 0; j < l_col; j++) {
            arr_A[i][j] = min_limit + rand() % delta; // диапазон
            cout << arr_A[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция для подсчёта положительных и отрицательных элементов в каждой строке
void countPositiveNegative(int** arr_A, unsigned int k_row, unsigned int l_col, int* B, int* C) {
    for (unsigned int i = 0; i < k_row; i++) {
        for (unsigned int j = 0; j < l_col; j++) {
            if (arr_A[i][j] > 0) {
                B[i]++;
            }
            else if (arr_A[i][j] < 0) {
                C[i]++;
            }
        }
    }
}*/// Функция для генерации двумерного массива
int** generateMatrix(unsigned int k_row, unsigned int l_col, int min_limit, int max_limit) {
    int delta = max_limit - min_limit + 1;
    int** arr_A = new int* [k_row]; // Массив указателей на строки
    for (unsigned int i = 0; i < k_row; i++) {
        arr_A[i] = new int[l_col]; // Выделение памяти для каждой строки
        for (unsigned int j = 0; j < l_col; j++) {
            arr_A[i][j] = min_limit + rand() % delta; // Генерация случайного числа в заданном диапазоне
            cout << arr_A[i][j] << " ";
        }
        cout << endl;
    }
    return arr_A;
}

// Функция для подсчёта положительных и отрицательных элементов в каждой строке
int* countPositive(int** arr_A, unsigned int k_row, unsigned int l_col) {
    int* B = new int[k_row](); // Массив для положительных элементов в каждой строке
    for (unsigned int i = 0; i < k_row; i++) {
        for (unsigned int j = 0; j < l_col; j++) {
            if (arr_A[i][j] > 0) {
                B[i]++;
            }
        }
    }
    return B;
}

int* countNegative(int** arr_A, unsigned int k_row, unsigned int l_col) {
    int* C = new int[k_row](); // Массив для отрицательных элементов в каждой строке
    for (unsigned int i = 0; i < k_row; i++) {
        for (unsigned int j = 0; j < l_col; j++) {
            if (arr_A[i][j] < 0) {
                C[i]++;
            }
        }
    }
    return C;
}

// Функция для вывода массива
void printArray(int* arr, unsigned int size, const string& name) {
    cout << name<< endl;
    for (unsigned int i = 0; i < size; ++i) {
        cout << "Строка " << i + 1 << ": " << arr[i] << endl;
    }
}

// Функция для вывода двумерного массива
void printMatrix(int** arr_A, unsigned int k_row, unsigned int l_col) {
    cout << "Матрица A(k,l):\n";
    for (unsigned int i = 0; i < k_row; i++) {
        for (unsigned int j = 0; j < l_col; j++) {
            cout << arr_A[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    unsigned int k_row;
    unsigned int l_col;
    int min_limit;
    int max_limit;

    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №7 задание №2" << endl;
    cout << "Из двумерного массива A(k,l) сформировать вектор В(k)" << endl;
    cout << "каждый элемент которого равен количеству положительных элементов соответствующей строки матрицы А" << endl;
    cout << "и вектор C(k), каждый элемент которого равен количеству отрицательных элементов соответствующей строки матрицы А" << endl;

    do {
        cout << "Введите количество строк двумерного массива \n";
        cin >> k_row;
        if (k_row > MAX_K_row)
            cout << "Количество строк не может быть больше " << MAX_K_row << endl << endl;
    } while (k_row > MAX_K_row);

    do {
        cout << "Введите количество столбцов двумерного массива \n";
        cin >> l_col;
        if (l_col > MAX_L_column)
            cout << "Количество столбцов не может быть больше " << MAX_L_column << endl << endl;
    } while (l_col > MAX_L_column);

    do {
        cout << "Введите нижний предел двумерного массива \n";
        cin >> min_limit;
        cout << "Введите верхний предел двумерного массива \n";
        cin >> max_limit;
        if (min_limit >= max_limit)
            cout << "Минимальный лимит не может быть больше максимального лимита \n\n";
    } while (min_limit >= max_limit);

    // Инициализация динамического двумерного массива A и массивов B и C
   /* int** arr_A = new int* [k_row]; // Массив указателей на строки
    for (unsigned int i = 0; i < k_row; i++) {
        arr_A[i] = new int[l_col]; // Выделение памяти для каждой строки
    }

    int* B = new int[k_row](); // Массив для положительных элементов в каждой строке
    int* C = new int[k_row](); // Массив для отрицательных элементов в каждой строке

    // Генерация и вывод матрицы
    generateMatrix(arr_A, k_row, l_col, min_limit, max_limit);

    // Подсчёт положительных и отрицательных элементов
    countPositiveNegative(arr_A, k_row, l_col, B, C);

    // Вывод результатов
    printArray(B, k_row, "Количество положительных элементов в каждой строке:");
    printArray(C, k_row, "Количество отрицательных элементов в каждой строке:");

    // Освобождение памяти
    for (unsigned int i = 0; i < k_row; i++)
    {
        delete[] arr_A[i]; // Освобождение каждой строки
    }
    delete[] arr_A; // Освобождение массива указателей
    delete[] B; // Освобождение массива B
    delete[] C; // Освобождение массива C*/

    // Генерация и вывод матрицы
    srand(time(NULL)); // Инициализация генератора случайных чисел
    int** arr_A = generateMatrix(k_row, l_col, min_limit, max_limit);
    printMatrix(arr_A, k_row, l_col);

    // Подсчёт положительных и отрицательных элементов
    int* B = countPositive(arr_A, k_row, l_col);
    int* C = countNegative(arr_A, k_row, l_col);

    // Вывод результатов
    printArray(B, k_row, "Количество положительных элементов в каждой строке:");
    printArray(C, k_row, "Количество отрицательных элементов в каждой строке:");

    // Освобождение памяти
    for (unsigned int i = 0; i < k_row; i++) {
        delete[] arr_A[i]; // Освобождение каждой строки
    }
    delete[] arr_A; // Освобождение массива указателей
    delete[] B; // Освобождение массива B
    delete[] C; // Освобождение массива C


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
