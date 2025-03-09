
#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <iomanip>

using namespace std;

// ��������� ��� �������� ���������� � �����
struct Book {
	tm startDate; // ���� ������ ������
	tm endDate;   // ���� ��������� ������
	string author;
	string title;
	string publisher;
	int year;
	double price;
	int pages;
	string format;
	int circulation;

	// ����������� �� ���������
	Book() : startDate{}, endDate{}, author(""), title(""), publisher(""), year(0), price(0.0), pages(0), format(""), circulation(0) {}

	// ����������� � �����������
	Book(tm start, tm end, string a, string t, string p, int y, double pr, int pg, string f, int c)
		: startDate(start), endDate(end), author(a), title(t), publisher(p), year(y), price(pr), pages(pg), format(f), circulation(c) {}
};

// ������� ��� ������ � �������
void nach(); // ������� ��� ������ ����
void printBooks(const vector<Book>& books);
vector<Book> addBook(vector<Book> books);
vector<Book> deleteBook(vector<Book> books, int index);
vector<Book> editBook(vector<Book> books, int index, int field);
vector<Book> sortBooks(vector<Book> books, int field);
void searchBooks(const vector<Book>& books, const string& keyword, bool exactMatch);
void searchBooksByNumericField(const vector<Book>& books, int field, double value, bool greaterThan);
void searchBooksBetweenValues(const vector<Book>& books, int field, double lowerBound, double upperBound);

void searchBooksByDateField(const vector<Book>& books, int field, tm date, bool greaterThan); // ����� �� ����
void searchBooksBetweenDates(const vector<Book>& books, int field, tm startDate, tm endDate); // ����� �� ��������� ���

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

// ��������� ��� �������� ���������� � �����
struct book {
	string author;          // ��� ������
	string title;           // �������� �����
	string publisher;       // ������������ ������������
	int year;               // ��� �������
	double price;           // ����
	int pages;              // ���������� �������
	string format;          // ������ �������
	int circulation;        // �����
	tm start_sales;         // ���� ������ ������
	tm end_sales;           // ���� ��������� ������
};

// ��������� �������
void PrintBooks(vector<book> books);
vector<book> AddBook(vector<book> books);
vector<book> EditBook(vector<book> books, int index, int field);
vector<book> SortBooks(vector<book> books, int field);
vector<book> InitializeBooks(); // ������� ��� ������������� ������ ����

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
    cout << "������������ ������ �2." << "\n\n";
    cout << "������� 1. \n\t 1) �������� ���� �������; \n\t 2) �������� ������ �� ������, ��������� �������������;\n\t 3) ���������� ����� ������ � ����� �������, �������� ������ ������ ������������ � ����������.\n\n������� 2.\n\t 1) �������������� ���� ������ �������������, ��� ����� ������ � ���� ������ ������ ������� ������������;\n\t 2) ���������� ���� �� �����������.\n\n������� 3.\n\t 1) ����� ������� �� ���������� ��������\n";
    cout << "\n������� ����� �������: ";
}

struct Book 
{
	tm startDate; // ���� ������ ������      
	tm endDate;   // ���� ��������� ������
    string author;
    string title;
    string publisher;
    int year;
    double price;
    int pages;
    string format;
    int circulation;
    
