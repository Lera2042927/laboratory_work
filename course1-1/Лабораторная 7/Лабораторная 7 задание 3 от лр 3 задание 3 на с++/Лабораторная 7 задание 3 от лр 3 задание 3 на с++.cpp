// Лабораторная 7 задание 3 от лр 3 задание 3 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

#define MAX_N 10
#define MIN_LIMIT 10
#define MAX_LIMIT 80

double numbers[MAX_N * MAX_N]; // Массив для чисел
double matrix[MAX_N][MAX_N]; // Квадратная матрица

// Функция для заполнения массива случайными числами
void fillArray(double arr[], int n) {
    unsigned int numbers_count = n * n;
    srand(time(0)); // Инициализация генератора случайных чисел
    for (unsigned int i = 0; i < numbers_count; i++) {
        arr[i] = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); // Диапазон чисел
    }
}

// Функция для сортировки массива по убыванию (вставками)
void sortArrayDescending(double arr[], int n) {
    unsigned int numbers_count = n * n;
    for (unsigned int i = 1; i < numbers_count; i++) {
        double key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Функция для заполнения матрицы по схеме
void fillMatrix(double arr[], double mat[][MAX_N], int n) {
    unsigned int numbers_count = n * n;
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
}

// Функция для вывода массива
void printArray(double arr[], int n) {
    unsigned int numbers_count = n * n;
    for (unsigned int i = 0; i < numbers_count; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Функция для вывода матрицы
void printMatrix(double mat[][MAX_N], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
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
    fillArray(numbers, n);

    // Вывод исходных чисел
    cout << "Исходные числа: ";
    printArray(numbers, n);

    // Сортировка чисел по убыванию
    sortArrayDescending(numbers, n);

    // Вывод отсортированных чисел
    cout << "Отсортированные числа по убыванию: ";
    printArray(numbers, n);

    // Заполнение матрицы
    fillMatrix(numbers, matrix, n);

    // Вывод матрицы
    cout << "Матрица:" << endl;
    printMatrix(matrix, n);

    return 0;
}*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

#define MAX_N 10
#define MIN_LIMIT 10
#define MAX_LIMIT 80

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

int main() {
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
