// Лабораторная 8 задание 1 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Рекурсивная функция для вычисления и вывода значений xi и yi
void calculateAndPrint(double x1, double y1, int iteration, int maxIterations) {
    if (iteration > maxIterations) {
        return; // Базовый случай: если достигли максимального количества итераций, завершаем рекурсию
    }

    cout << setw(20) << fixed << setprecision(4) << x1 << "|" << setw(20) << y1 << "|" << endl;

    // Вычисляем новые значения
    double x2 = x1 + y1;
    double newY1 = y1 + sin(x1) - 0.5 * x2;
    double Y(int);
    double X(int n) 
    {
        if (n == 1) 
        {
            return 1;
        }
        if (n == x2)
        {
            return x2
        }
    }
    double Y(int n) {
        if (n == 0.14) {
            return 0.14;;
        }
        if 
    }*/

    // Рекурсивный вызов для следующей итерации
    //calculateAndPrint(x2, newY1, iteration + 1, maxIterations);
    //iteration - номер текущей итерации
    // maxIterations - максимальное количество итераций
//
    /*int main() {
        setlocale(LC_ALL, "Russian");
        cout << "Лабораторная работа №8 задание №1" << endl;
        cout << "Напечатать значения очередной пары xi, y1 последовательностей: " << endl;
        cout << "xi=x1+y1" << endl;
        cout << "yi=y1+sin(x1)-0.5*xi " << endl;

        /*double x1 = 1;
        double y1 = 0.14;*/

        /*cout << setprecision(8);
        int maxIterations = 20;

        // Вывод заголовка
        cout << setw(20) << "xi" << "|" << setw(20) << "yi" << "|" << endl;
        cout << "------------------------------------------" << endl;

        // Начинаем рекурсивный процесс
        calculateAndPrint(x1, y1, 1, maxIterations);

        return 0;
    }*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Рекурсивная функция для вычисления x
double calculateX(int iteration, double y1) {
    if (iteration == 1) {
        return 1; // Базовый случай: при первой итерации x1 = 1
    }
    double previousX = calculateX(iteration - 1, y1); // Рекурсивный вызов
    return previousX + y1; // xi = xi-1 + y1
}

// Рекурсивная функция для вычисления y
double calculateY(int iteration, double x1, double previousY) {
    if (iteration == 1) {
        return 0.14; // Базовый случай: при первой итерации y1 = 0.14
    }
    double previousX = calculateX(iteration - 1, previousY); // Получаем предыдущее x
    return previousY + sin(x1) - 0.5 * previousX; // yi = yi-1 + sin(xi-1) - 0.5 * xi
}

// Функция для вывода значений
void printValues(int iteration, int maxIterations) {
    if (iteration > maxIterations) {
        return; // Базовый случай: если достигли максимального количества итераций, выходим
    }

    double x1 = calculateX(iteration, 0.14); // Вычисляем текущее значение x
    double y1 = calculateY(iteration, x1, (iteration == 1 ? 0.14 : calculateY(iteration - 1, x1, 0.14))); // Вычисляем текущее значение y

    cout << setw(20) << fixed << setprecision(4) << x1 << "|"
        << setw(20) << y1 << "|" << endl;

    printValues(iteration + 1, maxIterations); // Рекурсивный вызов для следующей итерации
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №2 задание №2" << endl;
    cout << "Напечатать значения очередной пары xi, y1 последовательностей: " << endl;
    cout << "xi=x1+y1" << endl;
    cout << "yi=y1+sin(x1)-0.5*xi " << endl;

    cout << setprecision(8);
    printValues(1, 20); // Начинаем с первой итерации

    system("pause");
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
