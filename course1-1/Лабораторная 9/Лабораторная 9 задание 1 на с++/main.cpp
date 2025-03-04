#include <iostream>
#include <cstdlib>
#include <ctime>

// Прототипы функций
/*void task1();
void task2();
void task3();*/

using namespace std;
void generateArray(int arr[], unsigned int n, int min_limit, int max_limit);
int findMaxIndex(const int arr[], unsigned int n);
bool isComposite(int x);
bool isPrime(int x);
int sumAfterMax(const int arr[], unsigned int n, int i_max);
int sumBeforeMax(const int arr[], unsigned int i_max);
int** generateMatrix(unsigned int k_row, unsigned int l_col, int min_limit, int max_limit);
int* countPositive(int** arr_A, unsigned int k_row, unsigned int l_col);
int* countNegative(int** arr_A, unsigned int k_row, unsigned int l_col);
void printArray(int* arr, unsigned int size, const string& name);
void printMatrix(int** arr_A, unsigned int k_row, unsigned int l_col);
double* fillArray(int n);
double* sortArrayDescending(double arr[], int n);
double** fillMatrix(double arr[], int n);
double* printArray(double arr[], int n);
double** printMatrix(double** mat, int n);


#define MAX_ARRAY 1000
#define MAX_K_row 1000
#define MAX_L_column 1000
#define MAX_N 10
#define MIN_LIMIT 10
#define MAX_LIMIT 80

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;

    do {
        cout << "Выберите задание:\n";
        cout << "1. Задание 1\n";
        cout << "2. Задание 2\n";
        cout << "3. Задание 3\n";
        cout << "0. Выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1:
            //task1();
        {
            /*setlocale(LC_ALL, "Russian");
            cout << "Лабораторная работа №7 задание №1" << endl;
            cout << "В одномерном массиве найти сумму положительных составных элементов массива расположенных после max элемента" << endl;
            cout << "и сумму отрицательных простых элементов массива, расположенных до max числа" << endl;*/

            unsigned int n;
            int min_limit, max_limit;

            do {
                cout << "Введите размерность одномерного массива \n";
                cin >> n;
                if (n > MAX_ARRAY)
                    cout << "Размерность не может быть больше " << MAX_ARRAY << endl << endl;
            } while (n > MAX_ARRAY);

            do {
                cout << "Введите нижний предел одномерного массива \n";
                cin >> min_limit;
                cout << "Введите верхний предел одномерного массива \n";
                cin >> max_limit;
                if (min_limit >= max_limit)
                    cout << "Минимальный лимит не может быть больше максимального лимита \n\n";
            } while (min_limit >= max_limit);

            int arr[MAX_ARRAY];

            // Генерация массива
            generateArray(arr, n, min_limit, max_limit);

            // Нахождение индекса максимального элемента
            int i_max = findMaxIndex(arr, n);
            cout << "Индекс максимального элемента: " << i_max << endl;
            cout << "Максимальный элемент: " << arr[i_max] << endl;

            // Сумма положительных составных элементов после максимального элемента
            int pol_sum = sumAfterMax(arr, n, i_max);
            cout << "Сумма положительных составных элементов массива, расположенных после максимального элемента: " << pol_sum << "." << endl;

            // Сумма отрицательных простых элементов до максимального элемента
            int otr_sum = sumBeforeMax(arr, i_max);
            cout << "Сумма отрицательных простых элементов массива, расположенных до максимального элемента: " << otr_sum << "." << endl;

           // return 0;
            break;
        }
        case 2: 
        {
            //task2();
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


            //return 0;
            break;
        }
        case 3:
            //task3();
        {
            setlocale(LC_ALL, "Russian");
            cout << "Лабораторная работа №3 задание №3" << endl;
            cout << "Даны действительные числа a1,...an^2. Получить действительную квадратную матрицу, элементами которой являются числа" << endl;
            cout << "a1,...an^2, отсортированные по убыванию и расположенные в ней по схеме" << endl;

            int n;
            do {
                cout << "Введите n \n";
                cin >> n;
                if (n > MAX_N)
                    cout << "n не может быть больше " << MAX_N << endl << endl;
            } while (n > MAX_N);

            // Заполнение массива случайными числами
            double* numbers = fillArray(n);

            // Вывод исходных чисел
            cout << "Исходные числа: ";
            printArray(numbers, n);

            // Сортировка чисел по убыванию
            double* sortedNumbers = sortArrayDescending(numbers, n);

            // Вывод отсортированных чисел
            cout << "Отсортированные числа по убыванию: ";
            printArray(sortedNumbers, n);

            // Заполнение матрицы
            double** matrix = fillMatrix(sortedNumbers, n);

            // Вывод матрицы
            cout << "Матрица:" << endl;
            printMatrix(matrix, n);

            // Освобождение памяти
            delete[] numbers; // Освобождение массива чисел
            delete[] sortedNumbers; // Освобождение отсортированного массива
            for (int i = 0; i < n; i++) {
                delete[] matrix[i]; // Освобождение каждой строки матрицы
            }
            delete[] matrix; // Освобождение массива указателей на строки

            //return 0;

            break;
        }
        case 0:
            cout << "Выход из программы.\n";
            break;
        default:
            cout << "Неверный выбор. Пожалуйста, попробуйте снова.\n";
        }
    } while (choice != 0);

    return 0;
}