#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "functions.h"

using namespace std;

#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10
#define ARRAY_X_ROW_MAX 100
#define ARRAY_X_COL_MAX 100
#define MAX_ARRAY 1000



void fillArray(double** arr, unsigned int row_count, unsigned int col_count, int min_limit, int max_limit) {
    if (arr == nullptr)
        return;

    int delta = max_limit - min_limit + 1;
    for (unsigned int i = 0; i < row_count; i++) {
        double* row = arr[i];
        if (row) {
            for (unsigned int j = 0; j < col_count; j++) {
                double value = min_limit + rand() % delta; // ��������
                row[j] = value;
            }
        }
    }
}

void printArry(double** arr, unsigned int row_count, unsigned int col_count) {
    if (arr == nullptr)
        return;

    for (int i = 0; i < row_count; i++) {
        double* row = arr[i];
        if (row) {
            for (int j = 0; j < col_count; j++) {
                cout << row[j] << ",\t";
            }
            cout << endl;
        }
    }
}

void freeArray(double** arr, unsigned int row_count) {
    if (arr) {
        for (int i = 0; i < row_count; i++) {
            double* row = arr[i];
            if (row) {
                delete[] row;
            }
        }
        delete[] arr;
    }
}

    



    void removeMultiples(int*& arr, int& size, int multiple) {
        int offset = 0; // ������� ��������� ���������

        // �������� ��������, ������� �� ������ ��������� �����
        for (int i = 0; i < size; i++) {
            if ((arr[i] % multiple) != 0) {
                arr[offset] = arr[i];
                offset++;
            }
        }

        // ��������� ������
        size = offset;
    }

    
void getInput(int& n, int& min_limit, int& max_limit) {
    do {
        cout << "������� ����������� ����������� ������� (����. " << MAX_ARRAY << "): ";
        cin >> n;
        if (n > MAX_ARRAY)
            cout << "����������� �� ����� ���� ������ " << MAX_ARRAY << endl << endl;
    } while (n > MAX_ARRAY);

    do {
        cout << "������� ������ ������ ����������� �������: ";
        cin >> min_limit;
        cout << "������� ������� ������ ����������� �������: ";
        cin >> max_limit;
        if (min_limit >= max_limit)
            cout << "����������� ����� �� ����� ���� ������ ������������� ������" << endl << endl;
    } while (min_limit >= max_limit);
}

void fillArray(int* arr, int size, int min_limit, int max_limit) {
    int delta = max_limit - min_limit + 1;
    srand(static_cast<unsigned int>(time(0))); // ������������� ���������� ��������� �����
    for (int i = 0; i < size; i++) {
        arr[i] = min_limit + rand() % delta; // ���������� �������
    }
}

void removemultiples(int*& arr, int& size, int multiple) {
    int offset = 0; // ������� ��������� ���������

    // �������� ��������, ������� �� ������ ��������� �����
    for (int i = 0; i < size; i++) {
        if (arr[i] % multiple != 0) {
            arr[offset] = arr[i];
            offset++;
        }
    }

    // ��������� ������ �������
    size = offset;
}

void printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}





