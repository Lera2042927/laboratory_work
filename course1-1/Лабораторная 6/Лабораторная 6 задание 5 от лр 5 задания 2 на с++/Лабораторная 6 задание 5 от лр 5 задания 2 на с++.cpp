// Лабораторная 6 задание 5 от лр 5 задания 2 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<iomanip>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;
#define ARRAY_X_ROW_MAX 100
#define ARRAY_X_COL_MAX 100


// Функция для заполнения массива случайными числами
void fillArray(vector<vector<double>> & arr, unsigned int row_count, unsigned int col_count, int min_limit, int max_limit) 
{
	if (arr.empty()) return;//проверяет является ли вектор пустым, есда да - возвращает true

	int delta = max_limit - min_limit + 1;
	for (unsigned int i = 0; i < row_count; i++) {
		for (unsigned int j = 0; j < col_count; j++) {
			double value = min_limit + rand() % delta; // диапазон
			arr[i].at(j) = value;
		}
	}
}

// Функция для вывода массива
void printArray(const vector<vector<double>>& arr) 
{
	for (const auto& row : arr) {
		for (const auto& value : row) {
			cout <<fixed << setprecision(2) << value << ",\t";
		}
		cout << endl;
	}
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №6 задание №5" << endl;
    cout << "Заданы массивы X(M1,N1) и Y(M2,N2) (M1>M2, N1>N2). " << endl;
    cout << "Создать два новых двумерных массива, полученных как «разность» массивов X и Y." << endl;

    unsigned int x_row_count;
    unsigned int x_col_count;
    unsigned int y_row_count;
    unsigned int y_col_count;

    int min_limit;
    int max_limit;

    do {
        cout << "Введите количество строк двумерного вектора X:\n";
        cin >> x_row_count;
        if (x_row_count > ARRAY_X_ROW_MAX)
            cout << "Количество строк не может быть больше " << ARRAY_X_ROW_MAX << endl << endl;
    } while (x_row_count > ARRAY_X_ROW_MAX);

    do {
        cout << "Введите количество столбцов двумерного вектора X:\n";
        cin >> x_col_count;
        if (x_col_count > ARRAY_X_COL_MAX)
            cout << "Количество столбцов не может быть больше " << ARRAY_X_COL_MAX << endl << endl;
    } while (x_col_count > ARRAY_X_COL_MAX);

    // Массив Y должен быть размерностью меньше чем массив X
    do {
        cout << "Введите количество строк двумерного вектора Y:\n";
        cin >> y_row_count;
        if (y_row_count >= x_row_count)
            cout << "Количество строк массива Y должно быть меньше " << x_row_count << endl << endl;
    } while (y_row_count >= x_row_count);

    do {
        cout << "Введите количество столбцов двумерного вектора Y:\n";
        cin >> y_col_count;
        if (y_col_count >= x_col_count)
            cout << "Количество столбцов массива Y должно быть меньше " << x_col_count << endl << endl;
    } while (y_col_count >= x_col_count);

    do {
        cout << "Введите нижний предел двумерного вектора:\n";
        cin >> min_limit;
        cout << "Введите верхний предел двумерного вектора:\n";
        cin >> max_limit;
        if (min_limit >= max_limit)
            cout << "Минимальный лимит должен быть меньше максимального лимита\n\n";
    } while (min_limit >= max_limit);


    //  векторы  X и Y
    vector<vector<double>> X(x_row_count, vector<double>(x_col_count));
    vector<vector<double>> Y(y_row_count, vector<double>(y_col_count));

    srand(time(NULL));

    // Заполнение векторов X и Y
    fillArray(X, x_row_count, x_col_count, min_limit, max_limit);
    cout << "Вектор X:\n";
    printArray(X);

    fillArray(Y, y_row_count, y_col_count, min_limit, max_limit);
    cout << "\nВектор Y:\n";
    printArray(Y);
    cout << endl;



    unsigned int col_copy_from = y_col_count; //столбцы для копирования
    // Результирующий вектор 1 (result1)
    unsigned int r1_row_count = x_row_count;
    unsigned int r1_col_count = x_col_count - y_col_count;
    vector<vector<double>>result1(r1_row_count, vector<double>(r1_col_count));


    // Заполнение result1
    for (unsigned int i = 0; i < r1_row_count; i++) {
        for (unsigned int j = 0; j < r1_col_count; j++) {
            result1[i].at(j) = X[i].at(col_copy_from + j);
        }
    }

    // Результирующий вектор 2 (result2) - разнос ть X и Y по строкам
     unsigned int row_copy_from = y_row_count;
    unsigned int r2_row_count = x_row_count - y_row_count;
    unsigned int r2_col_count = y_col_count;
    vector<vector<double>>result2(r2_row_count, vector<double>(r2_col_count));

    // Заполнение result2
    for (unsigned int i = 0; i < r2_row_count; i++) {
        for (unsigned int j = 0; j < r2_col_count; j++) {
            result2[i].at(j) = X.at(row_copy_from + i).at(j);
        }
    }


    // Вывод результирующего массива 1
    cout<<"\nРезультирующий вектор 1 (разность X и Y):\n";
    printArray(result1);

    // Вывод результирующего массива 2
    cout<< "\nРезультирующий вектор 2 (разность X и Y):\n";
    printArray(result2);

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
