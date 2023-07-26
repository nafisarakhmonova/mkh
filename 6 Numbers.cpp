/*  Напишите программу, которая запрашивает у пользователя
целое число N и выводит на экран только четные числа от 1 до N */

#include <iostream>

using namespace std;

int main()
{
    int N;
 
    cout << "Введите целое число: ";
    cin >> N;
 
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        cout << i << endl;
    }

    return 0;
}