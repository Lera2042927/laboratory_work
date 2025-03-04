#include <iostream>
#include "functions.h" // Подключаем заголовочный файл

using namespace std;
// Прототипы функций
/*void task1();
void task2();
void task3();*/
#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10
#define ARRAY_X_ROW_MAX 100
#define ARRAY_X_COL_MAX 100
#define MAX_ARRAY 1000


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
        {
            cout << "Лабораторная работа №5 задание №1" << endl;
            cout << "Заданы массивы: вещественных чисел Х(N), натуральных чисел Y(N)." << endl;
            cout << "В массиве X каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива Y." << endl;

            int n; // Размер массивов
            do {
                cout << "Введите n \n";
                cin >> n;
                if (n > MAX_N)
                    cout << "n не может быть больше " << MAX_N << endl << endl;
            } while (n > MAX_N);

            int* Y = new int[n];
            int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;

            int total_count = 0; // максимальный количество элементов массива X
            double* X = new double[n]; //Массив Х исходных вещественных чисел

            // Заполняем массив Y случайными элементами
            srand(time(0));
            for (int i = 0; i < n; i++) {
                int y = MIN_Y_LIMIT + rand() % delta; // диапазон
                Y[i] = y;
                total_count += y;
            }

            delta = MAX_LIMIT - MIN_LIMIT + 1;

            double* expanded_X = new double[total_count]; // Массив для расширенного X (результирующий)
            // Заполняем исходный массив X случайными вещественными числами в диапазоне [MIN_LIMIT, MAX_LIMIT]
            for (int i = 0; i < n; i++) {
                X[i] = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); // диапазон для массива X
            }

            int offset = 0; // смещение текущего вещественного числа в массиве Х (от начала массива)
            // Заполняем массив expanded_X, повторяя элементы массива X по количеству в Y
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < Y[i]; j++) {
                    expanded_X[offset] = X[i];
                    offset++;
                }
            }

            // Вывод массивов X и Y
            cout << "Массив X (результирующий): ";
            for (int i = 0; i < total_count; ++i) {
                cout << expanded_X[i] << " ";
            }
            cout << endl;

            cout << "Массив Y: ";
            for (int i = 0; i < n; ++i) {
                cout << Y[i] << " ";
            }
            cout << endl;

            cout << "Исходный массив X: ";
            for (int i = 0; i < n; ++i) {
                cout << X[i] << " ";
            }
            cout << endl;

            // Освобождаем память
            delete[] X;
            delete[] Y;
            delete[] expanded_X;

            //task1();
            break;
        }
        case 2:
            //task2();
        {
            cout << "Лабораторная работа №5 задание №2" << endl;
            cout << "Заданы массивы X(M1,N1) и Y(M2,N2) (M1>M2, N1>N2)." << endl;
            cout << "Создать два новых двумерных массива, полученных как «разность» массивов X и Y." << endl;

            unsigned int x_row_count, x_col_count, y_row_count, y_col_count;

            do {
                cout << "Введите количество строк двумерного массива X:\n";
                cin >> x_row_count;
                if (x_row_count > ARRAY_X_ROW_MAX)
                    cout << "Количество строк не может быть больше " << ARRAY_X_ROW_MAX << endl << endl;
            } while (x_row_count > ARRAY_X_ROW_MAX);

            do {
                cout << "Введите количество столбцов двумерного массива X:\n";
                cin >> x_col_count;
                if (x_col_count > ARRAY_X_COL_MAX)
                    cout << "Количество столбцов не может быть больше " << ARRAY_X_COL_MAX << endl << endl;
            } while (x_col_count > ARRAY_X_COL_MAX);

            do {
                cout << "Введите количество строк двумерного массива Y:\n";
                cin >> y_row_count;
                if (y_row_count >= x_row_count)
                    cout << "Количество строк массива Y должно быть меньше " << x_row_count << endl << endl;
            } while (y_row_count >= x_row_count);

            do {
                cout << "Введите количество столбцов двумерного массива Y:\n";
                cin >> y_col_count;
                if (y_col_count >= x_col_count)
                    cout << "Количество столбцов массива Y должно быть меньше " << x_col_count << endl << endl;
            } while (y_col_count >= x_col_count);

            // Выделение памяти для массива X
            double** X = new double* [x_row_count];
            for (unsigned int i = 0; i < x_row_count; i++) {
                X[i] = new double[x_col_count];
            }

            // Выделение памяти для массива Y
            double** Y = new double* [y_row_count];
            for (unsigned int i = 0; i < y_row_count; i++) {
                Y[i] = new double[y_col_count];
            }

            srand(time(NULL));

            // Заполнение массивов X и Y
            fillArray(X, x_row_count, x_col_count, MIN_LIMIT, MAX_LIMIT);
            cout << "Массив X:\n";
            printArry(X, x_row_count, x_col_count);

            fillArray(Y, y_row_count, y_col_count, MIN_LIMIT, MAX_LIMIT);
            cout << "\nМассив Y:\n";
            printArry(Y, y_row_count, y_col_count);
            cout << endl;

            // Создание результирующих массивов
            unsigned int r1_row_count = x_row_count;
            unsigned int r1_col_count = x_col_count - y_col_count;
            double** result1 = new double* [r1_row_count];

            for (unsigned int i = 0; i < r1_row_count; i++) {
                result1[i] = new double[r1_col_count];
                for (unsigned int j = 0; j < r1_col_count; j++) {
                    result1[i][j] = X[i][j + y_col_count]; // Копируем элементы
                }
            }

            unsigned int r2_row_count = x_row_count - y_row_count;
            unsigned int r2_col_count = y_col_count;
            double** result2 = new double* [r2_row_count];

            for (unsigned int i = 0; i < r2_row_count; i++) {
                result2[i] = new double[r2_col_count];
                for (unsigned int j = 0; j < r2_col_count; j++) {
                    result2[i][j] = X[i + y_row_count][j]; // Копируем элементы
                }
            }

            // Вывод результирующего массива 1
            cout << "\nРезультирующий массив 1 (разность X и Y):\n";
            printArry(result1, r1_row_count, r1_col_count);

            // Вывод результирующего массива 2
            cout << "\nРезультирующий массив 2 (разность X и Y):\n";
            printArry(result2, r2_row_count, r2_col_count);

            // Освобождение памяти
            freeArray(result1, r1_row_count);
            freeArray(result2, r2_row_count);
            freeArray(X, x_row_count);
            freeArray(Y, y_row_count);

            break;
        }
        case 3:
            //task3();
        {
            
            setlocale(LC_ALL, "Russian");
            cout << "Лабораторная работа №5 задание №3" << endl;
            cout << "Задан массив Х(N). Сначала удалить из него все элементы, кратные 3, затем 4, затем 5." << endl;

            int n, min_limit, max_limit;
            getInput(n, min_limit, max_limit); // Получение ввода от пользователя

            int* X = new int[n];
            fillArray(X, n, min_limit, max_limit); // Заполнение массива

            // Вывод исходного массива
            cout << "Исходный массив: ";
            printArray(X, n);

            // Удаление элементов, кратных 3, 4 и 5
            removeMultiples(X, n, 3);
            cout << "Массив после удаления элементов, кратных 3: ";
            printArray(X, n);

            removeMultiples(X, n, 4);
            cout << "Массив после удаления элементов, кратных 4: ";
            printArray(X, n);

            removeMultiples(X, n, 5);
            cout << "Массив после удаления элементов, кратных 5: ";
            printArray(X, n);

            // Освобождение памяти
            delete[] X;
        
            break;
        }
        case 0:
            cout << "Выход из программы." << endl;
            break;
        default:
            cout << "Некорректный выбор. Попробуйте снова." << endl;
        }
    } while (choice != 0);

    return 0;
}
