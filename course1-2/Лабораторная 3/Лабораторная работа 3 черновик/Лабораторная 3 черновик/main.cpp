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

// Функция для вывода меню
void nach() {
    cout << endl;
    cout << "Лабораторная работа №2." << "\n\n";
    cout << "Задание 1. \n\t 1) Просмотр всех записей; \n\t 2) Удаление записи по номеру, заданному пользователем;\n\t 3) Добавление новой записи в конец массива, элементы записи вводит пользователь с клавиатуры.\n\nЗадание 2.\n\t 1) Редактирование поля записи пользователем, где номер записи и поле записи должен выбрать пользователь;\n\t 2) Сортировка поля по возрастанию.\n\nЗадание 3.\n\t 1) Поиск записей по задаваемым условиям\n";
    cout << "\nВведите номер задания: ";
}

// Функция для вывода списка книг
void printBooks(const vector<Book>& books) {
    // Заголовок таблицы
    cout << setw(6) << left << "№" << " | "
        << setw(26) << "Автор" << " | "
        << setw(30) << "Название" << " | "
        << setw(26) << "Издательство" << " | "
        << setw(10) << "Год" << " | "
        << setw(10) << "Цена" << " | "
        << setw(10) << "Страницы" << " | "
        << setw(15) << "Формат" << " | "
        << setw(10) << "Тираж" << " | "
        << setw(15) << "Начало продаж" << " | "
        << setw(15) << "Конец продаж" << " | " << endl;

    // Вывод данных
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

// Функция для добавления новой книги
vector<Book> addBook(vector<Book> books) {
    Book newBook;

    cout << "Введите автора: ";
    cin.ignore();
    getline(cin, newBook.author);

    cout << "Введите название: ";
    getline(cin, newBook.title);

    cout << "Введите издательство: ";
    getline(cin, newBook.publisher);

    cout << "Введите год издания: ";
    cin >> newBook.year;

    cout << "Введите цену: ";
    cin >> newBook.price;

    cout << "Введите количество страниц: ";
    cin >> newBook.pages;

    cout << "Введите формат издания: ";
    cin.ignore();
    getline(cin, newBook.format);

    cout << "Введите тираж: ";
    cin >> newBook.circulation;

    // Ввод даты начала и окончания продаж
    cout << "Введите дату начала продаж (дд.мм.гггг): ";
    int day, month, year;
    char dot;
    cin >> day >> dot >> month >> dot >> year;
    newBook.startDate.tm_mday = day;
    newBook.startDate.tm_mon = month - 1;
    newBook.startDate.tm_year = year - 1900;

    cout << "Введите дату окончания продаж (дд.мм.гггг): ";
    cin >> day >> dot >> month >> dot >> year;
    newBook.endDate.tm_mday = day;
    newBook.endDate.tm_mon = month - 1;
    newBook.endDate.tm_year = year - 1900;

    books.push_back(newBook);
    return books;
}

// Функция для удаления книги по индексу
vector<Book> deleteBook(vector<Book> books, int index) {
    if (index >= 0 && index < books.size()) {
        books.erase(books.begin() + index);
    }
    return books;
}

// Функция для редактирования книги
vector<Book> editBook(vector<Book> books, int index, int field) {
    if (index < 0 || index >= books.size()) {
        cout << "Неверный индекс книги!" << endl;
        return books;
    }

    cout << "Введите новое значение: ";
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
    default: cout << "Неверный номер поля!" << endl;
    }
    return books;
}

// Функция для сортировки книг по выбранному полю
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
    default: cout << "Неверный номер поля!" << endl;
    }
    return books;
}

// Функция для поиска книг по строковому полю
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
        cout << "Совпадений не найдено." << endl;
    }
}

// Функция для поиска книг по числовому полю
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
        case 1: if (fieldValue == value) foundBooks.push_back(book); break; // Равенство
        case 2: if (fieldValue < value) foundBooks.push_back(book); break;  // Меньше
        case 3: if (fieldValue > value) foundBooks.push_back(book); break;  // Больше
        default: break;
        }
    }
    if (!foundBooks.empty()) {
        printBooks(foundBooks);
    }
    else {
        cout << "Совпадений не найдено." << endl;
    }
}

// Функция для поиска книг по диапазону значений
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
        cout << "Совпадений не найдено." << endl;
    }
}

// Функция для поиска книг по дате
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
        cout << "Совпадений не найдено." << endl;
    }
}

// Функция для поиска книг по диапазону дат
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
        cout << "Совпадений не найдено." << endl;
    }
}

