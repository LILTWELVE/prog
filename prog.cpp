﻿// prog.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b) 
// Числа а, b, f вводятся с клавиатуры. 
// Организовать пользовательский интерфейс, таким образом, чтобы было понятно, в каком порядке должны вводиться числа.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    
    int a, b, f;

    cout << "Введите число a: ";
    cin >> a;

    cout << "Введите число b: ";
    cin >> b;

    cout << "Введите число f: ";
    cin >> f;


    cout << "Вычисляем по формуле: x = (а + b — f / а) + f * a * a — (a + b) " << endl << "x = " << (a + b - f / a) + f * a * a - (a + b) << endl;


    return 0;
}
