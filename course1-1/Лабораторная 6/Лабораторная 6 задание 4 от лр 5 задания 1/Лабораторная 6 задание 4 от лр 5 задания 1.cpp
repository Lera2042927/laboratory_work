// Лабораторная 6 задание 4 от лр 5 задания 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №6 задание №4" << endl;
    cout << "Заданы массивы: вещественных чисел Х(N), натуральных чиселY(N)." << endl;
    cout << "В массиве X каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива Y. " << endl;

    int n; // Размер массивов
    do {
        cout << "Введите n \n";
        cin >> n;
        if (n > MAX_N)
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N);


    // Вектор для массива Y
    vector<int> Y(n);
    int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;

    int total_count = 0; // максимальный количество элементов вектора X
    // Вектор для исходных вещественных чисел X
    vector<double> X(n);

    // Заполняем массив Y случайными элементами
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        int y = MIN_Y_LIMIT + rand() % delta; //диапазон
        Y.at(i) = y;
        total_count += y;
    }

    delta = MAX_LIMIT - MIN_LIMIT + 1;

    //Вектор для результирующего массива Х
    vector<double> expanded_X;
    expanded_X.resize(total_count); // Изменяем длину вектора Х (место для расширенного массива)

    // Заполняем  исходный массив X случайными вещественными числами в диапазоне [MIN_LIMIT, MAX_LIMIT]
    for (int i = 0; i < n; i++) 
    {
        X.at(i) = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); // диапазон для массива X
    }


    int offset = 0; //смещение текущего вещественного числа в массеве Х (от начала массива)
    // Заполняем массив expanded_X, повторяя элементы массива X по количеству в Y
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < Y.at(i); j++) 
        {
            expanded_X.at(offset) = X.at(i);
            offset++;
        }
    }

    // Вывод массивов X и Y
    cout << "Массив X (результирующий): ";
    for (int i = 0; i < total_count; i++) 
    {
        cout << expanded_X.at(i) << " ";
    }
    cout << endl;

    cout << "Массив Y: ";
    for (int i = 0; i < n; i++) 
    {
        cout << Y.at(i) << " ";
    }
    cout << endl;

    cout << "Исходный массив X: ";
    for (int i = 0; i < n; i++) 
    {
        cout << X.at(i) << " ";
    }
    cout << endl;

    return 0;*/

               /* int n; // Размер массивов
    do {
        cout << "Введите n \n";
        cin >> n;
        if (n > MAX_N)
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N);

    // Вектор для массива Y
    vector<int> Y(n);
    int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;

    int total_count = 0; // максимальное количество элементов в векторе X
    // Вектор для исходных вещественных чисел X
    vector<double> X(n);

    // Заполняем массив Y случайными элементами
    srand(time(0));
    for (int i = 0; i < n; i++) {
        int y = MIN_Y_LIMIT + rand() % delta; // диапазон
        Y.at(i) = y;
        total_count += y;
    }

    delta = MAX_LIMIT - MIN_LIMIT + 1;

    // Заполняем исходный массив X случайными вещественными числами в диапазоне [MIN_LIMIT, MAX_LIMIT]
    for (int i = 0; i < n; i++) {
        X.at(i) = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); // диапазон для массива X
    }

    // Массив для расширенных элементов (будем использовать insert)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < Y.at(i)-1; j++) {
            X.insert(X.begin() + i + 1, X.at(i)); // вставляем элемент X[i] повторно
        }
    }

    // Вывод массивов X и Y
    cout << "Массив X (результирующий): ";
    for (int i = 0; i < X.size(); i++) {
        cout << X.at(i) << " "; // выводим элементы с использованием at()
    }
    cout << endl;

    cout << "Массив Y: ";
    for (int i = 0; i < n; i++) {
        cout << Y.at(i) << " "; // выводим элементы Y
    }
    cout << endl;

    cout << "Исходный массив X: ";
    for (int i = 0; i < n; i++) {
        cout << X.at(i) << " "; // выводим элементы X
    }
    cout << endl;

    return 0;*/


