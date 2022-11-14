/******************************************************************************
Макаричев Семён Вячеславович
КТбо1-2
Лабораторная работа №4 «Файлы данных
Вариант № 6
Задание: Написать   программу,   которая   во   вводимом   с   клавиатуры   тексте   сделает   разбиение   на   предложения.
Условие  конца предложения  -  точка,  восклицательный  или  вопросительный  знаки и выведет результат  на экран
*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <locale>
#include <string>
using namespace std;
int main()
{
    string str;
    setlocale(LC_ALL, "russian");
    ifstream fin("F1.txt");
    ofstream fout("F2.txt");
    string strh;
    while (!fin.eof())
    {
        getline(fin, strh);
        str += strh;
    }
    for (int i = 0; i < str.length(); i++)
    {
        fout << str[i];
        if (str[i] == '?' || str[i] == '!')
        {
            fout << endl;
        }
        if (str[i] == '.' && str[i + 1] != '.' && str[i + 2] != '.')
        {
            fout << endl;
        }
    }
    fout.close();
    fin.close();
}