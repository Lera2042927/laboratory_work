#include <iostream>
#include <cstdlib>
#include <ctime>

// ��������� �������
/*void task1();
void task2();
void task3();*/

using namespace std;
void generateArray(int arr[], unsigned int n, int min_limit, int max_limit);
int findMaxIndex(const int arr[], unsigned int n);
bool isComposite(int x);
bool isPrime(int x);
int sumAfterMax(const int arr[], unsigned int n, int i_max);
int sumBeforeMax(const int arr[], unsigned int i_max);
int** generateMatrix(unsigned int k_row, unsigned int l_col, int min_limit, int max_limit);
int* countPositive(int** arr_A, unsigned int k_row, unsigned int l_col);
int* countNegative(int** arr_A, unsigned int k_row, unsigned int l_col);
void printArray(int* arr, unsigned int size, const string& name);
void printMatrix(int** arr_A, unsigned int k_row, unsigned int l_col);
double* fillArray(int n);
double* sortArrayDescending(double arr[], int n);
double** fillMatrix(double arr[], int n);
double* printArray(double arr[], int n);
double** printMatrix(double** mat, int n);


#define MAX_ARRAY 1000
#define MAX_K_row 1000
#define MAX_L_column 1000
#define MAX_N 10
#define MIN_LIMIT 10
#define MAX_LIMIT 80