/*int n; // Размер массивов
do {
    cout << "Введите n \n";
    cin>> n;
    if (n > MAX_N)
        cout << "n не может быть больше " << MAX_N << endl << endl;
} while (n > MAX_N);

// Вектор для массива Y
vector<int> Y(n);
int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;

// Вектор для исходных вещественных чисел X
vector<double> X(n);

// Заполняем массив Y случайными элементами
srand(time(0));
for (int i = 0; i < n; i++) {
    int y = MIN_Y_LIMIT + rand() % delta; // диапазон
    Y.at(i) = y;
}

// Заполняем массив X случайными вещественными числами в диапазоне [MIN_LIMIT, MAX_LIMIT]
delta = MAX_LIMIT - MIN_LIMIT + 1;
for (int i = 0; i < n; i++) {
    X.at(i) = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); // диапазон для массива X
}

// Для каждого элемента в X вставляем его повторно, столько раз, сколько указано в Y
for (int i = 0; i < n; i++) {
    // Нужно вставить X[i] Y[i] - 1 раз (первоначально элемент уже в X)
    for (int j = 0; j < Y.at(i) - 1; j++) {
        X.insert(X.begin() + (i + 1), X.at(i)); // Вставляем элемент X[i] после его первого появления
    }
}

// Вывод массивов X и Y
cout << "Массив X (результирующий): ";
for (int i = 0; i < X.size(); i++) {
    cout << X.at(i) << " "; // выводим элементы expanded_X
}
cout << endl;

cout << "Массив Y: ";
for (int i = 0; i < n; i++) {
    cout << Y.at(i) << " "; // выводим элементы Y
}
cout << endl;

cout << "Исходный массив X: ";
for (int i = 0; i < n; i++) {
    cout << X.at(i) << " "; // выводим элементы X
}
cout << endl;

return 0;*/



//}

/*#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №6 задание №4" << endl;
    cout << "Заданы массивы: вещественных чисел X(N), натуральных чисел Y(N)." << endl;
    cout << "В массиве X каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива Y." << endl;

    int n; // Размер массивов
    do {
        cout << "Введите n (не больше " << MAX_N << "): ";
        cin >> n;
        if (n > MAX_N)
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N);

    // Вектор для массива Y
    vector<int> Y(n);
    int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;

    // Вектор для исходных вещественных чисел X
    vector<double> X;

    // Заполняем массив Y случайными элементами
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        int y = MIN_Y_LIMIT + rand() % delta; // диапазон
        Y.at(i) = y;

        // Генерируем случайное вещественное число в диапазоне [MIN_LIMIT, MAX_LIMIT]
        double x = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT);

        // Повторяем элемент x столько раз, сколько указано в Y
        X.insert(X.end(), y, x); // Используем insert для добавления y элементов значения x в конец вектора х
    }

    // Вывод массивов X и Y
    cout << "Массив X (результирующий): ";
    for (const auto& value : X)// 
    {
        cout << value << " ";
    }
    cout << endl;

    cout << "Массив Y: ";
    for (const auto& value : Y)
    {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №6 задание №4" << endl;
    cout << "Заданы массивы: вещественных чисел X(N), натуральных чисел Y(N)." << endl;
    cout << "В массиве X каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива Y." << endl;

    int n; // Размер массивов
    do {
        cout << "Введите n (не больше " << MAX_N << "): ";
        cin >> n;
        if (n > MAX_N)
            cout << "n не может быть больше " << MAX_N << endl << endl;
    } while (n > MAX_N);

    // Вектор для массива Y
    vector<int> Y(n);
    int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;

    // Вектор для исходных вещественных чисел X
    vector<double> X; // Результирующий массив
    vector<double> originalX; // Исходный массив

    // Заполняем массив Y случайными элементами
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        int y = MIN_Y_LIMIT + rand() % delta; // диапазон
        Y.at(i) = y;

        // Генерируем случайное вещественное число в диапазоне [MIN_LIMIT, MAX_LIMIT]
        double x = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT);
        originalX.push_back(x); // Сохраняем исходное значение

        // Повторяем элемент x столько раз, сколько указано в Y
        X.insert(X.end(), y, x); // Используем insert для добавления y элементов значения x в конец вектора X
    }

    // Вывод исходного массива X
    cout << "Исходный массив X: ";
    for (const auto& value : originalX)
    {
        cout << value << " ";
    }
    cout << endl;

    // Вывод результирующего массива X
    cout << "Результирующий массив X: ";
    for (const auto& value : X)
    {
        cout << value << " ";
    }
    cout << endl;

    cout << "Массив Y: ";
    for (const auto& value : Y)
    {
        cout << value << " ";
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
