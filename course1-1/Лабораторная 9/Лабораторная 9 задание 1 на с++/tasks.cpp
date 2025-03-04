#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

#define MAX_ARRAY 1000
#define MAX_K_row 1000
#define MAX_L_column 1000
#define MAX_N 10
#define MIN_LIMIT 10
#define MAX_LIMIT 80
int B[MAX_K_row]; // Для положительных
int C[MAX_K_row]; // Для отрицательных
int arr_A[MAX_K_row][MAX_L_column];

// Функция для генерации массива
    void generateArray(int arr[], unsigned int n, int min_limit, int max_limit) 
    {
    int delta = max_limit - min_limit + 1;
    srand(time(0));
    for (unsigned int i = 0; i < n; i++) {
        arr[i] = min_limit + rand() % delta; // диапазон
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Функция для нахождения индекса максимального элемента массива
int findMaxIndex(const int arr[], unsigned int n) {
    int i_max = 0; // индекс максимального элемента
    for (unsigned int i = 1; i < n; i++) {
        if (arr[i] > arr[i_max]) i_max = i;
    }
    return i_max;
}

// Функция для проверки, является ли число составным
bool isComposite(int x) {
    if (x <= 1) return false; // 1 и отрицательные числа не составные
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return true; // Составное число
    }
    return false; // Простое число
}

// Функция для проверки, является ли число простым
bool isPrime(int x) {
    if (x <= 1) return false; // 1 и отрицательные числа не простые
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false; // Число делится нацело
    }
    return true; // Простое число
}

// Функция для подсчёта суммы положительных составных элементов массива после максимального элемента
int sumAfterMax(const int arr[], unsigned int n, int i_max) {
    int sum = 0;
    for (unsigned int i = i_max + 1; i < n; i++)
    {

        int x = arr[i];
        if (x > 0) sum += x;
        /*if (arr[i] > 0 && isComposite(arr[i]))
        {
            sum += arr[i];
        }*/
    }
    return sum;
}

// Функция для подсчёта суммы отрицательных простых элементов массива до максимального элемента
int sumBeforeMax(const int arr[], unsigned int i_max)
{
    int sum = 0;
    for (unsigned int i = 0; i < i_max; i++)
    {
        int x = arr[i];
        if (x < 0) sum += x;
        /* if (arr[i] < 0 && isPrime(arr[i])) {
             sum += arr[i];
         }*/
    }
    return sum;
}

 
    unsigned int k_row, l_col;
    int min_limit, max_limit;
   // Функция для генерации двумерного массива
    int** generateMatrix(unsigned int k_row, unsigned int l_col, int min_limit, int max_limit) 
    {
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
    void printArray(int* arr, unsigned int size, const string & name) {
        cout << name << endl;
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


    
    double* fillArray(int n) {
        unsigned int numbers_count = n * n;
        double* arr = new double[numbers_count]; // Динамический массив для чисел
        srand(time(0)); // Инициализация генератора случайных чисел
        for (unsigned int i = 0; i < numbers_count; i++) {
            arr[i] = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); // Диапазон чисел
        }
        return arr; // Возвращаем указатель на заполненный массив
    }

    double* sortArrayDescending(double arr[], int n) {
        unsigned int numbers_count = n * n;
        double* sortedArr = new double[numbers_count]; // Динамический массив для отсортированных чисел
        for (unsigned int i = 0; i < numbers_count; i++) {
            sortedArr[i] = arr[i]; // Копируем элементы в новый массив
        }

        for (unsigned int i = 1; i < numbers_count; i++) {
            double key = sortedArr[i];
            int j = i - 1;
            while (j >= 0 && sortedArr[j] < key) {
                sortedArr[j + 1] = sortedArr[j];
                j--;
            }
            sortedArr[j + 1] = key;
        }
        return sortedArr; // Возвращаем указатель на отсортированный массив
    }

    double** fillMatrix(double arr[], int n) {
        unsigned int numbers_count = n * n;
        double** mat = new double* [n]; // Динамический массив указателей на строки
        for (int i = 0; i < n; i++) {
            mat[i] = new double[n]; // Выделяем память для каждой строки
        }

        unsigned int min_row = 0;
        unsigned int min_col = 0;
        int step = 1; // Шаг для смены направления
        int row = 0; // Начальная строка
        int col = 0; // Начальный столбец

        for (unsigned int i = 0; i < numbers_count; i++) {
            mat[row][col] = arr[i];
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
        return mat; // Возвращаем указатель на матрицу
    }

    double* printArray(double arr[], int n) {
        unsigned int numbers_count = n * n;
        for (unsigned int i = 0; i < numbers_count; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return arr; // Возвращаем указатель на массив (или просто можно вернуть nullptr)
    }

    double** printMatrix(double** mat, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
        return mat; // Возвращаем указатель на матрицу (или просто можно вернуть nullptr)
    }
