// Лабораторная работа 3 работа с файлами.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Book.h"

// Функция для вывода меню
void nach() {
    cout << endl;
    cout << "Лабораторная работа №2." << "\n\n";
    cout << "Задание 1. \n\t 1) Просмотр всех записей; \n\t 2) Удаление записи по номеру, заданному пользователем;\n\t 3) Добавление новой записи в конец массива, элементы записи вводит пользователь с клавиатуры.\n\nЗадание 2.\n\t 1) Редактирование поля записи пользователем, где номер записи и поле записи должен выбрать пользователь;\n\t 2) Сортировка поля по возрастанию.\n\nЗадание 3.\n\t 1) Поиск записей по задаваемым условиям\n\nЗадание 4.\n\t Запись и вывод файла с оформлением\n\nЗадание 5.\n\t Запись и вывод файла без оформления\n\nЗадание 6.\n\t Запись и вывод файла в бинарном формате\n\n";
    cout << "\nВведите номер задания: ";
}

// Функция для вывода списка книг
void printBooks(const vector<Book>& books) {
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

// Функция для записи и вывода файла с оформлением
void writeAndPrintFile(const vector<Book>& books, const string& filename) {
    ofstream fileOut(filename);
    if (fileOut.is_open()) {
        fileOut << setw(6) << left << "№" << " | "
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

        for (size_t i = 0; i < books.size(); ++i) {
            char startDate[11], endDate[11];
            strftime(startDate, 11, "%d.%m.%Y", &books[i].startDate);
            strftime(endDate, 11, "%d.%m.%Y", &books[i].endDate);

            fileOut << setw(6) << left << i + 1 << " | "
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

        fileOut.close();
        cout << "Файл успешно записан с оформлением: " << filename << endl;

        ifstream fileIn(filename);
        if (fileIn.is_open()) {
            string line;
            while (getline(fileIn, line)) {
                cout << line << endl;
            }
            fileIn.close();
            cout << "Файл успешно считан и выведен: " << filename << endl;
        }
        else {
            cerr << "Не удалось открыть файл для чтения." << endl;
        }
    }
    else {
        cerr << "Не удалось открыть файл для записи." << endl;
    }
}

// Функция для записи и вывода файла без оформления
void writeAndPrintFileWithoutFormatting(const vector<Book>& books, const string& filename) {
    ofstream fileOut(filename);
    if (fileOut.is_open()) {
        for (const auto& book : books) {
            char startDate[11], endDate[11];
            strftime(startDate, 11, "%d.%m.%Y", &book.startDate);
            strftime(endDate, 11, "%d.%m.%Y", &book.endDate);

            fileOut << book.author << " " << book.title << " " << book.publisher << " "
                << book.year << " " << book.price << " " << book.pages << " "
                << book.format << " " << book.circulation << " " << startDate << " " << endDate << endl;
        }

        fileOut.close();
        cout << "Файл успешно записан без оформления: " << filename << endl;

        ifstream fileIn(filename);
        if (fileIn.is_open()) {
            char character;
            while (fileIn.get(character)) {
                cout << character;
                if (character == '\n') {
                    // Переход на новую строку
                }
            }
            fileIn.close();
            cout << "Файл успешно считан и выведен: " << filename << endl;
        }
        else {
            cerr << "Не удалось открыть файл для чтения." << endl;
        }
    }
    else {
        cerr << "Не удалось открыть файл для записи." << endl;
    }
}

// Функция для записи и чтения бинарного файла
void writeAndReadBinaryFile(const vector<Book>& books, const string& filename) {
    ofstream fileOut(filename, ios::binary);
    if (!fileOut.is_open()) {
        cerr << "Ошибка: Невозможно открыть бинарный файл для записи." << endl;
        return;
    }

    for (const auto& book : books) {
        fileOut.write(reinterpret_cast<const char*>(&book), sizeof(Book));
    }
    fileOut.close();
    cout << "Бинарный файл успешно записан: " << filename << endl;

    ifstream fileIn(filename, ios::binary);
    if (!fileIn.is_open()) {
        cerr << "Ошибка: Невозможно открыть бинарный файл для чтения." << endl;
        return;
    }

    while (true) {
        Book book;
        fileIn.read(reinterpret_cast<char*>(&book), sizeof(Book));
        if (fileIn.eof()) {
            break;
        }

        char startDate[11], endDate[11];
        strftime(startDate, 11, "%d.%m.%Y", &book.startDate);
        strftime(endDate, 11, "%d.%m.%Y", &book.endDate);

        cout << setw(6) << left << "№" << " | "
            << setw(26) << book.author << " | "
            << setw(30) << book.title << " | "
            << setw(26) << book.publisher << " | "
            << setw(10) << book.year << " | "
            << setw(10) << book.price << " | "
            << setw(10) << book.pages << " | "
            << setw(15) << book.format << " | "
            << setw(10) << book.circulation << " | "
            << setw(15) << startDate << " | "
            << setw(15) << endDate << " | " << endl;
    }

    fileIn.close();
    cout << "Бинарный файл успешно считан и выведен: " << filename << endl;
}

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
        { { 0 }, { 0 }, "Гарпер Ли", "Убить пересмешника", "Наука", 1960, 400.0, 336, "84x108/32", 3000 }
    };

    // Генерация случайных дат для каждой книги
    for (auto& book : books) {
        book.startDate.tm_mday = 1 + rand() % 28;
        book.startDate.tm_mon = rand() % 12;
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
            cout << "Задание 1. \n\t 1) Просмотр всех записей; \n\t 2) Удаление записи по номеру; \n\t 3) Добавление новой записи.\n";
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
            cout << "Задание 2. \n\t 1) Редактирование записи; \n\t 2) Сортировка по полю.\n";
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
        case 3: {
            int subChoice;
            cout << "Задание 3. Поиск записей по задаваемым условиям\n";
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
                // Здесь должна быть функция поиска, но она не реализована в этом примере
                break;
            }
            default:
                cout << "Неверный выбор!\n";
            }
            break;
        }
        case 4: {
            string filename;
            cout << "Задание 4. Запись и вывод файла с оформлением.\n";
            cout << "Введите имя файла: ";
            cin >> filename;
            writeAndPrintFile(books, filename);
            break;
        }
        case 5: {
            string filename;
            cout << "Задание 5. Запись и вывод файла без оформления.\n";
            cout << "Введите имя файла: ";
            cin >> filename;
            writeAndPrintFileWithoutFormatting(books, filename);
            break;
        }
        case 6: {
            string filename;
            cout << "Задание 6. Запись и вывод файла в бинарном формате.\n";
            cout << "Введите имя файла: ";
            cin >> filename;
            writeAndReadBinaryFile(books, filename);
            break;
        }
        default:
            cout << "Неверный выбор!\n";
        }
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
