// Лабораторная 6 задание 6 от лр 5 задание 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

#define MAX_ARRAY 1000


// Функция для удаления элементов, кратных заданному числу
/*void removeMultiples(vector<int>& arr, int multiple) {
	int offset = 0; // Счётчик для некратных элементов
// Копируем элементы, которые не кратны заданному числу
for (size_t i = 0; i < arr.size(); i++) 
{
	int value = arr.at(i);
	if (value % multiple != 0) {
		arr.at(offset) = value;
		offset++;
	}
}

// Обрезаем размер вектора
arr.resize(offset);
}*/ 

// Функция для удаления элементов, кратных заданному числу
void removeMultiples(vector<int>& arr, int multiple) 
{
    for (auto it = arr.begin(); it != arr.end();) 
    {
        if (*it % multiple == 0) 
        {
            it = arr.erase(it); // Удаляем элемент и сразу получаем новый итератор
        }
        else {
            it++; // Переходим к следующему элементу
        }
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №6 задание №6" << endl;
    cout << "Задан массив Х(N). Сначала удалить из него все элементы, кратные 3, затем 4, затем 5." << endl;

    int n;
    int min_limit;
    int max_limit;

    do {
        cout << "Введите размерность вектора  \n";
        cin >> n;
        if (n > MAX_ARRAY)
            cout << "Размерность не может быть больше " << MAX_ARRAY << endl << endl;
    } while (n > MAX_ARRAY);

    do {
        cout << "Введите нижний предел вектора \n";
        cin >> min_limit;
        cout << "Введите верхний предел вектора \n";
        cin >> max_limit;
        if (min_limit >= max_limit)
            cout << "Минимальный лимит не может быть больше максимального лимита \n\n";
    } while (min_limit >= max_limit);
    int delta = max_limit - min_limit + 1;

    // Создаём вектор X с размерностью n
    vector<int> X(n);
    
    for (unsigned int i = 0; i < n; i++)
    {
        X.at(i) = min_limit + rand() % delta; //диапазон
        cout << X.at(i) << " ";
    }
    cout << endl;

    // Вывод исходного массива
    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++)
    {
        cout << X.at(i) << " ";
    }
    cout << endl;

    removeMultiples(X, 3);
    cout<<"Массив после удаления элементов, кратных 3: ";
    for (size_t i = 0; i < X.size(); i++) {
        cout << X.at(i) << " ";
    }
    cout << endl;

    // Удаление элементов, кратных 4
    removeMultiples(X, 4);
    cout << "Массив после удаления элементов, кратных 4: ";
    for (size_t i = 0; i < X.size(); i++) {
        cout << X.at(i) << " ";
    }
    cout << endl;

    // Удаление элементов, кратных 5
    removeMultiples(X, 5);
    cout << "Массив после удаления элементов, кратных 5: ";
    for (size_t i = 0; i < X.size(); i++) {
        cout << X.at(i) << " ";
    }
    cout << endl;

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