// Функция для записи в текстовый файл с оформлением
void writeFormattedToFile(const vector<Book>& books, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла для записи!" << endl;
        return;
    }

    // Заголовок таблицы
    file << setw(6) << left << "№" << " | "
        << setw(26) << "Автор" << " | "
        << setw(30) << "Название" << " | "
        << setw(26) << "Издательство" << " | "
        << setw(10) << "Год" << " | "
        << setw(10) << "Цена" << " | "
        << setw(10) << "Страницы" << " | "
        << setw(15) << "Формат" << " | "
        << setw(10) << "Тираж" << " | "
        << setw(15) << "Начало продаж" << " | "
        << setw(15) << "Конец продаж" << " | " << endl;

    // Запись данных
    for (size_t i = 0; i < books.size(); i++) 
    {
        char startDate[11], endDate[11];
        strftime(startDate, 11, "%d.%m.%Y", &books[i].startDate);//Преобразует дату из структуры tm в строку формата "дд.мм.гггг"
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

    file.close();//Закрываем файл после записи
}

// Функция для записи в текстовый файл без оформления
void writeUnformattedToFile(const vector<Book>& books, const string& filename) {
    ofstream file(filename);
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла для записи!" << endl;
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

// Функция для чтения из текстового файла с оформлением (последовательно)
void readFormattedFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Ошибка открытия файла для чтения!" << endl;
        return;
    }

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
}

// Функция для преобразования даты из строкового формата в стандартный формат "дд.мм.гггг"
bool parseDate(const string& dateStr, tm& date) { //Создает поток для чтения строки dateStr и переменные для хранения компонентов даты
    istringstream ss(dateStr);
    char dot1, dot2;
    int day, month, year;

    // преобразования даты из строкового формата в стандартный формат
    ss >> day >> dot1 >> month >> dot2 >> year;

    // Проверка на корректность формата
    if (dot1 != '.' || dot2 != '.' || ss.fail()) {
        return false; // Некорректный формат даты
    }

    // Заполнение структуры tm
    date.tm_mday = day;
    date.tm_mon = month - 1; // Месяцы в `tm` начинаются с 0
    date.tm_year = year - 1900; // Год в `tm` отсчитывается с 1900

    return true;
}

// Функция для чтения из текстового файла без оформления в массив структур
vector<Book> readUnformattedFromFile(const string& filename) {
    ifstream file(filename);
    vector<Book> books;

    if (!file.is_open()) {
        cerr << "Ошибка открытия файла для чтения!" << endl;
        return books;
    }

    string line;
    while (getline(file, line)) {
        Book book;
        size_t pos = 0;
        string token;

        // Лямбда-функция для извлечения значений между точками с запятой
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

        // Извлечение данных, заполнение структуры Book
        book.author = getNextToken();
        book.title = getNextToken();
        book.publisher = getNextToken();
        book.year = stoi(getNextToken());
        book.price = stod(getNextToken());
        book.pages = stoi(getNextToken());
        book.format = getNextToken();
        book.circulation = stoi(getNextToken());

        // Обработка дат
        string startDateStr = getNextToken();
        string endDateStr = getNextToken();

        // преобразования даты начала продаж из строкового формата
        if (!parseDate(startDateStr, book.startDate)) {
            cerr << "Ошибка парсинга даты начала продаж: " << startDateStr << endl;
            continue; // Пропустить некорректную запись
        }

        // преобразования даты окончания продаж из строкового формата 
        if (!parseDate(endDateStr, book.endDate)) {
            cerr << "Ошибка парсинга даты окончания продаж: " << endDateStr << endl;
            continue; // Пропустить некорректную запись
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
// Функция для записи массива структур в бинарный файл
void writeToBinaryFile(const vector<Book>& books, const string& filename) {
    ofstream file(filename, ios::binary);
    if (!file.is_open()) {
        cerr << "Ошибка открытия бинарного файла для записи!" << endl;
        return;
    }

    for (const auto& book : books) {
        file.write(reinterpret_cast<const char*>(&book), sizeof(Book));
    }

    file.close();
}

// Функция для чтения массива структур из бинарного файла
vector<Book> readFromBinaryFile(const string& filename) {
    ifstream file(filename, ios::binary);
    vector<Book> books;

    if (!file.is_open()) {
        cerr << "Ошибка открытия бинарного файла для чтения!" << endl;
        return books;
    }

    Book book;
    while (file.read(reinterpret_cast<char*>(&book), sizeof(Book))) {
        books.push_back(book);
    }

    file.close();
    return books;
}