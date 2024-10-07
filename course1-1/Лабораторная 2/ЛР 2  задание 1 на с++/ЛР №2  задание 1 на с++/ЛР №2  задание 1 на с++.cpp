﻿// ЛР №2  задание 1 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<cmath>
#include<iomanip>
#include <iostream>
#include<cmath>
using namespace std;

//  для вычисления y от x
double f(double x) {
    if (x < -1) {
        return pow(x, exp(1)) * (sin(x) - cos(x)) / 2;
    }
    else if (x >= -1 && x <= 0) {
        return (exp(x) * cos(x) - 1) / 2;
    }
    else {
        return pow(x, 2) * sin(2 * x);
    }
}


int main() 
{
     double a, b, h ;
    setlocale(LC_ALL, "Russian");
    cout << "Лабораторная работа №2 задание №1" << endl;
    cout << "Вычислить: y=|(x*exp(x)*(sin(x)-cos(x)/2), если x<-1 ;" << endl;
    cout << "((exp(x)*cos(x)-z)/2), если x>=-1, x<=0;" << endl;
    cout << "pow(x,2)*sin2x, если x>0 " << endl;
    cout << "Введите начальную точку отрезка a: ";
    cin >> a;
    cout << "ВВедите конечную точку отрезка b :";
    cin >> b;
    cout << "Введите шаг для h";
    cin >> h;


    cout << "Таблица значений y=f(x):" << endl;
    cout << "x\t\ty\n" << endl;
    cout << "------------|-----------\n";
    // проход интервала от a до b с шагом h

    for (double x = a; x <= b; x += h) {
        double y = f(x); // вычисление y для текущего x
        cout << x << "\t\t" << y << endl; //вывод x и y
    }

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
