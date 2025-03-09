#include "Book.h"
#include <ctime>
#include <Windows.h>
#include <sstream>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

// ������� ��� ������ ����
void nach() {
    cout << endl;
    cout << "������������ ������ �2." << "\n\n";
    cout << "������� 1. \n\t 1) �������� ���� �������; \n\t 2) �������� ������ �� ������, ��������� �������������;\n\t 3) ���������� ����� ������ � ����� �������, �������� ������ ������ ������������ � ����������.\n\n������� 2.\n\t 1) �������������� ���� ������ �������������, ��� ����� ������ � ���� ������ ������ ������� ������������;\n\t 2) ���������� ���� �� �����������.\n\n������� 3.\n\t 1) ����� ������� �� ���������� ��������\n";
    cout << "\n������� ����� �������: ";
}

// ������� ��� ������ ������ ����
void printBooks(const vector<Book>& books) {
    // ��������� �������
    cout << setw(6) << left << "�" << " | "
        << setw(26) << "�����" << " | "
        << setw(30) << "��������" << " | "
        << setw(26) << "������������" << " | "
        << setw(10) << "���" << " | "
        << setw(10) << "����" << " | "
        << setw(10) << "��������" << " | "
        << setw(15) << "������" << " | "
        << setw(10) << "�����" << " | "
        << setw(15) << "������ ������" << " | "
        << setw(15) << "����� ������" << " | " << endl;

    // ����� ������
    for (size_t i = 0; i < books.size(); ++i) {
        char startDate[11], endDate[11];
        strftime(startDate, 11, "%d.%m.%Y", &books[i].startDate);
        strftime(endDate, 11, "%d.%m.%Y", &books[i].endDate);

        cout << setw(6) << left << i + 1 << " | "
            << setw(26) << books[i].author << " | "
            << setw(30) << books[i].title << " | "
            << setw(26) << books[i].publisher << " | "
            << setw(10) << books[i].year << " | "
            << setw(10) << books[i].price << " | "
            << setw(10) << books[i].pages << " | "
            << setw(15) << books[i].format << " | "
            << setw(10) << books[i].circulation << " | "
            << setw(15) << startDate << " | "
            << setw(15) << endDate << " | " << endl;
    }
}

// ������� ��� ���������� ����� �����
vector<Book> addBook(vector<Book> books) {
    Book newBook;

    cout << "������� ������: ";
    cin.ignore();
    getline(cin, newBook.author);

    cout << "������� ��������: ";
    getline(cin, newBook.title);

    cout << "������� ������������: ";
    getline(cin, newBook.publisher);

    cout << "������� ��� �������: ";
    cin >> newBook.year;

    cout << "������� ����: ";
    cin >> newBook.price;

    cout << "������� ���������� �������: ";
    cin >> newBook.pages;

    cout << "������� ������ �������: ";
    cin.ignore();
    getline(cin, newBook.format);

    cout << "������� �����: ";
    cin >> newBook.circulation;

    // ���� ���� ������ � ��������� ������
    cout << "������� ���� ������ ������ (��.��.����): ";
    int day, month, year;
    char dot;
    cin >> day >> dot >> month >> dot >> year;
    newBook.startDate.tm_mday = day;
    newBook.startDate.tm_mon = month - 1;
    newBook.startDate.tm_year = year - 1900;

    cout << "������� ���� ��������� ������ (��.��.����): ";
    cin >> day >> dot >> month >> dot >> year;
    newBook.endDate.tm_mday = day;
    newBook.endDate.tm_mon = month - 1;
    newBook.endDate.tm_year = year - 1900;

    books.push_back(newBook);
    return books;
}

// ������� ��� �������� ����� �� �������
vector<Book> deleteBook(vector<Book> books, int index) {
    if (index >= 0 && index < books.size()) {
        books.erase(books.begin() + index);
    }
    return books;
}

