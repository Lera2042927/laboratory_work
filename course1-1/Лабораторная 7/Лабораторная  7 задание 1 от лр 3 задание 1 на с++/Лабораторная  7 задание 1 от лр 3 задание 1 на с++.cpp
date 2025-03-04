// Лабораторная  7 задание 1 от лр 3 задание 1 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <cmath>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

#define MAX_ARRAY 1000


// Функция для генерации массива
void generateArray(int arr[], unsigned int n, int min_limit, int max_limit) {
    int delta = max_limit - min_limit + 1;
    srand(time(0));
    for (unsigned int i = 0; i < n; i++) {
        arr[i] = min_limit + rand() % delta; // диапазон
        cout<< arr[i] << " ";
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

int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Лабораторная работа №7 задание №1" << endl;
    cout <<"В одномерном массиве найти сумму положительных составных элементов массива расположенных после max элемента" << endl;
    cout <<"и сумму отрицательных простых элементов массива, расположенных до max числа" << endl;

    unsigned int n;
    int min_limit, max_limit;

    do {
        cout << "Введите размерность одномерного массива \n";
        cin >> n;
        if (n > MAX_ARRAY)
            cout << "Размерность не может быть больше " << MAX_ARRAY << endl<< endl;
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
    cout << "Сумма отрицательных простых элементов массива, расположенных до максимального элемента: " << otr_sum << "." <<endl;

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
