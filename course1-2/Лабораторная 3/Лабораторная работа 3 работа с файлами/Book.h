#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <vector>
#include <string>
#include <algorithm>
#include <Windows.h>

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
};

// Функции для работы с книгами
void nach(); // Функция для вывода меню
void printBooks(const vector<Book>& books); // Функция для вывода списка книг
vector<Book> addBook(vector<Book> books); // Функция для добавления новой книги
vector<Book> deleteBook(vector<Book> books, int index); // Функция для удаления книги по индексу
vector<Book> editBook(vector<Book> books, int index, int field); // Функция для редактирования книги
vector<Book> sortBooks(vector<Book> books, int field); // Функция для сортировки книг по выбранному полю
void writeAndPrintFile(const vector<Book>& books, const string& filename); // Функция для записи и вывода файла с оформлением
void writeAndPrintFileWithoutFormatting(const vector<Book>& books, const string& filename); // Функция для записи и вывода файла без оформления
void writeAndReadBinaryFile(const vector<Book>& books, const string& filename); // Функция для записи и чтения бинарного файла

#endif // BOOK_H