// ������� ��� �������������� �����
vector<Book> editBook(vector<Book> books, int index, int field) {
    if (index < 0 || index >= books.size()) {
        cout << "�������� ������ �����!" << endl;
        return books;
    }

    cout << "������� ����� ��������: ";
    switch (field) {
    case 1: cin >> books[index].author; break;
    case 2: cin >> books[index].title; break;
    case 3: cin >> books[index].publisher; break;
    case 4: cin >> books[index].year; break;
    case 5: cin >> books[index].price; break;
    case 6: cin >> books[index].pages; break;
    case 7: cin >> books[index].format; break;
    case 8: cin >> books[index].circulation; break;
    case 9: {
        int day, month, year;
        char dot;
        cin >> day >> dot >> month >> dot >> year;
        books[index].startDate.tm_mday = day;
        books[index].startDate.tm_mon = month - 1;
        books[index].startDate.tm_year = year - 1900;
        break;
    }
    case 10: {
        int day, month, year;
        char dot;
        cin >> day >> dot >> month >> dot >> year;
        books[index].endDate.tm_mday = day;
        books[index].endDate.tm_mon = month - 1;
        books[index].endDate.tm_year = year - 1900;
        break;
    }
    default: cout << "�������� ����� ����!" << endl;
    }
    return books;
}

// ������� ��� ���������� ���� �� ���������� ����
vector<Book> sortBooks(vector<Book> books, int field) {
    switch (field) {
    case 1: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.author < b.author; }); break;
    case 2: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.title < b.title; }); break;
    case 3: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.publisher < b.publisher; }); break;
    case 4: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.year < b.year; }); break;
    case 5: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.price < b.price; }); break;
    case 6: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.pages < b.pages; }); break;
    case 7: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.format < b.format; }); break;
    case 8: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.circulation < b.circulation; }); break;
    case 9: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return mktime(const_cast<tm*>(&a.startDate)) < mktime(const_cast<tm*>(&b.startDate)); }); break;
    case 10: sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return mktime(const_cast<tm*>(&a.endDate)) < mktime(const_cast<tm*>(&b.endDate)); }); break;
    default: cout << "�������� ����� ����!" << endl;
    }
    return books;
}

// ������� ��� ������ ���� �� ���������� ����
void searchBooks(const vector<Book>& books, const string& keyword, bool exactMatch, int field) {
    vector<Book> foundBooks;
    for (const auto& book : books) {
        string fieldValue;
        switch (field) {
        case 1: fieldValue = book.author; break;
        case 2: fieldValue = book.title; break;
        case 3: fieldValue = book.publisher; break;
        case 4: fieldValue = book.format; break;
        default: break;
        }

        if (exactMatch) {
            if (fieldValue == keyword) {
                foundBooks.push_back(book);
            }
        }
        else {
            if (fieldValue.find(keyword) != string::npos) {
                foundBooks.push_back(book);
            }
        }
    }
    if (!foundBooks.empty()) {
        printBooks(foundBooks);
    }
    else {
        cout << "���������� �� �������." << endl;
    }
}

// ������� ��� ������ ���� �� ��������� ����
void searchBooksByNumericField(const vector<Book>& books, int field, double value, int condition) {
    vector<Book> foundBooks;
    for (const auto& book : books) {
        double fieldValue = 0;
        switch (field) {
        case 1: fieldValue = book.year; break;
        case 2: fieldValue = book.price; break;
        case 3: fieldValue = book.pages; break;
        case 4: fieldValue = book.circulation; break;
        default: break;
        }

        switch (condition) {
        case 1: if (fieldValue == value) foundBooks.push_back(book); break; // ���������
        case 2: if (fieldValue < value) foundBooks.push_back(book); break;  // ������
        case 3: if (fieldValue > value) foundBooks.push_back(book); break;  // ������
        default: break;
        }
    }
    if (!foundBooks.empty()) {
        printBooks(foundBooks);
    }
    else {
        cout << "���������� �� �������." << endl;
    }
}

// ������� ��� ������ ���� �� ��������� ��������
void searchBooksBetweenValues(const vector<Book>& books, int field, double lowerBound, double upperBound) {
    vector<Book> foundBooks;
    for (const auto& book : books) {
        double fieldValue = 0;
        switch (field) {
        case 1: fieldValue = book.year; break;
        case 2: fieldValue = book.price; break;
        case 3: fieldValue = book.pages; break;
        case 4: fieldValue = book.circulation; break;
        default: break;
        }

        if (fieldValue >= lowerBound && fieldValue <= upperBound) {
            foundBooks.push_back(book);
        }
    }
    if (!foundBooks.empty()) {
        printBooks(foundBooks);
    }
    else {
        cout << "���������� �� �������." << endl;
    }
}