	// �����������
	/*Book(tm start, tm end, string a, string t, string p, int y, double pr, int pg, string f, int c)
		: startDate(start), endDate(end), author(a), title(t), publisher(p), year(y), price(pr), pages(pg), format(f), circulation(c) {}

		// ����������� �� ���������
	Book() : startDate{}, endDate{}, author(""), title(""), publisher(""), year(0), price(0.0), pages(0), format(""), circulation(0) {}

	// ����������� � �����������
	Book(tm start, tm end, string a, string t, string p, int y, double pr, int pg, string f, int c)
		: startDate(start), endDate(end), author(a), title(t), publisher(p), year(y), price(pr), pages(pg), format(f), circulation(c) {}


};

void Printt(const vector<Book>& books); // ���������� ������� Printt ��� ������ ���������� � 
void viewBooks(const vector<Book>& books); // ����������� ������ ����
void deleteBook(vector<Book>& books, int index);//�������� ������� � ������ �����
//void addBook(vector<Book>& books);//���������� ����� ����� � ����������
vector<Book>add_Book(vector<Book> a); // ���������� ������� add_str ��� ���������� ����� ������
tm generateRandomDate(int startYear, int endYear); // ��������� ��������� ����
void generateSalesDates(Book& book); // ��������� ��� ������ � ��������� ������


int main()
{
    setlocale(LC_ALL, "Russian"); // ��������� ������ �� ������� ����
	srand(static_cast<unsigned int>(time(0))); // ������������� ���������� ��������� �����
	//���������� ������� 
//{{���� ������ ������, ���� ���������, ��� ������, ��������, ������������, ��� �������, ����, ���������� �������, ������ �������, �����}
    vector <Book> a = {
{ { 0 },{ 0 }, { "��� �������" }, {"����� � ���"}, {"�����"}, 1869,  500.0, 1400, {"84x108/32"}, 5000},
{ { 0 },{ 0 }, { "����� �����������" }, {"������������ � ���������"}, {"������"},1866,  350.0, 400, {"60x90/16"}, 3000},
{ { 0 },{ 0 }, { "����� �����" }, {"�����"}, {"������� �����"}, 1896,  250.0, 150, {"70x100/32"}, 2000 },
{ { 0 },{ 0 }, { "������ ��������" }, {"������ � ���������"}, {"���"}, 1967,  450.0, 384, {"84x108/32"}, 6000 },
{ { 0 },{ 0 }, { "��������� ������" }, {"������� ������"}, {"�����"},1833,  300.0, 256, {"84x108/32"}, 4000, {0}},
{ { 0 },{ 0 }, { "����� ���������" }, {"������ ������"}, {"������������ ����� �������"},1957,  600.0, 480, {"60x90/16"}, 3000},
{ { 0 },{ 0 }, { "����� ������" }, {"��������"}, {"�����������"},1926,  250.0, 200, {"70x100/32"}, 1500 },
{ { 0 },{ 0 }, { "�������� �������" }, {"������"}, {"���"},1955,  400.0, 368, {"84x108/32"}, 5000 },
{ { 0 },{ 0 }, { "������ �������" }, {"����"}, {"�����"},1906,  280.0, 320, {"70x100/32"}, 3500 },
{ { 0 },{ 0 }, { "���������� �����������" }, {"������� ����"}, {"�������������� ����������"}, 1943, 450.0, 400, {"84x108/32"}, 2500},
{ { 0 },{ 0 }, { "������� �������" }, {"���� ������"}, {"���"},1934, 550.0, 600, {"84x108/32"}, 3000 },
{ { 0 },{ 0 }, { "��� ��������" }, {"451 ������ �� ����������"}, {"���"},1953,  350.0, 256, {"84x108/32"}, 4000},
{ { 0 },{ 0 }, { "������ ������" }, {"1984"}, {"������"},1949,  400.0, 368, {"84x108/32"}, 5000 },
{ { 0 },{ 0 }, { "������ ��������" }, {"���������� ���"}, {"�����"},1987,  500.0, 400, {"84x108/32"}, 4500},
{ { 0 },{ 0 }, { "����� �����" }, {"�������� � �������������"}, {"�����"},1813,  300.0, 320, {"70x100/32"}, 2500},
{ { 0 }, { 0 },{ "���� ����" }, {"����������� ���� ������"}, {"���"},1876,  350.0, 400, {"84x108/32"}, 3000},
{ { 0 }, { 0 },{ "�������� ������ ������" }, {"��� ��� �����������"}, {"�����"},1967,  600.0, 500, {"84x108/32"}, 2000},
{ { 0 }, { 0} ,{ "������� ����� �����������" }, {"������� ������"}, {"������"},1925,  400.0, 240, {"84x108/32"}, 3500},
{ { 0 }, { 0 },{ "��� ����" }, {"�������� ��� ������� �������"}, {"���"},1962,  450.0, 400, {"84x108/32"}, 3000 },
{ { 0 }, { 0 },{ "���� ��������" }, {"������� �����"}, {"���"},1939, 500.0, 480, {"84x108/32"}, 2500},
{ { 0 }, { 0 },{ "������ ��������" }, {"������ � ����"}, {"�����"},1952, 350.0, 128, {"70x100/32"}, 3000 },
{ { 0 }, { 0 },{ "��� �������" }, {"���������� ����"}, {"������"}, 1996, 400.0, 256, {"84x108/32"}, 4500},
{ { 0 }, { 0 },{ "������ �����" }, {"�� ������� � �����"}, {"�����"},2012, 450.0, 368, {"84x108/32"}, 3000 },
{ { 0 }, { 0 },{ "���� ������" }, {"������ ������"}, {"���"},2006, 500.0, 480, {"84x108/32"}, 2000 },
{ { 0 }, { 0 },{ "������ ��" }, {"����� ������������"}, {"�����"},1960, 400.0, 336, {"84x108/32"}, 3000},
    };


	nach(); // ����� ������� nach ��� ������ ���������� � ���������

	int number; // ���������� ��� �������� ������ ������������
	int number2; // ���������� ��� �������� ��������������� ������ ������������

	cout << endl;

	int count = 1;
	while (1 != 0)
	{
		cin >> number; // ���� ������������� ��������� ������
		switch (number)
		{
		case 1:
		{
			cout << "������� 1. \n\t 1) �������� ���� �������; \n\t 2) �������� ������ �� ������, ��������� �������������;\n\t 3) ���������� ����� ������ � ����� �������, �������� ������ ������ ������������ � ����������.\n\n";
			cout << "\n������� ����� ����������: ";
			cin >> number2;
			switch (number2)
			{
			case 1:
			{
				Printt(a); // ����� ������� ��� ������ ���� �������
				break;
			}
			case 2:
			{
				cout << "������� ����� ������, ������� ������ �������: ";
				int del;
				cin >> del;
				a.erase(a.cbegin() + del - 1); // �������� ������ �� ���������� ������
				Printt(a);
				break;
			}
			case 3:
			{
				a = add_Book(a); // ����� ������� ��� ���������� ����� ������
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
