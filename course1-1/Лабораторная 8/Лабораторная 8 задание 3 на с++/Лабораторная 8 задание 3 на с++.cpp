// Лабораторная 8 задание 3 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <iomanip>
#include <cstdlib> // для rand и srand
#include <ctime>   // для time
using namespace std;

#define MAX_ARRAY 1000

// Заполнение массива случайными числами
/*int* fillArray(int size, int min_limit, int max_limit) {
    int* arr = new int[size];
    for (int index = 0; index < size; index++) {
        arr[index] = min_limit + rand() % (max_limit - min_limit + 1);
    }
    return arr;     
}*/
// Заполнение массива случайными числами рекурсивно
void fillArray(int* arr, int size, int min_limit, int max_limit, int index = 0) {
    if (index < size) {
        arr[index] = min_limit + rand() % (max_limit - min_limit + 1);
        fillArray(arr, size, min_limit, max_limit, index + 1);
    }
}

// Удаление кратных значений рекурсивно
int removeMultiples(int*& arr, int size, int multiple, int index = 0, int offset = 0) {
    if (index < size) {
        if ((arr[index] % multiple) != 0) {
            arr[offset] = arr[index];
            offset++;
        }
        return removeMultiples(arr, size, multiple, index + 1, offset);
    }
    else {
        return offset; // Возвращаем новый размер массива
    }
}

// Вывод массива
void printArray(const int* arr, int size, int index = 0) {
    if (index < size) {
        cout << arr[index] << " ";
        printArray(arr, size, index + 1);
    }
}

// Получение пользовательского ввода
void getUserInput(int& n, int& min_limit, int& max_limit) {
    do {
        cout << "Введите размерность одномерного массива (до " << MAX_ARRAY << "): ";
        cin >> n;
        if (n > MAX_ARRAY)
            cout << "Размерность не может быть больше " << MAX_ARRAY << endl;
    } while (n > MAX_ARRAY);

    do {
        cout << "Введите нижний предел одномерного массива: ";
        cin >> min_limit;
        cout << "Введите верхний предел одномерного массива: ";
        cin >> max_limit;
        if (min_limit >= max_limit)
            cout << "Минимальный лимит не может быть больше максимального лимита." << endl;
    } while (min_limit >= max_limit);
}

// Освобождение памяти
void deleteArray(int* arr) {
    delete[] arr;
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел

    cout << "Лабораторная работа №5 задание №3" << endl;
    cout << "Задан массив Х(N). Сначала удалить из него все элементы, кратные 3, затем 4, затем 5." << endl;

    int n, min_limit, max_limit;
    getUserInput(n, min_limit, max_limit);

    int* X = new int[n]; // Выделение памяти под массив
    fillArray(X, n, min_limit, max_limit); // Заполнение массива случайными числами

    cout << "Исходный массив: ";
    printArray(X, n);
    cout << endl;

    // Удаление элементов, кратных 3, 4 и 5
    n = removeMultiples(X, n, 3);
    cout << "Массив после удаления элементов, кратных 3: ";
    printArray(X, n);
    cout << endl;

    n = removeMultiples(X, n, 4);
    cout << "Массив после удаления элементов, кратных 4: ";
    printArray(X, n);
    cout << endl;

    n = removeMultiples(X, n, 5);
    cout << "Массив после удаления элементов, кратных 5: ";
    printArray(X, n);
    cout << endl;

    // Освобождение памяти
    deleteArray(X);

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