int main() {
    setlocale(LC_ALL, "Russian");
    int choice;

    do {
        cout << "�������� �������:\n";
        cout << "1. ������� 1\n";
        cout << "2. ������� 2\n";
        cout << "3. ������� 3\n";
        cout << "0. �����\n";
        cout << "��� �����: ";
        cin >> choice;

        switch (choice) {
        case 1:
            //task1();
        {
            /*setlocale(LC_ALL, "Russian");
            cout << "������������ ������ �7 ������� �1" << endl;
            cout << "� ���������� ������� ����� ����� ������������� ��������� ��������� ������� ������������� ����� max ��������" << endl;
            cout << "� ����� ������������� ������� ��������� �������, ������������� �� max �����" << endl;*/

            unsigned int n;
            int min_limit, max_limit;

            do {
                cout << "������� ����������� ����������� ������� \n";
                cin >> n;
                if (n > MAX_ARRAY)
                    cout << "����������� �� ����� ���� ������ " << MAX_ARRAY << endl << endl;
            } while (n > MAX_ARRAY);

            do {
                cout << "������� ������ ������ ����������� ������� \n";
                cin >> min_limit;
                cout << "������� ������� ������ ����������� ������� \n";
                cin >> max_limit;
                if (min_limit >= max_limit)
                    cout << "����������� ����� �� ����� ���� ������ ������������� ������ \n\n";
            } while (min_limit >= max_limit);

            int arr[MAX_ARRAY];

            // ��������� �������
            generateArray(arr, n, min_limit, max_limit);

            // ���������� ������� ������������� ��������
            int i_max = findMaxIndex(arr, n);
            cout << "������ ������������� ��������: " << i_max << endl;
            cout << "������������ �������: " << arr[i_max] << endl;

            // ����� ������������� ��������� ��������� ����� ������������� ��������
            int pol_sum = sumAfterMax(arr, n, i_max);
            cout << "����� ������������� ��������� ��������� �������, ������������� ����� ������������� ��������: " << pol_sum << "." << endl;

            // ����� ������������� ������� ��������� �� ������������� ��������
            int otr_sum = sumBeforeMax(arr, i_max);
            cout << "����� ������������� ������� ��������� �������, ������������� �� ������������� ��������: " << otr_sum << "." << endl;

           // return 0;
            break;
        }
        case 2: 
        {
            //task2();
            unsigned int k_row;
            unsigned int l_col;
            int min_limit;
            int max_limit;

            setlocale(LC_ALL, "Russian");
            cout << "������������ ������ �7 ������� �2" << endl;
            cout << "�� ���������� ������� A(k,l) ������������ ������ �(k)" << endl;
            cout << "������ ������� �������� ����� ���������� ������������� ��������� ��������������� ������ ������� �" << endl;
            cout << "� ������ C(k), ������ ������� �������� ����� ���������� ������������� ��������� ��������������� ������ ������� �" << endl;

            do {
                cout << "������� ���������� ����� ���������� ������� \n";
                cin >> k_row;
                if (k_row > MAX_K_row)
                    cout << "���������� ����� �� ����� ���� ������ " << MAX_K_row << endl << endl;
            } while (k_row > MAX_K_row);

            do {
                cout << "������� ���������� �������� ���������� ������� \n";
                cin >> l_col;
                if (l_col > MAX_L_column)
                    cout << "���������� �������� �� ����� ���� ������ " << MAX_L_column << endl << endl;
            } while (l_col > MAX_L_column);

            do {
                cout << "������� ������ ������ ���������� ������� \n";
                cin >> min_limit;
                cout << "������� ������� ������ ���������� ������� \n";
                cin >> max_limit;
                if (min_limit >= max_limit)
                    cout << "����������� ����� �� ����� ���� ������ ������������� ������ \n\n";
            } while (min_limit >= max_limit);

            

            // ��������� � ����� �������
            srand(time(NULL)); // ������������� ���������� ��������� �����
            int** arr_A = generateMatrix(k_row, l_col, min_limit, max_limit);
            printMatrix(arr_A, k_row, l_col);

            // ������� ������������� � ������������� ���������
            int* B = countPositive(arr_A, k_row, l_col);
            int* C = countNegative(arr_A, k_row, l_col);

            // ����� �����������
            printArray(B, k_row, "���������� ������������� ��������� � ������ ������:");
            printArray(C, k_row, "���������� ������������� ��������� � ������ ������:");

            // ������������ ������
            for (unsigned int i = 0; i < k_row; i++) {
                delete[] arr_A[i]; // ������������ ������ ������
            }
            delete[] arr_A; // ������������ ������� ����������
            delete[] B; // ������������ ������� B
            delete[] C; // ������������ ������� C


            //return 0;
            break;
        }
        case 3:
            //task3();
        {
            setlocale(LC_ALL, "Russian");
            cout << "������������ ������ �3 ������� �3" << endl;
            cout << "���� �������������� ����� a1,...an^2. �������� �������������� ���������� �������, ���������� ������� �������� �����" << endl;
            cout << "a1,...an^2, ��������������� �� �������� � ������������� � ��� �� �����" << endl;

            int n;
            do {
                cout << "������� n \n";
                cin >> n;
                if (n > MAX_N)
                    cout << "n �� ����� ���� ������ " << MAX_N << endl << endl;
            } while (n > MAX_N);

            // ���������� ������� ���������� �������
            double* numbers = fillArray(n);

            // ����� �������� �����
            cout << "�������� �����: ";
            printArray(numbers, n);

            // ���������� ����� �� ��������
            double* sortedNumbers = sortArrayDescending(numbers, n);

            // ����� ��������������� �����
            cout << "��������������� ����� �� ��������: ";
            printArray(sortedNumbers, n);

            // ���������� �������
            double** matrix = fillMatrix(sortedNumbers, n);

            // ����� �������
            cout << "�������:" << endl;
            printMatrix(matrix, n);

            // ������������ ������
            delete[] numbers; // ������������ ������� �����
            delete[] sortedNumbers; // ������������ ���������������� �������
            for (int i = 0; i < n; i++) {
                delete[] matrix[i]; // ������������ ������ ������ �������
            }
            delete[] matrix; // ������������ ������� ���������� �� ������

            //return 0;

            break;
        }
        case 0:
            cout << "����� �� ���������.\n";
            break;
        default:
            cout << "�������� �����. ����������, ���������� �����.\n";
        }
    } while (choice != 0);

    return 0;
}