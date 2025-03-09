#include "Book.h"
#include <ctime>
#include<Windows.h>

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
    cout << setw(6) << left << "№" << " | " // Увеличиваем ширину столбца "№" до 6 символов
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

        cout << setw(6) << left << i + 1 << " | " // Увеличиваем ширину столбца "№" до 6 символов
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

    // Очистка буфера ввода перед использованием getline
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
   

    cout << "Введите автора: ";
    cin.ignore(); // Очистка буфера перед первым getline
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

    // Очистка буфера ввода перед использованием getline
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Введите формат издания: ";
    cin.ignore(); // Очистка буфера перед первым getline
    getline(cin, newBook.format);

    cout << "Введите тираж: ";
    cin >> newBook.circulation;

    // Очистка буфера ввода перед использованием getline
   // cin.ignore(numeric_limits<streamsize>::max(), '\n');
    /*cout << "Введите автора: ";
    cin >> newBook.author;
    cout << "Введите название: ";
    cin >> newBook.title;
    cout << "Введите издательство: ";
    cin >> newBook.publisher;
    cout << "Введите год издания: ";
    cin >> newBook.year;
    cout << "Введите цену: ";
    cin >> newBook.price;
    cout << "Введите количество страниц: ";
    cin >> newBook.pages;
    cout << "Введите формат издания: ";
    cin >> newBook.format;
    cout << "Введите тираж: ";
    cin >> newBook.circulation;*/



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
/*void searchBooks(const vector<Book>& books, const string& keyword, bool exactMatch) {
    vector<Book> foundBooks;
    for (const auto& book : books) {
        if (exactMatch) {
            if (book.author == keyword || book.title == keyword || book.publisher == keyword || book.format == keyword) {
                foundBooks.push_back(book);
            }
        }
        else {
            if (book.author.find(keyword) != string::npos || book.title.find(keyword) != string::npos ||
                book.publisher.find(keyword) != string::npos || book.format.find(keyword) != string::npos) {
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
}*/

// Функция для поиска книг по числовому полю
/*void searchBooksByNumericField(const vector<Book>& books, int field, double value, bool greaterThan) {
    vector<Book> foundBooks;
    for (const auto& book : books) {
        double fieldValue = 0;
        switch (field) {
        case 4: fieldValue = book.year; break;
        case 5: fieldValue = book.price; break;
        case 6: fieldValue = book.pages; break;
        case 8: fieldValue = book.circulation; break;
        default: break;
        }
        if ((greaterThan && fieldValue > value) || (!greaterThan && fieldValue < value)) {
            foundBooks.push_back(book);
        }
    }
    if (!foundBooks.empty()) {
        printBooks(foundBooks);
    }
    else {
        cout << "Совпадений не найдено." << endl;
    }
}*/

// Функция для поиска книг по диапазону значений
/*void searchBooksBetweenValues(const vector<Book>& books, int field, double lowerBound, double upperBound) {
    vector<Book> foundBooks;
    for (const auto& book : books) {
        double fieldValue = 0;
        switch (field) {
        case 4: fieldValue = book.year; break;
        case 5: fieldValue = book.price; break;
        case 6: fieldValue = book.pages; break;
        case 8: fieldValue = book.circulation; break;
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
}*/
//поиск книг
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

