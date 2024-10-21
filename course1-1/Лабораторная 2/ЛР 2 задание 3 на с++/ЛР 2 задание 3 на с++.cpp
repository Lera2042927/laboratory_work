﻿// ЛР 2 задание 3 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<cmath>
#include<iomanip>
#include <iostream>
using namespace std;

double f1(int n)
{
	return pow(n, 2) / pow(2 + 1.0 / (n*1.0), n*1.0);
}
int main()
{
	double e;
	double pr;
	double tc;
	double sum;
	int n = 1;

	setlocale(LC_ALL, "Russian");
	cout << "Лабораторная работа №2 задание №3" << endl;
	cout << "Вычислите сумму сходящегося ряда an=n^2/(2+1/n)^n с заданной точностью;" << endl;
	cout << "Введите значение точности e:" << endl;
	cin >> e;
	
	tc = f1(n);
	cout << "Элемент  " << fixed << setprecision(4) << tc << endl;
	sum = tc;
	do
	{
		n++;
		pr = tc;
		tc = f1(n);
		cout << "Элемент  " << fixed<<setprecision(4)<< tc << endl;
		sum += tc;
	} while (abs(tc - pr) > e);
	
	cout << "Сумма сходящегося ряда равняется  " << sum << endl;
	cout << "Количество итераций  " << n << endl;
	
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
