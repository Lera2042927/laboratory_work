
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <iomanip>

using namespace std;

// Структура для хранения информации о книге
struct Book {
	tm startDate; // Дата начала продаж
	tm endDate;   // Дата окончания продаж
	string author;
	string title;
	string publisher;
	int year;
	double price;
	int pages;
	string format;
	int circulation;

	// Конструктор по умолчанию
	Book() : startDate{}, endDate{}, author(""), title(""), publisher(""), year(0), price(0.0), pages(0), format(""), circulation(0) {}

	// Конструктор с параметрами
	Book(tm start, tm end, string a, string t, string p, int y, double pr, int pg, string f, int c)
		: startDate(start), endDate(end), author(a), title(t), publisher(p), year(y), price(pr), pages(pg), format(f), circulation(c) {}
};

// Функции для работы с книгами
void nach(); // Функция для вывода меню
void printBooks(const vector<Book>& books);
vector<Book> addBook(vector<Book> books);
vector<Book> deleteBook(vector<Book> books, int index);
vector<Book> editBook(vector<Book> books, int index, int field);
vector<Book> sortBooks(vector<Book> books, int field);
void searchBooks(const vector<Book>& books, const string& keyword, bool exactMatch);
void searchBooksByNumericField(const vector<Book>& books, int field, double value, bool greaterThan);
void searchBooksBetweenValues(const vector<Book>& books, int field, double lowerBound, double upperBound);

void searchBooksByDateField(const vector<Book>& books, int field, tm date, bool greaterThan); // Поиск по дате
void searchBooksBetweenDates(const vector<Book>& books, int field, tm startDate, tm endDate); // Поиск по диапазону дат

#endif // BOOK_H





































/*#ifndef BOOKS_H
#define BOOKS_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <ctime>

using namespace std;

// Структура для хранения информации о книге
struct book {
	string author;          // ФИО автора
	string title;           // Название книги
	string publisher;       // Наименование издательства
	int year;               // Год издания
	double price;           // Цена
	int pages;              // Количество страниц
	string format;          // Формат издания
	int circulation;        // Тираж
	tm start_sales;         // Дата начала продаж
	tm end_sales;           // Дата окончания продаж
};

// Прототипы функций
void PrintBooks(vector<book> books);
vector<book> AddBook(vector<book> books);
vector<book> EditBook(vector<book> books, int index, int field);
vector<book> SortBooks(vector<book> books, int field);
vector<book> InitializeBooks(); // Функция для инициализации списка книг

#endif*/