// ������� ��� ������ ���� �� ����
void searchBooksByDateField(const vector<Book>& books, int field, tm date, bool greaterThan) {
    vector<Book> foundBooks;
    for (const auto& book : books) {
        tm fieldDate = (field == 1) ? book.startDate : book.endDate;
        time_t fieldTime = mktime(&fieldDate);
        time_t searchTime = mktime(&date);

        if ((greaterThan && fieldTime > searchTime) || (!greaterThan && fieldTime < searchTime)) {
            foundBooks.push_back(book);
        }
    }
    if (!foundBooks.empty()) {
        printBooks(foundBooks);
    }
    else {
        cout << "���������� �� �������." << endl;
    }
}

// ������� ��� ������ ���� �� ��������� ���
void searchBooksBetweenDates(const vector<Book>& books, int field, tm startDate, tm endDate) {
    vector<Book> foundBooks;
    for (const auto& book : books) {
        tm fieldDate = (field == 1) ? book.startDate : book.endDate;
        time_t fieldTime = mktime(&fieldDate);
        time_t startTime = mktime(&startDate);
        time_t endTime = mktime(&endDate);

        if (fieldTime >= startTime && fieldTime <= endTime) {
            foundBooks.push_back(book);
        }
    }
    if (!foundBooks.empty()) {
        printBooks(foundBooks);
    }
    else {
        cout << "���������� �� �������." << endl;
    }
}

// ������� ��� ������ � ��������� ���� � �����������
void writeFormattedToFile(const vector<Book>& books, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return;
    }

    // ��������� �������
    file << setw(6) << left << "�" << " | "
        << setw(26) << "�����" << " | "
        << setw(30) << "��������" << " | "
        << setw(26) << "������������" << " | "
        << setw(10) << "���" << " | "
        << setw(10) << "����" << " | "
        << setw(10) << "��������" << " | "
        << setw(15) << "������" << " | "
        << setw(10) << "�����" << " | "
        << setw(15) << "������ ������" << " | "
        << setw(15) << "����� ������" << " | " << endl;

    // ������ ������
    for (size_t i = 0; i < books.size(); i++) 
    {
        char startDate[11], endDate[11];
        strftime(startDate, 11, "%d.%m.%Y", &books[i].startDate);//����������� ���� �� ��������� tm � ������ ������� "��.��.����"
        strftime(endDate, 11, "%d.%m.%Y", &books[i].endDate);

        file << setw(6) << left << i + 1 << " | "
            << setw(26) << books[i].author << " | "
            << setw(30) << books[i].title << " | "
            << setw(26) << books[i].publisher << " | "
            << setw(10) << books[i].year << " | "
            << setw(10) << books[i].price << " | "
            << setw(10) << books[i].pages << " | "
            << setw(15) << books[i].format << " | "
            << setw(10) << books[i].circulation << " | "
            << setw(15) << startDate << " | "
            << setw(15) << endDate << " | " << endl;
    }

    file.close();//��������� ���� ����� ������
}

// ������� ��� ������ � ��������� ���� ��� ����������
void writeUnformattedToFile(const vector<Book>& books, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return;
    }

    for (const auto& book : books) {
        char startDate[11], endDate[11];
        strftime(startDate, 11, "%d.%m.%Y", &book.startDate);
        strftime(endDate, 11, "%d.%m.%Y", &book.endDate);

        file << book.author << ";"
            << book.title << ";"
            << book.publisher << ";"
            << book.year << ";"
            << book.price << ";"
            << book.pages << ";"
            << book.format << ";"
            << book.circulation << ";"
            << startDate << ";"
            << endDate << endl;
    }

    file.close();
}

// ������� ��� ������ �� ���������� ����� � ����������� (���������������)
void readFormattedFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

