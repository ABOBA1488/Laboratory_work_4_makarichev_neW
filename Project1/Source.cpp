/******************************************************************************
��������� ���� ������������
����1-2
������������ ������ �4 ������ ������
������� � 6
�������: ��������   ���������,   �������   ��   ��������   �   ����������   ������   �������   ���������   ��   �����������.
�������  ����� �����������  -  �����,  ���������������  ���  ��������������  ����� � ������� ���������  �� �����
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