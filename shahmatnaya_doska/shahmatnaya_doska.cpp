// shahmatnaya_doska.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{

    /*
    Задание 10:
Написать программу, которая выводит на экран шахматную доску с заданным размером
клеточки. 
    */
    setlocale(LC_CTYPE, ".1251");
    int h, a, w;
    cout << "Введите высоту шахматной доски.\nh = ";
    cin >> h;
    cout << "Введите ширину шахматной доски.\nw = ";
    cin >> w;
    cout << "Введите величину ячейки шахматной доски.\na = ";
    cin >> a;
    for (int i = 0; i < h; i++)
    {
        for (int jj = 0; jj < a; jj++)
        {
            for (int j = 0; j < w; j++)
            {
                for (int ii = 0; ii < a; ii++)
                {
                    ((i + j) % 2) ? (cout << '-') : (cout << 'x');
                }
            }
            cout << '\n';
        }
    }
    cout << "\n\n\n";
}