// ������� ��� �������������� ���� �� ���������� ������� � ����������� ������ "��.��.����"
bool parseDate(const string& dateStr, tm& date) { //������� ����� ��� ������ ������ dateStr � ���������� ��� �������� ����������� ����
    istringstream ss(dateStr);
    char dot1, dot2;
    int day, month, year;

    // �������������� ���� �� ���������� ������� � ����������� ������
    ss >> day >> dot1 >> month >> dot2 >> year;

    // �������� �� ������������ �������
    if (dot1 != '.' || dot2 != '.' || ss.fail()) {
        return false; // ������������ ������ ����
    }

    // ���������� ��������� tm
    date.tm_mday = day;
    date.tm_mon = month - 1; // ������ � `tm` ���������� � 0
    date.tm_year = year - 1900; // ��� � `tm` ������������� � 1900

    return true;
}

// ������� ��� ������ �� ���������� ����� ��� ���������� � ������ ��������
vector<Book> readUnformattedFromFile(const string& filename) {
    ifstream file(filename);
    vector<Book> books;

    if (!file.is_open()) {
        cerr << "������ �������� ����� ��� ������!" << endl;
        return books;
    }

    string line;
    while (getline(file, line)) {
        Book book;
        size_t pos = 0;
        string token;

        // ������-������� ��� ���������� �������� ����� ������� � �������
        auto getNextToken = [&]() {
            pos = line.find(';');
            if (pos == string::npos) {
                token = line;
                line.clear();
            }
            else {
                token = line.substr(0, pos);
                line.erase(0, pos + 1);
            }
            return token;
            };

        // ���������� ������, ���������� ��������� Book
        book.author = getNextToken();
        book.title = getNextToken();
        book.publisher = getNextToken();
        book.year = stoi(getNextToken());
        book.price = stod(getNextToken());
        book.pages = stoi(getNextToken());
        book.format = getNextToken();
        book.circulation = stoi(getNextToken());

        // ��������� ���
        string startDateStr = getNextToken();
        string endDateStr = getNextToken();

        // �������������� ���� ������ ������ �� ���������� �������
        if (!parseDate(startDateStr, book.startDate)) {
            cerr << "������ �������� ���� ������ ������: " << startDateStr << endl;
            continue; // ���������� ������������ ������
        }

        // �������������� ���� ��������� ������ �� ���������� ������� 
        if (!parseDate(endDateStr, book.endDate)) {
            cerr << "������ �������� ���� ��������� ������: " << endDateStr << endl;
            continue; // ���������� ������������ ������
        }

        books.push_back(book);
    }

    file.close();
    return books;
}

void printBooksUnformatted(const vector<Book>& books) {
    for (const auto& book : books) {
        char startDate[11], endDate[11];
        strftime(startDate, 11, "%d.%m.%Y", &book.startDate);
        strftime(endDate, 11, "%d.%m.%Y", &book.endDate);

        cout << book.author << ";"
            << book.title << ";"
            << book.publisher << ";"
            << book.year << ";"
            << book.price << ";"
            << book.pages << ";"
            << book.format << ";"
            << book.circulation << ";"
            << startDate << ";"
            << endDate << endl;
    }
}
// ������� ��� ������ ������� �������� � �������� ����
void writeToBinaryFile(const vector<Book>& books, const string& filename) {
    ofstream file(filename, ios::binary);
    if (!file.is_open()) {
        cerr << "������ �������� ��������� ����� ��� ������!" << endl;
        return;
    }

    for (const auto& book : books) {
        file.write(reinterpret_cast<const char*>(&book), sizeof(Book));
    }

    file.close();
}

// ������� ��� ������ ������� �������� �� ��������� �����
vector<Book> readFromBinaryFile(const string& filename) {
    ifstream file(filename, ios::binary);
    vector<Book> books;

    if (!file.is_open()) {
        cerr << "������ �������� ��������� ����� ��� ������!" << endl;
        return books;
    }

    Book book;
    while (file.read(reinterpret_cast<char*>(&book), sizeof(Book))) {
        books.push_back(book);
    }

    file.close();
    return books;
}