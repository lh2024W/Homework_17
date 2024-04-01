// Homework_17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

void showArray(int*** ar, int rows, int columns); //показать массив
void addRow(int*** ar, int rows, int columns);//добавить строку
void deleteRow(int*** ar, int rows, int columns);//удалить строку
void addColumn(int*** ar, int rows, int columns); //добавить столбец
void deleteColumn(int*** ar, int rows, int columns); //удалить столбец

#include <iostream>
using namespace std;

int main()
{
    //Написать 4 функции:

    //Задание 1. Добавляет строку в конец двумерного динамического массива. Новые элементы равны 0.

    //Задание 2. Удаляет строку с конца двумерного динамического массива.

    //Задание 3. Добавляет столбец в конец двумерного динамического массива. Новые элементы равны 0.

    //Задание 4. Удаляет столбец с конца двумерного динамического массива.


    unsigned int rows = 3;       // количество строк
    unsigned int columns = 2;    // количество столбцов
    
    int** ar = new int* [rows]; // выделяем память под двухмерный массив
    for (int y = 0; y < rows; y++) {
        ar[y] = new int[columns];
        for (int x = 0; x < columns; x++) {
            ar[y][x] = rand() % 100;
            cout << ar[y][x] << "\t";
        }
        cout << "\n\n";
    }
    addRow(&ar, rows, columns);
    showArray(&ar, rows, columns);
    
    deleteRow(&ar, rows, columns);
    showArray(&ar, rows, columns);

    addColumn(&ar, rows, columns);
    showArray(&ar, rows, columns);
    
    deleteColumn(&ar, rows, columns);
    showArray(&ar, rows, columns);
    
    for (int y = 0; y < rows; y++)
        delete[]ar[y];
    delete[]ar;
    
}


void showArray(int*** ar, int rows, int columns) {
    for (int y = 0; y < rows; y++) {
        for (int x = 0; x < columns; x++) {
            (*ar[y][x]) = rand() % 100;
            cout << (*ar[y][x]) << "\t";
        }
    }
}

void addRow(int*** ar, int rows, int columns) {
    
    for (int y = 0; y < rows+1; y++) {
        for (int x = 0; x < columns; x++) {
            (*ar[y][x]) = 0;
            cout << (*ar[y][x]) << "\t";
        }
        cout << "\n\n";
    }
}

void deleteRow(int*** ar, int rows, int columns) { 

    for (int y = rows; y > 0; y--) {
        delete[] ar[y];
        cout << "\n\n";
    }
}

void addColumn(int*** ar, int rows, int columns) {

    for (int y = 0; y < rows; y++) {
        for (int x = 0; x < columns+1; x++) {
            (*ar[y][x]) = 0;
            cout << (*ar[y][x]) << "\t";
        }
        cout << "\n\n";
    }
}

void deleteColumn(int*** ar, int rows, int columns) {
    for (int y = 0; y < rows; y++) {
        for (int x = columns; x > 0; x--) {
            delete[] ar[y][x];
            cout << "\n\n";
        }
    }
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
