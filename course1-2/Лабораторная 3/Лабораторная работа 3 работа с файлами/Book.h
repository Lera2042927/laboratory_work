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
};

// ������� ��� ������ � �������
void nach(); // ������� ��� ������ ����
void printBooks(const vector<Book>& books); // ������� ��� ������ ������ ����
vector<Book> addBook(vector<Book> books); // ������� ��� ���������� ����� �����
vector<Book> deleteBook(vector<Book> books, int index); // ������� ��� �������� ����� �� �������
vector<Book> editBook(vector<Book> books, int index, int field); // ������� ��� �������������� �����
vector<Book> sortBooks(vector<Book> books, int field); // ������� ��� ���������� ���� �� ���������� ����
void writeAndPrintFile(const vector<Book>& books, const string& filename); // ������� ��� ������ � ������ ����� � �����������
void writeAndPrintFileWithoutFormatting(const vector<Book>& books, const string& filename); // ������� ��� ������ � ������ ����� ��� ����������
void writeAndReadBinaryFile(const vector<Book>& books, const string& filename); // ������� ��� ������ � ������ ��������� �����

#endif // BOOK_H
