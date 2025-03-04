#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

#define MAX_ARRAY 1000
#define MAX_K_row 1000
#define MAX_L_column 1000
#define MAX_N 10
#define MIN_LIMIT 10
#define MAX_LIMIT 80
int B[MAX_K_row]; // ��� �������������
int C[MAX_K_row]; // ��� �������������
int arr_A[MAX_K_row][MAX_L_column];

// ������� ��� ��������� �������
    void generateArray(int arr[], unsigned int n, int min_limit, int max_limit) 
    {
    int delta = max_limit - min_limit + 1;
    srand(time(0));
    for (unsigned int i = 0; i < n; i++) {
        arr[i] = min_limit + rand() % delta; // ��������
        cout << arr[i] << " ";
    }
    cout << endl;
}

// ������� ��� ���������� ������� ������������� �������� �������
int findMaxIndex(const int arr[], unsigned int n) {
    int i_max = 0; // ������ ������������� ��������
    for (unsigned int i = 1; i < n; i++) {
        if (arr[i] > arr[i_max]) i_max = i;
    }
    return i_max;
}

// ������� ��� ��������, �������� �� ����� ���������
bool isComposite(int x) {
    if (x <= 1) return false; // 1 � ������������� ����� �� ���������
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return true; // ��������� �����
    }
    return false; // ������� �����
}

// ������� ��� ��������, �������� �� ����� �������
bool isPrime(int x) {
    if (x <= 1) return false; // 1 � ������������� ����� �� �������
    for (int i = 2; i <= sqrt(x); i++) {
        if (x % i == 0) return false; // ����� ������� ������
    }
    return true; // ������� �����
}

// ������� ��� �������� ����� ������������� ��������� ��������� ������� ����� ������������� ��������
int sumAfterMax(const int arr[], unsigned int n, int i_max) {
    int sum = 0;
    for (unsigned int i = i_max + 1; i < n; i++)
    {

        int x = arr[i];
        if (x > 0) sum += x;
        /*if (arr[i] > 0 && isComposite(arr[i]))
        {
            sum += arr[i];
        }*/
    }
    return sum;
}

// ������� ��� �������� ����� ������������� ������� ��������� ������� �� ������������� ��������
int sumBeforeMax(const int arr[], unsigned int i_max)
{
    int sum = 0;
    for (unsigned int i = 0; i < i_max; i++)
    {
        int x = arr[i];
        if (x < 0) sum += x;
        /* if (arr[i] < 0 && isPrime(arr[i])) {
             sum += arr[i];
         }*/
    }
    return sum;
}

 
    unsigned int k_row, l_col;
    int min_limit, max_limit;
   // ������� ��� ��������� ���������� �������
    int** generateMatrix(unsigned int k_row, unsigned int l_col, int min_limit, int max_limit) 
    {
        int delta = max_limit - min_limit + 1;
        int** arr_A = new int* [k_row]; // ������ ���������� �� ������
        for (unsigned int i = 0; i < k_row; i++) {
            arr_A[i] = new int[l_col]; // ��������� ������ ��� ������ ������
            for (unsigned int j = 0; j < l_col; j++) {
                arr_A[i][j] = min_limit + rand() % delta; // ��������� ���������� ����� � �������� ���������
                cout << arr_A[i][j] << " ";
            }
            cout << endl;
        }
        return arr_A;
    }

    // ������� ��� �������� ������������� � ������������� ��������� � ������ ������
    int* countPositive(int** arr_A, unsigned int k_row, unsigned int l_col) {
        int* B = new int[k_row](); // ������ ��� ������������� ��������� � ������ ������
        for (unsigned int i = 0; i < k_row; i++) {
            for (unsigned int j = 0; j < l_col; j++) {
                if (arr_A[i][j] > 0) {
                    B[i]++;
                }
            }
        }
        return B;
    }

    int* countNegative(int** arr_A, unsigned int k_row, unsigned int l_col) {
        int* C = new int[k_row](); // ������ ��� ������������� ��������� � ������ ������
        for (unsigned int i = 0; i < k_row; i++) {
            for (unsigned int j = 0; j < l_col; j++) {
                if (arr_A[i][j] < 0) {
                    C[i]++;
                }
            }
        }
        return C;
    }

    // ������� ��� ������ �������
    void printArray(int* arr, unsigned int size, const string & name) {
        cout << name << endl;
        for (unsigned int i = 0; i < size; ++i) {
            cout << "������ " << i + 1 << ": " << arr[i] << endl;
        }
    }

    // ������� ��� ������ ���������� �������
    void printMatrix(int** arr_A, unsigned int k_row, unsigned int l_col) {
        cout << "������� A(k,l):\n";
        for (unsigned int i = 0; i < k_row; i++) {
            for (unsigned int j = 0; j < l_col; j++) {
                cout << arr_A[i][j] << " ";
            }
            cout << endl;
        }
    }


    
    double* fillArray(int n) {
        unsigned int numbers_count = n * n;
        double* arr = new double[numbers_count]; // ������������ ������ ��� �����
        srand(time(0)); // ������������� ���������� ��������� �����
        for (unsigned int i = 0; i < numbers_count; i++) {
            arr[i] = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); // �������� �����
        }
        return arr; // ���������� ��������� �� ����������� ������
    }

    double* sortArrayDescending(double arr[], int n) {
        unsigned int numbers_count = n * n;
        double* sortedArr = new double[numbers_count]; // ������������ ������ ��� ��������������� �����
        for (unsigned int i = 0; i < numbers_count; i++) {
            sortedArr[i] = arr[i]; // �������� �������� � ����� ������
        }

        for (unsigned int i = 1; i < numbers_count; i++) {
            double key = sortedArr[i];
            int j = i - 1;
            while (j >= 0 && sortedArr[j] < key) {
                sortedArr[j + 1] = sortedArr[j];
                j--;
            }
            sortedArr[j + 1] = key;
        }
        return sortedArr; // ���������� ��������� �� ��������������� ������
    }

    double** fillMatrix(double arr[], int n) {
        unsigned int numbers_count = n * n;
        double** mat = new double* [n]; // ������������ ������ ���������� �� ������
        for (int i = 0; i < n; i++) {
            mat[i] = new double[n]; // �������� ������ ��� ������ ������
        }

        unsigned int min_row = 0;
        unsigned int min_col = 0;
        int step = 1; // ��� ��� ����� �����������
        int row = 0; // ��������� ������
        int col = 0; // ��������� �������

        for (unsigned int i = 0; i < numbers_count; i++) {
            mat[row][col] = arr[i];
            col += step;
            row -= step;
            if (col >= n) {
                col--;
                row += 2;
                step = -step;
            }
            else if (row >= n) {
                row--;
                col += 2;
                step = -step;
            }
            else if (col < 0) {
                col = 0;
                step = -step;
            }
            else if (row < 0) {
                row = 0;
                step = -step;
            }
        }
        return mat; // ���������� ��������� �� �������
    }

    double* printArray(double arr[], int n) {
        unsigned int numbers_count = n * n;
        for (unsigned int i = 0; i < numbers_count; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return arr; // ���������� ��������� �� ������ (��� ������ ����� ������� nullptr)
    }

    double** printMatrix(double** mat, int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << "\t";
            }
            cout << endl;
        }
        return mat; // ���������� ��������� �� ������� (��� ������ ����� ������� nullptr)
    }
