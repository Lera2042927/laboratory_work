// Лабораторная 8 задание 2 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Функция для вычисления n-го элемента ряда
double f1(int n) {
    return pow(n, 2) / pow(2 + 1.0 / (n * 1.0), n * 1.0);
}

// Рекурсивная функция для вычисления суммы ряда
double calculateSum(int n, double e, double& sum, double prevTerm, int& iterations) {
    double currentTerm = f1(n);
    cout << "Элемент  " << fixed << setprecision(4) << currentTerm << endl;

    // Добавляем текущий элемент к сумме
    sum += currentTerm;
    iterations++; // Увеличиваем счетчик итераций

    // Проверяем условие остановки: если разница между текущим и предыдущим элементом меньше точности
    if (abs(currentTerm - prevTerm) <= e) {
        return sum; // Возвращаем сумму, если достигли точности
    }

    // Рекурсивный вызов для следующего элемента
    return calculateSum(n + 1, e, sum, currentTerm, iterations);
}
int main()
{
    double e;
    double sum = 0; // Инициализация суммы
    int n = 1; // Начальное значение n
    int iterations = 0; // Инициализация счетчика итераций

    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №2 задание №3" << endl;
    cout << "Вычислите сумму сходящегося ряда an=n^2/(2+1/n)^n с заданной точностью;" << endl;
    cout << "Введите значение точности e:" << endl;
    cin >> e;

    // Вычисляем первый элемент и выводим его
    double firstTerm = f1(n);
    cout << "Элемент  " << fixed << setprecision(4) << firstTerm << endl;

    // Начинаем рекурсивный процесс вычисления суммы
    sum = calculateSum(n + 1, e, sum, firstTerm, iterations);

    cout << "Сумма сходящегося ряда равняется  " << sum << endl;
    cout << "Количество итераций  " << iterations << endl; // Выводим количество итераций

    return 0;
}*/
#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

// Рекурсивная функция для вычисления элемента ряда
double f1(int n) {
    return pow(n, 2) / pow(2 + 1.0 / (n * 1.0), n * 1.0);
}

// Рекурсивная функция для вычисления суммы ряда
double calculateSum(int n, double e, double& previousTerm, int& iterations) {
    double currentTerm = f1(n);
    cout << "Элемент " << fixed << setprecision(4) << currentTerm << endl;

    // Увеличиваем количество итераций
    iterations++;

    // Проверяем условие остановки
    if (abs(currentTerm - previousTerm) <= e) {
        return currentTerm; // Возвращаем текущий элемент, если условие выполнено
    }

    // Обновляем предыдущий элемент и продолжаем рекурсию
    previousTerm = currentTerm;
    return currentTerm + calculateSum(n + 1, e, previousTerm, iterations); // Рекурсивный вызов
}

int main() {
    double e;
    double previousTerm = 0; // Предыдущий элемент
    int iterations = 0; // Счетчик итераций

    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №2 задание №3" << endl;
    cout << "Вычислите сумму сходящегося ряда an=n^2/(2+1/n)^n с заданной точностью;" << endl;
    cout << "Введите значение точности e:" << endl;
    cin >> e;

    // Начинаем вычисление с первого элемента
    double sum = calculateSum(1, e, previousTerm, iterations);

    cout << "Сумма сходящегося ряда равняется " << sum << endl;
    cout << "Количество итераций " << iterations << endl;

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
