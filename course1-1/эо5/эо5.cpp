// эо5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

// задание 5
/*#include <iomanip>
#include <iostream>
#include <cstdlib>  // Для rand() и srand()
#include <ctime>    // Для time()
using namespace std;

// Функция для нахождения количества составных делителей числа
int countCompositeDivisors(int number) 
{
    int count = 0;
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0) 
        {
            // Проверяем, является ли делитель составным
            bool isComposite = false;
            for (int j = 2; j <= i / 2; j++) 
            {
                if (i % j == 0) 
                {
                    isComposite = true;
                    break;
                }
            }
            if (isComposite) 
            {
                count++;
            }
        }
    }
    return count;
}

// Функция для вставки составных делителей в массив
void insertCompositeDivisors(int*& arr, int& size) 
{
    // Создаем новый массив с максимальным возможным размером
    int newSize = size; // Начинаем с текущего размера
    for (int i = 0; i < size; i++) 
    {
        newSize += countCompositeDivisors(arr[i]); // Увеличиваем размер на количество составных делителей
    }

    int* newArr = new int[newSize]; // Новый массив
    int index = 0; // Индекс для нового массива

    for (int i = 0; i < size; i++)
    {
        newArr[index++] = arr[i]; // Копируем текущий элемент

        // Вставляем составные делители
        for (int j = 2; j <= arr[i] / 2; j++) 
        {
            if (arr[i] % j == 0) 
            {
                // Проверяем, является ли делитель составным
                bool isComposite = false;
                for (int k = 2; k <= j / 2; k++) 
                {
                    if (j % k == 0) 
                    {
                        isComposite = true;
                        break;
                    }
                }
                if (isComposite) 
                {
                    newArr[index++] = j; // Вставляем составной делитель
                }
            }
        }
    }

    // Обновляем указатель и размер массива
    size = newSize;
    delete[] arr; // Освобождаем старый массив
    arr = newArr; // Указываем на новый массив
}

// Функция для вывода массива
void printArray(const int* arr, int size)
{
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размерность массива: ";
    cin >> n;

    // Инициализация генератора случайных чисел
    srand(static_cast<unsigned int>(time(0)));

    // Создаем массив и заполняем его случайными числами
    int* X = new int[n];
    for (int i = 0; i < n; i++)
    {
        X[i] = rand() % 100 + 1; // Случайные числа от 1 до 100
    }
    
    cout << "Исходный массив: ";
    printArray(X, n);
    
    // Вставляем составные делители
    insertCompositeDivisors(X, n);

    cout << "Массив после вставки составных делителей: ";
    printArray(X, n);

    // Освобождение памяти
    delete[] X;

    return 0;
}*/
































//задание 1
#include <iostream>
using namespace std;

int main() 
{ setlocale(LC_ALL, "Russian");
    long long totalSeconds; // Объявляем переменную для хранения секунд
    cout << "Введите количество секунд: ";
    cin >> totalSeconds; // Вводим количество секунд

    // Вычисляем количество лет, дней, часов, минут и секунд
    long long years = totalSeconds / 31536000; // 60 * 60 * 24 * 365
    totalSeconds %= 31536000; // Оставшиеся секунды после вычисления лет

    long long days = totalSeconds / 86400; // 60 * 60 * 24
    totalSeconds %= 86400; // Оставшиеся секунды после вычисления дней

    long long hours = totalSeconds / 3600; // 60 * 60
    totalSeconds %= 3600; // Оставшиеся секунды после вычисления часов

    long long minutes = totalSeconds / 60; // 60
    long long seconds = totalSeconds % 60; // Остаток - это секунды

    // Вывод результата
    cout << years << " лет, " << days << " дней, " << hours << " часов, "
        << minutes << " минут, " << seconds << " секунд." << endl;

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