/*#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime> 
using namespace std;


void nach() {
    cout << endl;
    cout << "Лабораторная работа №2." << "\n\n";
    cout << "Задание 1. \n\t 1) Просмотр всех записей; \n\t 2) Удаление записи по номеру, заданному пользователем;\n\t 3) Добавление новой записи в конец массива, элементы записи вводит пользователь с клавиатуры.\n\nЗадание 2.\n\t 1) Редактирование поля записи пользователем, где номер записи и поле записи должен выбрать пользователь;\n\t 2) Сортировка поля по возрастанию.\n\nЗадание 3.\n\t 1) Поиск записей по задаваемым условиям\n";
    cout << "\nВведите номер задания: ";
}

struct Book 
{
	tm startDate; // Дата начала продаж      
	tm endDate;   // Дата окончания продаж
    string author;
    string title;
    string publisher;
    int year;
    double price;
    int pages;
    string format;
    int circulation;
    
	// Конструктор
	/*Book(tm start, tm end, string a, string t, string p, int y, double pr, int pg, string f, int c)
		: startDate(start), endDate(end), author(a), title(t), publisher(p), year(y), price(pr), pages(pg), format(f), circulation(c) {}

		// Конструктор по умолчанию
	Book() : startDate{}, endDate{}, author(""), title(""), publisher(""), year(0), price(0.0), pages(0), format(""), circulation(0) {}

	// Конструктор с параметрами
	Book(tm start, tm end, string a, string t, string p, int y, double pr, int pg, string f, int c)
		: startDate(start), endDate(end), author(a), title(t), publisher(p), year(y), price(pr), pages(pg), format(f), circulation(c) {}


};

void Printt(const vector<Book>& books); // Объявление функции Printt для вывода информации о 
void viewBooks(const vector<Book>& books); // отображение списка книг
void deleteBook(vector<Book>& books, int index);//удаление вектора и индкса книги
//void addBook(vector<Book>& books);//добавление новой книги в библиотеку
vector<Book>add_Book(vector<Book> a); // Объявление функции add_str для добавления новой записи
tm generateRandomDate(int startYear, int endYear); // Генерация случайной даты
void generateSalesDates(Book& book); // Генерация дат начала и окончания продаж


int main()
{
    setlocale(LC_ALL, "Russian"); // Установка локали на русский язык
	srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел
	//заполнение записей 
//{{дата начала продаж, Дата окончания, Фио автора, Название, издательство, Год издания, Цена, Количество страниц, Формат издания, тираж}
    vector <Book> a = {
{ { 0 },{ 0 }, { "Лев Толстой" }, {"Война и мир"}, {"Эксмо"}, 1869,  500.0, 1400, {"84x108/32"}, 5000},
{ { 0 },{ 0 }, { "Федор Достоевский" }, {"Преступление и наказание"}, {"Азбука"},1866,  350.0, 400, {"60x90/16"}, 3000},
{ { 0 },{ 0 }, { "Антон Чехов" }, {"Чайка"}, {"Русское слово"}, 1896,  250.0, 150, {"70x100/32"}, 2000 },
{ { 0 },{ 0 }, { "Михаил Булгаков" }, {"Мастер и Маргарита"}, {"АСТ"}, 1967,  450.0, 384, {"84x108/32"}, 6000 },
{ { 0 },{ 0 }, { "Александр Пушкин" }, {"Евгений Онегин"}, {"Наука"},1833,  300.0, 256, {"84x108/32"}, 4000, {0}},
{ { 0 },{ 0 }, { "Борис Пастернак" }, {"Доктор Живаго"}, {"Издательство Ивана Лимбаха"},1957,  600.0, 480, {"60x90/16"}, 3000},
{ { 0 },{ 0 }, { "Исаак Бабель" }, {"Конармия"}, {"Современник"},1926,  250.0, 200, {"70x100/32"}, 1500 },
{ { 0 },{ 0 }, { "Владимир Набоков" }, {"Лолита"}, {"АСТ"},1955,  400.0, 368, {"84x108/32"}, 5000 },
{ { 0 },{ 0 }, { "Максим Горький" }, {"Мать"}, {"Наука"},1906,  280.0, 320, {"70x100/32"}, 3500 },
{ { 0 },{ 0 }, { "Константин Паустовский" }, {"Золотая роза"}, {"Художественная литература"}, 1943, 450.0, 400, {"84x108/32"}, 2500},
{ { 0 },{ 0 }, { "Алексей Толстой" }, {"Петр Первый"}, {"АСТ"},1934, 550.0, 600, {"84x108/32"}, 3000 },
{ { 0 },{ 0 }, { "Рэй Брэдбери" }, {"451 градус по Фаренгейту"}, {"АСТ"},1953,  350.0, 256, {"84x108/32"}, 4000},
{ { 0 },{ 0 }, { "Джордж Оруэлл" }, {"1984"}, {"Азбука"},1949,  400.0, 368, {"84x108/32"}, 5000 },
{ { 0 },{ 0 }, { "Харуки Мураками" }, {"Норвежский лес"}, {"Эксмо"},1987,  500.0, 400, {"84x108/32"}, 4500},
{ { 0 },{ 0 }, { "Джейн Остин" }, {"Гордость и предубеждение"}, {"Наука"},1813,  300.0, 320, {"70x100/32"}, 2500},
{ { 0 }, { 0 },{ "Марк Твен" }, {"Приключения Тома Сойера"}, {"АСТ"},1876,  350.0, 400, {"84x108/32"}, 3000},
{ { 0 }, { 0 },{ "Габриэль Гарсиа Маркес" }, {"Сто лет одиночества"}, {"Эксмо"},1967,  600.0, 500, {"84x108/32"}, 2000},
{ { 0 }, { 0} ,{ "Фрэнсис Скотт Фицджеральд" }, {"Великий Гэтсби"}, {"Азбука"},1925,  400.0, 240, {"84x108/32"}, 3500},
{ { 0 }, { 0 },{ "Кен Кизи" }, {"Пролетая над гнездом кукушки"}, {"АСТ"},1962,  450.0, 400, {"84x108/32"}, 3000 },
{ { 0 }, { 0 },{ "Джон Стейнбек" }, {"Гроздья гнева"}, {"АСТ"},1939, 500.0, 480, {"84x108/32"}, 2500},
{ { 0 }, { 0 },{ "Кормак Маккарти" }, {"Старик и море"}, {"Эксмо"},1952, 350.0, 128, {"70x100/32"}, 3000 },
{ { 0 }, { 0 },{ "Чак Паланик" }, {"Бойцовский клуб"}, {"Азбука"}, 1996, 400.0, 256, {"84x108/32"}, 4500},
{ { 0 }, { 0 },{ "Джоджо Мойес" }, {"До встречи с тобой"}, {"Эксмо"},2012, 450.0, 368, {"84x108/32"}, 3000 },
{ { 0 }, { 0 },{ "Сара Уотерс" }, {"Тонкая работа"}, {"АСТ"},2006, 500.0, 480, {"84x108/32"}, 2000 },
{ { 0 }, { 0 },{ "Гарпер Ли" }, {"Убить пересмешника"}, {"Наука"},1960, 400.0, 336, {"84x108/32"}, 3000},
    };


	nach(); // Вызов функции nach для вывода информации о программе

	int number; // Переменная для хранения выбора пользователя
	int number2; // Переменная для хранения дополнительного выбора пользователя

	cout << endl;

	int count = 1;
	while (1 != 0)
	{
		cin >> number; // Ввод пользователем основного выбора
		switch (number)
		{
		case 1:
		{
			cout << "Задание 1. \n\t 1) Просмотр всех записей; \n\t 2) Удаление записи по номеру, заданному пользователем;\n\t 3) Добавление новой записи в конец массива, элементы записи вводит пользователь с клавиатуры.\n\n";
			cout << "\nВведите номер подзадания: ";
			cin >> number2;
			switch (number2)
			{
			case 1:
			{
				Printt(a); // Вызов функции для вывода всех записей
				break;
			}
			case 2:
			{
				cout << "Введите номер записи, которую хотите удалить: ";
				int del;
				cin >> del;
				a.erase(a.cbegin() + del - 1); // Удаление записи по указанному номеру
				Printt(a);
				break;
			}
			case 3:
			{
				a = add_Book(a); // Вызов функции для добавления новой записи
				Printt(a);
				break;
			}

			break;
			}

		}

		}
	}

#endif // BOOK_H
#pragma once */
