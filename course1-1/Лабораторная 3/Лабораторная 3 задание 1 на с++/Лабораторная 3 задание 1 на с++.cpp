// Лабораторная 3 задание 1 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<cmath>
#include<iomanip>
#include <iostream>
#include<cmath>
using namespace std;
#define MAX_ARRAY 1000


int main()
{
    unsigned int n;
    int min_limit;
    int max_limit;
    int sum_pol;
    int sum_otr;
    int arr[MAX_ARRAY];

    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №3 задание №1.\n";
    cout << "В одномерном массиве найти сумму положительных составных элементов массива расположенных после max элемента\n";
    cout << "и сумму отрицательных простых элементов массива, расположенных до max числа.\n\n";

    do {
        cout << "Введите размерность одномерного массива  \n";
        cin >> n;
        // проверка размерности
        if ((n < 2) && (n > MAX_ARRAY))
            cout << "Размерность массива не может быть больше " << MAX_ARRAY << " и меньше 2.\n\n";
    } while (n > MAX_ARRAY);

    do {
        cout << "Введите нижний предел одномерного массива: \n";
        cin >> min_limit;
        cout << "Введите верхний предел одномерного массива: \n";
        cin >> max_limit;
        if (min_limit >= max_limit)
            cout << "Минимальный лимит не может быть больше максимального лимита\n\n";
    } while (min_limit >= max_limit);
    int delta = max_limit - min_limit + 1;
    // Инициализация генератора случайных чисел
    srand(time(nullptr));

    int i_max = 0; // для индекса максимального элемента
    int max_value = 0; // Тут будет хранится максимальное значение
    for (unsigned int i = 0; i < n; i++)
    {
      // Генерация текущего значения
      int value = min_limit + rand() % delta;
      cout << value << " ";
      arr[i] = value;
      if (i == 0)
      { // Если это первый элемент, то он автоматически максимальный
        max_value = value;
      }
      else
      {// Сюда попадаем если не первый элемент в цикле, сравниваем
        if (value > max_value)
        {// Нашли новый максимальный элемент
          i_max = i;
          max_value = value;
        }
      }
    }
    cout << "\nИндекс максимального элемента: " << i_max;
    cout << "\nМаксимальное значение элемента: " << max_value;

    int positive_sum = 0; // для суммы положительных элементов массива
    for (int i = i_max+1; i < n; i++)
    {
        int x = arr[i];
        if (x > 0) positive_sum += x;
    }
    cout << "\nСумма положительных элементов массива, расположенных после максимального элемента равна: " << positive_sum << ".\n";

    int negative_sum = 0; // для суммы отрицательных элементов массива
    for (int i = 0; i < i_max; i++)
    {
        int x = arr[i];
        if (x < 0) negative_sum += x;
    }
    cout << "Сумма отрицательных элементов массива, расположенных до максимального элемента равна: " << negative_sum << ".\n";
}
