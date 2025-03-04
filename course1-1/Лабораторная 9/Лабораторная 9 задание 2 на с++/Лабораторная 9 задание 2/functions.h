#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

/*void task1();
void task2();
void task3();*/

void fillArray(double** arr, unsigned int row_count, unsigned int col_count, int min_limit, int max_limit);
void printArry(double** arr, unsigned int row_count, unsigned int col_count);
void freeArray(double** arr, unsigned int row_count);

void removeMultiples(int*& arr, int& size, int multiple);

/*void getInput(int& n, int& min_limit, int& max_limit);
void processArray(int*& arr, int& size);
void removeMultiples(int*& arr, int& size, int multiple);
void fillArray(int* arr, int size, int min_limit, int max_limit);
void printArray(const int* arr, int size, const string& name);*/

void removemultiples(int*& arr, int& size, int multiple);
void fillArray(int* arr, int size, int min_limit, int max_limit);
void printArray(const int* arr, int size);
void getInput(int& n, int& min_limit, int& max_limit);

#endif // FUNCTIONS_H

