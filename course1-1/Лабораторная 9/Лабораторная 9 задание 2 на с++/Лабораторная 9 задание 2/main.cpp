#include <iostream>
#include "functions.h" // ���������� ������������ ����

using namespace std;
// ��������� �������
/*void task1();
void task2();
void task3();*/
#define MIN_LIMIT 10
#define MAX_LIMIT 80
#define MIN_Y_LIMIT 1
#define MAX_Y_LIMIT 10
#define MAX_N 10
#define ARRAY_X_ROW_MAX 100
#define ARRAY_X_COL_MAX 100
#define MAX_ARRAY 1000


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
        {
            cout << "������������ ������ �5 ������� �1" << endl;
            cout << "������ �������: ������������ ����� �(N), ����������� ����� Y(N)." << endl;
            cout << "� ������� X ������ ������� ��������� ������� ���, ������� ������� � ��������������� �������� ������� Y." << endl;

            int n; // ������ ��������
            do {
                cout << "������� n \n";
                cin >> n;
                if (n > MAX_N)
                    cout << "n �� ����� ���� ������ " << MAX_N << endl << endl;
            } while (n > MAX_N);

            int* Y = new int[n];
            int delta = MAX_Y_LIMIT - MIN_Y_LIMIT + 1;

            int total_count = 0; // ������������ ���������� ��������� ������� X
            double* X = new double[n]; //������ � �������� ������������ �����

            // ��������� ������ Y ���������� ����������
            srand(time(0));
            for (int i = 0; i < n; i++) {
                int y = MIN_Y_LIMIT + rand() % delta; // ��������
                Y[i] = y;
                total_count += y;
            }

            delta = MAX_LIMIT - MIN_LIMIT + 1;

            double* expanded_X = new double[total_count]; // ������ ��� ������������ X (��������������)
            // ��������� �������� ������ X ���������� ������������� ������� � ��������� [MIN_LIMIT, MAX_LIMIT]
            for (int i = 0; i < n; i++) {
                X[i] = MIN_LIMIT + ((double)rand()) / RAND_MAX * (MAX_LIMIT - MIN_LIMIT); // �������� ��� ������� X
            }

            int offset = 0; // �������� �������� ������������� ����� � ������� � (�� ������ �������)
            // ��������� ������ expanded_X, �������� �������� ������� X �� ���������� � Y
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < Y[i]; j++) {
                    expanded_X[offset] = X[i];
                    offset++;
                }
            }

            // ����� �������� X � Y
            cout << "������ X (��������������): ";
            for (int i = 0; i < total_count; ++i) {
                cout << expanded_X[i] << " ";
            }
            cout << endl;

            cout << "������ Y: ";
            for (int i = 0; i < n; ++i) {
                cout << Y[i] << " ";
            }
            cout << endl;

            cout << "�������� ������ X: ";
            for (int i = 0; i < n; ++i) {
                cout << X[i] << " ";
            }
            cout << endl;

            // ����������� ������
            delete[] X;
            delete[] Y;
            delete[] expanded_X;

            //task1();
            break;
        }
        case 2:
            //task2();
        {
            cout << "������������ ������ �5 ������� �2" << endl;
            cout << "������ ������� X(M1,N1) � Y(M2,N2) (M1>M2, N1>N2)." << endl;
            cout << "������� ��� ����� ��������� �������, ���������� ��� ���������� �������� X � Y." << endl;

            unsigned int x_row_count, x_col_count, y_row_count, y_col_count;

            do {
                cout << "������� ���������� ����� ���������� ������� X:\n";
                cin >> x_row_count;
                if (x_row_count > ARRAY_X_ROW_MAX)
                    cout << "���������� ����� �� ����� ���� ������ " << ARRAY_X_ROW_MAX << endl << endl;
            } while (x_row_count > ARRAY_X_ROW_MAX);

            do {
                cout << "������� ���������� �������� ���������� ������� X:\n";
                cin >> x_col_count;
                if (x_col_count > ARRAY_X_COL_MAX)
                    cout << "���������� �������� �� ����� ���� ������ " << ARRAY_X_COL_MAX << endl << endl;
            } while (x_col_count > ARRAY_X_COL_MAX);

            do {
                cout << "������� ���������� ����� ���������� ������� Y:\n";
                cin >> y_row_count;
                if (y_row_count >= x_row_count)
                    cout << "���������� ����� ������� Y ������ ���� ������ " << x_row_count << endl << endl;
            } while (y_row_count >= x_row_count);

            do {
                cout << "������� ���������� �������� ���������� ������� Y:\n";
                cin >> y_col_count;
                if (y_col_count >= x_col_count)
                    cout << "���������� �������� ������� Y ������ ���� ������ " << x_col_count << endl << endl;
            } while (y_col_count >= x_col_count);

            // ��������� ������ ��� ������� X
            double** X = new double* [x_row_count];
            for (unsigned int i = 0; i < x_row_count; i++) {
                X[i] = new double[x_col_count];
            }

            // ��������� ������ ��� ������� Y
            double** Y = new double* [y_row_count];
            for (unsigned int i = 0; i < y_row_count; i++) {
                Y[i] = new double[y_col_count];
            }

            srand(time(NULL));

            // ���������� �������� X � Y
            fillArray(X, x_row_count, x_col_count, MIN_LIMIT, MAX_LIMIT);
            cout << "������ X:\n";
            printArry(X, x_row_count, x_col_count);

            fillArray(Y, y_row_count, y_col_count, MIN_LIMIT, MAX_LIMIT);
            cout << "\n������ Y:\n";
            printArry(Y, y_row_count, y_col_count);
            cout << endl;

            // �������� �������������� ��������
            unsigned int r1_row_count = x_row_count;
            unsigned int r1_col_count = x_col_count - y_col_count;
            double** result1 = new double* [r1_row_count];

            for (unsigned int i = 0; i < r1_row_count; i++) {
                result1[i] = new double[r1_col_count];
                for (unsigned int j = 0; j < r1_col_count; j++) {
                    result1[i][j] = X[i][j + y_col_count]; // �������� ��������
                }
            }

            unsigned int r2_row_count = x_row_count - y_row_count;
            unsigned int r2_col_count = y_col_count;
            double** result2 = new double* [r2_row_count];

            for (unsigned int i = 0; i < r2_row_count; i++) {
                result2[i] = new double[r2_col_count];
                for (unsigned int j = 0; j < r2_col_count; j++) {
                    result2[i][j] = X[i + y_row_count][j]; // �������� ��������
                }
            }

            // ����� ��������������� ������� 1
            cout << "\n�������������� ������ 1 (�������� X � Y):\n";
            printArry(result1, r1_row_count, r1_col_count);

            // ����� ��������������� ������� 2
            cout << "\n�������������� ������ 2 (�������� X � Y):\n";
            printArry(result2, r2_row_count, r2_col_count);

            // ������������ ������
            freeArray(result1, r1_row_count);
            freeArray(result2, r2_row_count);
            freeArray(X, x_row_count);
            freeArray(Y, y_row_count);

            break;
        }
        case 3:
            //task3();
        {
            
            setlocale(LC_ALL, "Russian");
            cout << "������������ ������ �5 ������� �3" << endl;
            cout << "����� ������ �(N). ������� ������� �� ���� ��� ��������, ������� 3, ����� 4, ����� 5." << endl;

            int n, min_limit, max_limit;
            getInput(n, min_limit, max_limit); // ��������� ����� �� ������������

            int* X = new int[n];
            fillArray(X, n, min_limit, max_limit); // ���������� �������

            // ����� ��������� �������
            cout << "�������� ������: ";
            printArray(X, n);

            // �������� ���������, ������� 3, 4 � 5
            removeMultiples(X, n, 3);
            cout << "������ ����� �������� ���������, ������� 3: ";
            printArray(X, n);

            removeMultiples(X, n, 4);
            cout << "������ ����� �������� ���������, ������� 4: ";
            printArray(X, n);

            removeMultiples(X, n, 5);
            cout << "������ ����� �������� ���������, ������� 5: ";
            printArray(X, n);

            // ������������ ������
            delete[] X;
        
            break;
        }
        case 0:
            cout << "����� �� ���������." << endl;
            break;
        default:
            cout << "������������ �����. ���������� �����." << endl;
        }
    } while (choice != 0);

    return 0;
}