// Основная функция
int main() {
    SetConsoleCP(1251); // Установка кодовой страницы для ввода с консоли
    SetConsoleOutputCP(1251); // Установка кодовой страницы для вывода на консоль
    srand(time(0)); // Инициализация генератора случайных чисел

    vector<Book> books = {
    { { 0 }, { 0 }, "Лев Толстой", "Война и мир", "Эксмо", 1869, 500.0, 1400, "84x108/32", 5000 },
    { { 0 }, { 0 }, "Федор Достоевский", "Преступление и наказание", "Азбука", 1866, 350.0, 400, "60x90/16", 3000 },
    { { 0 }, { 0 }, "Антон Чехов", "Чайка", "Русское слово", 1896, 250.0, 150, "70x100/32", 2000 },
    { { 0 }, { 0 }, "Михаил Булгаков", "Мастер и Маргарита", "АСТ", 1967, 450.0, 384, "84x108/32", 6000 },
    { { 0 }, { 0 }, "Александр Пушкин", "Евгений Онегин", "Наука", 1833, 300.0, 256, "84x108/32", 4000 },
    { { 0 }, { 0 }, "Борис Пастернак", "Доктор Живаго", "Издательство Ивана Лимбаха", 1957, 600.0, 480, "60x90/16", 3000 },
    { { 0 }, { 0 }, "Исаак Бабель", "Конармия", "Современник", 1926, 250.0, 200, "70x100/32", 1500 },
    { { 0 }, { 0 }, "Владимир Набоков", "Лолита", "АСТ", 1955, 400.0, 368, "84x108/32", 5000 },
    { { 0 }, { 0 }, "Максим Горький", "Мать", "Наука", 1906, 280.0, 320, "70x100/32", 3500 },
    { { 0 }, { 0 }, "Константин Паустовский", "Золотая роза", "Художественная литература", 1943, 450.0, 400, "84x108/32", 2500 },
    { { 0 }, { 0 }, "Алексей Толстой", "Петр Первый", "АСТ", 1934, 550.0, 600, "84x108/32", 3000 },
    { { 0 }, { 0 }, "Рэй Брэдбери", "451 градус по Фаренгейту", "АСТ", 1953, 350.0, 256, "84x108/32", 4000 },
    { { 0 }, { 0 }, "Джордж Оруэлл", "1984", "Азбука", 1949, 400.0, 368, "84x108/32", 5000 },
    { { 0 }, { 0 }, "Харуки Мураками", "Норвежский лес", "Эксмо", 1987, 500.0, 400, "84x108/32", 4500 },
    { { 0 }, { 0 }, "Джейн Остин", "Гордость и предубеждение", "Наука", 1813, 300.0, 320, "70x100/32", 2500 },
    { { 0 }, { 0 }, "Марк Твен", "Приключения Тома Сойера", "АСТ", 1876, 350.0, 400, "84x108/32", 3000 },
    { { 0 }, { 0 }, "Габриэль Гарсиа Маркес", "Сто лет одиночества", "Эксмо", 1967, 600.0, 500, "84x108/32", 2000 },
    { { 0 }, { 0 }, "Фрэнсис Скотт Фицджеральд", "Великий Гэтсби", "Азбука", 1925, 400.0, 240, "84x108/32", 3500 },
    { { 0 }, { 0 }, "Кен Кизи", "Пролетая над гнездом кукушки", "АСТ", 1962, 450.0, 400, "84x108/32", 3000 },
    { { 0 }, { 0 }, "Джон Стейнбек", "Гроздья гнева", "АСТ", 1939, 500.0, 480, "84x108/32", 2500 },
    { { 0 }, { 0 }, "Кормак Маккарти", "Старик и море", "Эксмо", 1952, 350.0, 128, "70x100/32", 3000 },
    { { 0 }, { 0 }, "Чак Паланик", "Бойцовский клуб", "Азбука", 1996, 400.0, 256, "84x108/32", 4500 },
    { { 0 }, { 0 }, "Джоджо Мойес", "До встречи с тобой", "Эксмо", 2012, 450.0, 368, "84x108/32", 3000 },
    { { 0 }, { 0 }, "Сара Уотерс", "Тонкая работа", "АСТ", 2006, 500.0, 480, "84x108/32", 2000 },
    { { 0 }, { 0 }, "Гарпер Ли", "Убить пересмешника", "Наука", 1960, 400.0, 336, "84x108/32", 3000 },
    };

    // Генерация случайных дат для каждой книги (от 1950 до 2024 года)
    for (auto& book : books) {
        book.startDate.tm_mday = 1 + rand() % 28; // День от 1 до 28
        book.startDate.tm_mon = rand() % 12;      // Месяц от 0 до 11
        book.startDate.tm_year = 50 + rand() % 75; // Год от 1950 до 2024

        book.endDate.tm_mday = 1 + rand() % 28;
        book.endDate.tm_mon = rand() % 12;
        book.endDate.tm_year = book.startDate.tm_year + 1 + rand() % 2; // Окончание через 1-2 года
    }

    int choice;
    while (true) {
        nach(); // Вывод меню
        cin >> choice;

        switch (choice) {
        case 1: {
            int subChoice;
            cout << "Задание 1. \n\t 1) Просмотр всех записей; \n\t 2) Удаление записи по номеру;\n\t 3) Добавление новой записи.\n";
            cout << "Введите номер подзадания: ";
            cin >> subChoice;

            switch (subChoice) {
            case 1:
                printBooks(books);
                break;
            case 2: {
                int index;
                cout << "Введите номер записи для удаления: ";
                cin >> index;
                books = deleteBook(books, index - 1);
                break;
            }
            case 3:
                books = addBook(books);
                break;
            default:
                cout << "Неверный выбор!\n";
            }
            break;
        }
        case 2: {
            int subChoice;
            cout << "Задание 2. \n\t 1) Редактирование записи;\n\t 2) Сортировка по полю.\n";
            cout << "Введите номер подзадания: ";
            cin >> subChoice;

            switch (subChoice) {
            case 1: {
                int index, field;
                cout << "Введите номер записи: ";
                cin >> index;
                cout << "Введите номер поля (1-10): ";
                cin >> field;
                books = editBook(books, index - 1, field);
                break;
            }
            case 2: {
                int field;
                cout << "Введите номер поля для сортировки (1-10): ";
                cin >> field;
                books = sortBooks(books, field);
                break;
            }
            default:
                cout << "Неверный выбор!\n";
            }
            break;
        }
         /* {
            int subChoice;
            cout << "Задание 3. \n\t 1) Поиск записей по условиям.\n";
            cout << "Введите номер подзадания: ";
            cin >> subChoice;

            switch (subChoice) {
            case 1: {
                string keyword;
                bool exactMatch;
                cout << "Введите ключевое слово: ";
                cin >> keyword;
                cout << "Точное совпадение? (1 - да, 0 - нет): ";
                cin >> exactMatch;
                searchBooks(books, keyword, exactMatch);
                break;
            }
            default:
                cout << "Неверный выбор!\n";
            }
            break;
        }*/

        case 3: {
            int subChoice;
            cout << "Задание 3. \n\t 1) Поиск записей по условиям.\n";
            cout << "Введите номер подзадания: ";
            cin >> subChoice;

            switch (subChoice) {
            case 1: {
                int fieldType;
                cout << "Выберите тип поля для поиска:\n"
                    << "1) Строковое поле\n"
                    << "2) Числовое поле\n"
                    << "3) Поле с датой\n";
                cin >> fieldType;

                if (fieldType == 1) {
                    string keyword;
                    bool exactMatch;
                    int field;
                    cout << "Введите номер строкового поля (1 - автор, 2 - название, 3 - издательство, 4 - формат): ";
                    cin >> field;
                    cout << "Введите ключевое слово: ";
                    cin >> keyword;
                    cout << "Точное совпадение? (1 - да, 0 - нет): ";
                    cin >> exactMatch;
                    searchBooks(books, keyword, exactMatch, field);
                }
                else if (fieldType == 2) {
                    int field, condition;
                    double value;
                    cout << "Введите номер числового поля (1 - год, 2 - цена, 3 - страницы, 4 - тираж): ";
                    cin >> field;
                    cout << "Введите условие (1 - равно, 2 - меньше, 3 - больше): ";
                    cin >> condition;
                    cout << "Введите значение: ";
                    cin >> value;
                    searchBooksByNumericField(books, field, value, condition);
                }
                else if (fieldType == 3) {
                    int field, condition;
                    tm date = {};
                    cout << "Введите номер поля с датой (1 - начало продаж, 2 - конец продаж): ";
                    cin >> field;
                    cout << "Введите условие (1 - после даты, 2 - до даты): ";
                    cin >> condition;
                    cout << "Введите дату (дд.мм.гггг): ";
                    int day, month, year;
                    char dot;
                    cin >> day >> dot >> month >> dot >> year;
                    date.tm_mday = day;
                    date.tm_mon = month - 1;
                    date.tm_year = year - 1900;
                    searchBooksByDateField(books, field, date, condition == 1);
                }
                break;
            }
            default:
                cout << "Неверный выбор!\n";
            }
            break;
        }
        default:
            cout << "Неверный выбор!\n";
        }
    }

    return 0;
}



