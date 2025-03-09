#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <sstream>

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
void searchBooks(const vector<Book>& books, const string& keyword, bool exactMatch, int field);
void searchBooksByNumericField(const vector<Book>& books, int field, double value, int condition);
void searchBooksBetweenValues(const vector<Book>& books, int field, double lowerBound, double upperBound);
void searchBooksByDateField(const vector<Book>& books, int field, tm date, bool greaterThan);
void searchBooksBetweenDates(const vector<Book>& books, int field, tm startDate, tm endDate);

// Функции для работы с файлами
void writeFormattedToFile(const vector<Book>& books, const string& filename);
void writeUnformattedToFile(const vector<Book>& books, const string& filename);
void readFormattedFromFile(const string& filename);
vector<Book> readUnformattedFromFile(const string& filename);
void writeToBinaryFile(const vector<Book>& books, const string& filename);
vector<Book> readFromBinaryFile(const string& filename);
void printBooksUnformatted(const vector<Book>& books);
#endif // BOOK_H#pragma once
