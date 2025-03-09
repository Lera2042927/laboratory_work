﻿// Лабораторная 3 черновик.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Book.h"
#include <ctime>
#include <Windows.h>

int main() {
    SetConsoleCP(1251); // Установка кодовой страницы для ввода с консоли
    SetConsoleOutputCP(1251); // Установка кодовой страницы для вывода на консоль
    srand(time(0)); // Инициализация генератора случайных чисел

    // Инициализация массива книг
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

    nach(); // Вызов функции nach для вывода информации о программе

    int number; // Переменная для хранения выбора пользователя
    int number2; // Переменная для хранения дополнительного выбора пользователя

    cout << endl;

    int count = 1;
    while (1 != 0) {
        cin >> number; // Ввод пользователем основного выбора
        switch (number)
        {
        case 1: {
            cout << "Задание 1. \n\t 1) Просмотр всех записей; \n\t 2) Удаление записи по номеру, заданному пользователем;\n\t 3) Добавление новой записи в конец массива, элементы записи вводит пользователь с клавиатуры.\n\n";
            cout << "\nВведите номер подзадания: ";
            cin >> number2;
            switch (number2)
            {
            case 1: {
                printBooks; // Вызов функции для вывода всех записей
                break;
            }




    // Запись в текстовые файлы
    writeFormattedToFile(books, "books_formatted.txt");
    writeUnformattedToFile(books, "books_unformatted.txt");

    // Чтение из текстовых файлов
    cout << "Чтение из файла с оформлением:" << endl;
    readFormattedFromFile("books_formatted.txt");

    cout << "Чтение из файла без оформления:" << endl;
    vector<Book> booksFromFile = readUnformattedFromFile("books_unformatted.txt");
    printBooksUnformatted(booksFromFile);

    // Запись и чтение из бинарного файла
    writeToBinaryFile(books, "books.bin");
    vector<Book> booksFromBinary = readFromBinaryFile("books.bin");
    cout << "Чтение из бинарного файла:" << endl;
    printBooks(booksFromBinary);

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