/*#include "Book.h"

// Функция для вывода всех книг
void PrintBooks(vector<book> books) {
    cout << setw(20) << left << "Автор" << " | "
        << setw(30) << "Название" << " | "
        << setw(20) << "Издательство" << " | "
        << setw(10) << "Год" << " | "
        << setw(10) << "Цена" << " | "
        << setw(10) << "Страницы" << " | "
        << setw(10) << "Формат" << " | "
        << setw(10) << "Тираж" << " | "
        << setw(15) << "Начало продаж" << " | "
        << setw(15) << "Конец продаж" << " | " << endl;

    for (int i = 0; i < books.size(); i++) 
    {
        char start_date[11], end_date[11];
        // Проверка инициализации дат
        if (books[i].start_sales.tm_year == 0 || books[i].end_sales.tm_year == 0) {
            cout << "Ошибка: даты не инициализированы для книги " << books[i].title << endl;
            continue;
        }

        strftime(start_date, 11, "%d.%m.%Y", &books[i].start_sales);
        strftime(end_date, 11, "%d.%m.%Y", &books[i].end_sales);

        cout << setw(20) << left << books[i].author << " | "
            << setw(30) << books[i].title << " | "
            << setw(20) << books[i].publisher << " | "
            << setw(10) << books[i].year << " | "
            << setw(10) << books[i].price << " | "
            << setw(10) << books[i].pages << " | "
            << setw(10) << books[i].format << " | "
            << setw(10) << books[i].circulation << " | "
            << setw(15) << start_date << " | "
            << setw(15) << end_date << " | " << endl;
    }
}

// Функция для добавления новой книги
vector<book> AddBook(vector<book> books) {
    book new_book;
    cout << "Введите ФИО автора: "; cin >> new_book.author;
    cout << "Введите название книги: "; cin >> new_book.title;
    cout << "Введите издательство: "; cin >> new_book.publisher;
    cout << "Введите год издания: "; cin >> new_book.year;
    cout << "Введите цену: "; cin >> new_book.price;
    cout << "Введите количество страниц: "; cin >> new_book.pages;
    cout << "Введите формат издания: "; cin >> new_book.format;
    cout << "Введите тираж: "; cin >> new_book.circulation;

   /* cout << "Введите дату начала продаж (дд.мм.гггг): ";
    int day, month, year;
    char dot;
    cin >> day >> dot >> month >> dot >> year;
    new_book.start_sales.tm_mday = day;
    new_book.start_sales.tm_mon = month - 1;
    new_book.start_sales.tm_year = year - 1900;

    cout << "Введите дату окончания продаж (дд.мм.гггг): ";
    cin >> day >> dot >> month >> dot >> year;
    new_book.end_sales.tm_mday = day;
    new_book.end_sales.tm_mon = month - 1;
    new_book.end_sales.tm_year = year - 1900;*/

    // Инициализация start_sales
   /* new_book.start_sales = {0}; // Обнуляем все поля структуры tm
    cout << "Введите дату начала продаж (дд.мм.гггг): ";
    int day, month, year;
    char dot;
    cin >> day >> dot >> month >> dot >> year;
    new_book.start_sales.tm_mday = day;
    new_book.start_sales.tm_mon = month - 1; // Месяц (0-11)
    new_book.start_sales.tm_year = year - 1900; // Год (год - 1900)

    // Инициализация end_sales
    new_book.end_sales = {0}; // Обнуляем все поля структуры tm
    cout << "Введите дату окончания продаж (дд.мм.гггг): ";
    cin >> day >> dot >> month >> dot >> year;
    new_book.end_sales.tm_mday = day;
    new_book.end_sales.tm_mon = month - 1; // Месяц (0-11)
    new_book.end_sales.tm_year = year - 1900; // Год (год - 1900)



    books.push_back(new_book);
    return books;
}

// Функция для редактирования книги
vector<book> EditBook(vector<book> books, int index, int field) {
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
        books[index].start_sales = { 0 }; // Обнуляем все поля структуры tm
        int day, month, year;
        char dot;
        cin >> day >> dot >> month >> dot >> year;
        books[index].start_sales.tm_mday = day;
        books[index].start_sales.tm_mon = month - 1;
        books[index].start_sales.tm_year = year - 1900;
        break;
    }
    case 10: {
        books[index].end_sales = { 0 }; // Обнуляем все поля структуры tm
        int day, month, year;
        char dot;
        cin >> day >> dot >> month >> dot >> year;
        books[index].end_sales.tm_mday = day;
        books[index].end_sales.tm_mon = month - 1;
        books[index].end_sales.tm_year = year - 1900;
        break;
    }
    }
    return books;
}

// Функция для сортировки книг
vector<book> SortBooks(vector<book> books, int field) {
    switch (field) {
    case 1: // Сортировка по автору
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return a.author < b.author;
            });
        break;
    case 2: // Сортировка по названию
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return a.title < b.title;
            });
        break;
    case 3: // Сортировка по издательству
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return a.publisher < b.publisher;
            });
        break;
    case 4: // Сортировка по году издания
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return a.year < b.year;
            });
        break;
    case 5: // Сортировка по цене
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return a.price < b.price;
            });
        break;
    case 6: // Сортировка по количеству страниц
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return a.pages < b.pages;
            });
        break;
    case 7: // Сортировка по формату
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return a.format < b.format;
            });
        break;
    case 8: // Сортировка по тиражу
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return a.circulation < b.circulation;
            });
        break;
    /*case 9: // Сортировка по дате начала продаж
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return mktime(&a.start_sales) < mktime(&b.start_sales);
            });
        break;
    case 10: // Сортировка по дате окончания продаж
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            return mktime(&a.end_sales) < mktime(&b.end_sales);
            });
        break;*/
    /*case 9: // Сортировка по дате начала продаж
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            tm a_tm = a.start_sales; // Создаем неконстантную копию
            tm b_tm = b.start_sales; // Создаем неконстантную копию
            return mktime(&a_tm) < mktime(&b_tm);
            });
        break;
    case 10: // Сортировка по дате окончания продаж
        sort(books.begin(), books.end(), [](const book& a, const book& b) {
            tm a_tm = a.end_sales; // Создаем неконстантную копию
            tm b_tm = b.end_sales; // Создаем неконстантную копию
            return mktime(&a_tm) < mktime(&b_tm);
            });
        break;
    }
    return books;
}

// Функция для инициализации списка книг
vector<book> InitializeBooks() {
    vector<book> books = {
        {"Лев Толстой", "Война и мир", "Эксмо", 1869, 500.0, 1400, "84x108/32", 5000, {0}, {0}},
{"Федор Достоевский", "Преступление и наказание", "Азбука", 1866, 350.0, 400, "60x90/16", 3000, {0}, {0}},
{"Антон Чехов", "Чайка", "Русское слово", 1896, 250.0, 150, "70x100/32", 2000, {0}, {0}},
{"Михаил Булгаков", "Мастер и Маргарита", "АСТ", 1967, 450.0, 384, "84x108/32", 6000, {0}, {0}},
{"Александр Пушкин", "Евгений Онегин", "Наука", 1833, 300.0, 256, "84x108/32", 4000, {0}, {0}},
{"Борис Пастернак", "Доктор Живаго", "Издательство Ивана Лимбаха", 1957, 600.0, 480, "60x90/16", 3000, {0}, {0}},
{"Исаак Бабель", "Конармия", "Современник", 1926, 250.0, 200, "70x100/32", 1500, {0}, {0}},
{"Владимир Набоков", "Лолита", "АСТ", 1955, 400.0, 368, "84x108/32", 5000, {0}, {0}},
{"Максим Горький", "Мать", "Наука", 1906, 280.0, 320, "70x100/32", 3500, {0}, {0}},
{"Константин Паустовский", "Золотая роза", "Художественная литература", 1943, 450.0, 400, "84x108/32", 2500, {0}, {0}},
{"Алексей Толстой", "Петр Первый", "АСТ", 1934, 550.0, 600, "84x108/32", 3000, {0}, {0}},
{"Рэй Брэдбери", "451 градус по Фаренгейту", "АСТ", 1953, 350.0, 256, "84x108/32", 4000, {0}, {0}},
{"Джордж Оруэлл", "1984", "Азбука", 1949, 400.0, 368, "84x108/32", 5000, {0}, {0}},
{"Харуки Мураками", "Норвежский лес", "Эксмо", 1987, 500.0, 400, "84x108/32", 4500, {0}, {0}},
{"Джейн Остин", "Гордость и предубеждение", "Наука", 1813, 300.0, 320, "70x100/32", 2500, {0}, {0}},
{"Марк Твен", "Приключения Тома Сойера", "АСТ", 1876, 350.0, 400, "84x108/32", 3000, {0}, {0}},
{"Габриэль Гарсиа Маркес", "Сто лет одиночества", "Эксмо", 1967, 600.0, 500, "84x108/32", 2000, {0}, {0}},
{"Фрэнсис Скотт Фицджеральд", "Великий Гэтсби", "Азбука", 1925, 400.0, 240, "84x108/32", 3500, {0}, {0}},
{"Кен Кизи", "Пролетая над гнездом кукушки", "АСТ", 1962, 450.0, 400, "84x108/32", 3000, {0}, {0}},
{"Джон Стейнбек", "Гроздья гнева", "АСТ", 1939, 500.0, 480, "84x108/32", 2500, {0}, {0}},
{"Кормак Маккарти", "Старик и море", "Эксмо", 1952, 350.0, 128, "70x100/32", 3000, {0}, {0}},
{"Чак Паланик", "Бойцовский клуб", "Азбука", 1996, 400.0, 256, "84x108/32", 4500, {0}, {0}},
{"Джоджо Мойес", "До встречи с тобой", "Эксмо", 2012, 450.0, 368, "84x108/32", 3000, {0}, {0}},
{"Сара Уотерс", "Тонкая работа", "АСТ", 2006, 500.0, 480, "84x108/32", 2000, {0}, {0}},
{"Гарпер Ли", "Убить пересмешника", "Наука", 1960, 400.0, 336, "84x108/32", 3000, {0}, {0}},
    };

    // Генерация случайных дат начала и окончания продаж
    /*for (int i = 0; i < books.size(); i++) {
        books[i].start_sales.tm_mday = 1 + rand() % 28;
        books[i].start_sales.tm_mon = 1 + rand() % 12;
        books[i].start_sales.tm_year = 2020 + rand() % 5 - 1900;

        books[i].end_sales.tm_mday = 1 + rand() % 28;
        books[i].end_sales.tm_mon = 1 + rand() % 12;
        books[i].end_sales.tm_year = 2021 + rand() % 5 - 1900;
    }*/
    // Генерация случайных дат начала и окончания продаж
   /* for (int i = 0; i < books.size(); i++) {
        // Инициализация start_sales
        books[i].start_sales = { 0 }; // Обнуляем все поля структуры tm
        books[i].start_sales.tm_mday = 1 + rand() % 28;
        books[i].start_sales.tm_mon = 1 + rand() % 12;
        books[i].start_sales.tm_year = 2020 + rand() % 5 - 1900;

        // Инициализация end_sales
        books[i].end_sales = { 0 }; // Обнуляем все поля структуры tm
        books[i].end_sales.tm_mday = 1 + rand() % 28;
        books[i].end_sales.tm_mon = 1 + rand() % 12;
        books[i].end_sales.tm_year = 2021 + rand() % 5 - 1900;
    }

    return books;
}

int main()
{
    setlocale(LC_ALL, "RU");
    vector<book> books = InitializeBooks();

    int choice;
    while (true) {
        cout << "1. Просмотр всех книг\n";
        cout << "2. Добавить книгу\n";
        cout << "3. Редактировать книгу\n";
        cout << "4. Сортировать книги\n";
        cout << "5. Выход\n";
        cout << "Введите ваш выбор: ";
        cin >> choice;

        switch (choice) {
        case 1: PrintBooks(books); break;
        case 2: books = AddBook(books); break;
        case 3: {
            int index, field;
            cout << "Введите номер книги для редактирования: ";
            cin >> index;
            cout << "Введите номер поля для редактирования (1-10): ";
            cin >> field;
            books = EditBook(books, index - 1, field);
            break;
        }
        case 4: {
            int field;
            cout << "Введите номер поля для сортировки (1-10): ";
            cin >> field;
            books = SortBooks(books, field);
            break;
        }
        case 5: return 0;
        default: cout << "Неверный выбор!\n";
        }
    }

    return 0;
}
*/

































