// черновик для задания 3 на с++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


/*#include <iostream>
#include <string>
#include <cctype>
#include <locale>

using namespace std;

// Функция для преобразования первой буквы каждого слова в заглавную
void capitalizeWords(string& str) {
    bool newWord = true; // Флаг для определения начала слова

    for (size_t i = 0; i < str.size(); ++i) {
        if (newWord && isalpha(str[i], locale("ru_RU.utf8"))) { // Проверяем, является ли символ буквой и является ли это началом слова
            str[i] = toupper(str[i]); // Делаем первую букву заглавной
            newWord = false; // Устанавливаем флаг, что слово начато
        }
        else if (!isalpha(str[i], locale("ru_RU.utf8"))) {
            newWord = true; // Если символ не буква, след. символ может быть началом слова
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Устанавливаем локаль для работы с русским текстом

    string sentence; // Используем строку из стандартной библиотеки

    cout << "Введите строку: ";
    getline(cin, sentence); // Читаем строку с пробелами

    // Преобразование строки
    capitalizeWords(sentence);

    // Вывод результата
    cout << "Результат: " << sentence << endl;

    return 0;
}*/



/*/#include <iostream>
#include <string>
#include <sstream>
#include <locale>

using namespace std;

// Функция для преобразования первой буквы каждого слова в заглавную
string capitalizeWords(const string& str) {
    stringstream ss(str);
    string word;
    string result;

    while (ss >> word) { // Читаем слова из строки
        if (!word.empty() && isalpha(word[0], locale("ru_RU.UTF-8"))) {
            word[0] = toupper(word[0]); // Делаем первую букву заглавной
        }
        result += word + " "; // Добавляем слово к результату
    }

    // Убираем последний пробел, если он есть
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Устанавливаем локаль для работы с русским текстом

    // Ввод строки от пользователя
    string sentence;
    cout << "Введите предложение на русском языке: ";
    getline(cin, sentence); // Читаем всю строку, включая пробелы

    // Преобразование строки
    string result = capitalizeWords(sentence);

    // Вывод результата
    cout << "Результат: " << result << endl;

    return 0;
}*/



#include <iostream>
#include <string>
#include <sstream>
#include <locale>

using namespace std;

// Функция для преобразования первой буквы каждого слова в заглавную
string capitalizeWords(const string& str) {
    stringstream ss(str);
    string word;
    string result;

    while (ss >> word) { // Читаем слова из строки
        if (!word.empty() && isalpha(word[0], locale("ru_RU.UTF-8"))) {
            word[0] = toupper(word[0]); // Делаем первую букву заглавной
        }
        result += word + " "; // Добавляем слово к результату
    }

    // Убираем последний пробел, если он есть
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8"); // Устанавливаем локаль для работы с русским текстом

    // Ввод строки от пользователя
    string sentence;
    cout << "Введите предложение на русском языке: ";
    getline(cin, sentence); // Читаем всю строку, включая пробелы

    // Выводим введенную строку для отладки
    cout << "Вы ввели: " << sentence << endl;

    // Преобразование строки
    string result = capitalizeWords(sentence);

    // Вывод результата
    cout << "Результат: " << result << endl;

    return 0;
}




















/*#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>

using namespace std;

// Функция для генерации случайного предложения
void generateRandomSentence(char* str, int maxLength) {
    const char* words[] = {
        "привет", "как", "дела", "это", "тестовая", "строка", "на", "русском", "языке", "случайные", "слова", "генерация"
    };
    int numWords = sizeof(words) / sizeof(words[0]);
    int length = 0;

    while (length < maxLength - 1) {
        const char* word = words[rand() % numWords];
        int wordLength = 0;

        // Находим длину слова
        while (word[wordLength] != '\0') {
            wordLength++;
        }

        // Проверяем, достаточно ли места для добавления слова
        if (length + wordLength + 1 >= maxLength) break;

        // Добавляем пробел перед словом, если это не первое слово
        if (length > 0) {
            str[length++] = ' ';
        }

        // Копируем слово в строку
        for (int i = 0; i < wordLength; i++) {
            str[length++] = word[i];
        }
    }
    str[length] = '\0'; // Завершаем строку
}

// Функция для преобразования первой буквы каждого слова в заглавную
void capitalizeWords(char* str) {
    bool newWord = true; // Флаг для определения начала слова

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) { // Если текущий символ - буква
            if (newWord) {
                str[i] = toupper(str[i]); // Делаем первую букву заглавной
                newWord = false; // Устанавливаем флаг, что слово начато
            }
        } else {
            newWord = true; // Если символ не буква, след. символ может быть началом слова
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand(static_cast<unsigned int>(time(0))); // Инициализация генератора случайных чисел

    const int maxLength = 255; // Максимальная длина строки
    char sentence[maxLength];

    // Генерация случайной строки
    generateRandomSentence(sentence, maxLength);
    cout << "Сгенерированная строка: " << sentence << endl;

    // Преобразование строки
    capitalizeWords(sentence);

    // Вывод результата
    cout << "Результат: " << sentence << endl;

    return 0;
}*/


/*#include <iostream>
#include <cctype>

using namespace std;

// Функция для преобразования первой буквы каждого слова в заглавную
void capitalizeWords(char* str) {
    bool newWord = true; // Флаг для определения начала слова

    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) { // Если текущий символ - буква
            if (newWord) {
                str[i] = toupper(str[i]); // Делаем первую букву заглавной
                newWord = false; // Устанавливаем флаг, что слово начато
            }
        }
        else {
            newWord = true; // Если символ не буква, след. символ может быть началом слова
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    const int maxLength = 255; // Максимальная длина строки
    char sentence[maxLength];

    cout << "Введите строку: ";
    cin.getline(sentence, maxLength); // Читаем строку с пробелами

    // Преобразование строки
    capitalizeWords(sentence);

    // Вывод результата
    cout << "Результат: " << sentence << endl;

    return 0;
}*/




















/*#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void capitalizeWords(char* str) {
    bool newWord = true; // Флаг для определения начала слова

    for (int i = 0; str[i] != '\0'; ++i) {
        // Проверяем, является ли текущий символ буквой
        if (isalpha(str[i])) {
            if (newWord) {
                str[i] = toupper(str[i]); // Делаем первую букву заглавной
                newWord = false; // Устанавливаем флаг, что слово начато
            }
        }
        else {
            newWord = true; // Если символ не буква, след. символ может быть началом слова
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    // Ввод строки
    char str[256];
    cout << "Введите строку: ";
    cin.getline(str, sizeof(str));

    // Преобразование строки
    capitalizeWords(str);

    // Вывод результата
    cout << "Результат: " << str << endl;

    return 0;
}*/



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
